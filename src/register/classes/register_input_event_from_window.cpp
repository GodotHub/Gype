
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_from_window_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_from_window_class_def = {
	"InputEventFromWindow",
	.finalizer = input_event_from_window_class_finalizer
};

static JSValue input_event_from_window_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventFromWindow::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventFromWindow *input_event_from_window_class = memnew(InputEventFromWindow);
	if (!input_event_from_window_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_from_window_class);	
	return obj;
}
static JSValue input_event_from_window_class_set_window_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventFromWindow::set_window_id, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_from_window_class_get_window_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventFromWindow::get_window_id, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_from_window_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_window_id", 1, &input_event_from_window_class_set_window_id),
	JS_CFUNC_DEF("get_window_id", 0, &input_event_from_window_class_get_window_id),
};

void define_input_event_from_window_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "window_id"),
        JS_NewCFunction(ctx, input_event_from_window_class_get_window_id, "get_window_id", 0),
        JS_NewCFunction(ctx, input_event_from_window_class_set_window_id, "set_window_id", 1),
        JS_PROP_GETSET
    );
}

static int js_input_event_from_window_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventFromWindow::__class_id);
	classes["InputEventFromWindow"] = InputEventFromWindow::__class_id;
	class_id_list.insert(InputEventFromWindow::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventFromWindow::__class_id, &input_event_from_window_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventFromWindow::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventFromWindow::__class_id, proto);

	define_input_event_from_window_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_from_window_class_proto_funcs, _countof(input_event_from_window_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_from_window_class_constructor, "InputEventFromWindow", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventFromWindow", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_from_window_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_from_window_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventFromWindow");
	return m;
}

JSModuleDef *js_init_input_event_from_window_module(JSContext *ctx) {
	return _js_init_input_event_from_window_module(ctx, "godot/classes/input_event_from_window");
}

void register_input_event_from_window() {
	InputEventFromWindow::__init_js_class_id();
	js_init_input_event_from_window_module(ctx);
}