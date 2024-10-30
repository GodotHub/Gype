
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_gesture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_gesture_class_def = {
	"InputEventGesture",
	.finalizer = input_event_gesture_class_finalizer
};

static JSValue input_event_gesture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventGesture::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventGesture *input_event_gesture_class;
	if (argc == 1) {
		Variant vobj = *argv;
		input_event_gesture_class = static_cast<InputEventGesture *>(static_cast<Object *>(vobj));
	} else {
		input_event_gesture_class = memnew(InputEventGesture);
	}
	if (!input_event_gesture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_gesture_class);	
	return obj;
}
static JSValue input_event_gesture_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventGesture::set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_gesture_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventGesture::get_position, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_gesture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_position", 1, &input_event_gesture_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_gesture_class_get_position),
};

void define_input_event_gesture_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, input_event_gesture_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, input_event_gesture_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_input_event_gesture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventGesture::__class_id);
	classes["InputEventGesture"] = InputEventGesture::__class_id;
	class_id_list.insert(InputEventGesture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventGesture::__class_id, &input_event_gesture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventGesture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEventWithModifiers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventGesture::__class_id, proto);

	define_input_event_gesture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_gesture_class_proto_funcs, _countof(input_event_gesture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_gesture_class_constructor, "InputEventGesture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventGesture", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_gesture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/input_event_with_modifiers';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_gesture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventGesture");
	return m;
}

JSModuleDef *js_init_input_event_gesture_module(JSContext *ctx) {
	return _js_init_input_event_gesture_module(ctx, "@godot/classes/input_event_gesture");
}

void register_input_event_gesture() {
	InputEventGesture::__init_js_class_id();
	js_init_input_event_gesture_module(ctx);
}