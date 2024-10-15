
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_shortcut.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_shortcut_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventShortcut *input_event_shortcut = static_cast<InputEventShortcut *>(JS_GetOpaque(val, InputEventShortcut::__class_id));
	if (input_event_shortcut)
		memdelete(input_event_shortcut);
}

static JSClassDef input_event_shortcut_class_def = {
	"InputEventShortcut",
	.finalizer = input_event_shortcut_class_finalizer
};

static JSValue input_event_shortcut_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventShortcut::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventShortcut *input_event_shortcut_class = memnew(InputEventShortcut);
	if (!input_event_shortcut_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_shortcut_class);	
	return obj;
}
static JSValue input_event_shortcut_class_set_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventShortcut::set_shortcut, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_shortcut_class_get_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputEventShortcut::get_shortcut, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_shortcut_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shortcut", 1, &input_event_shortcut_class_set_shortcut),
	JS_CFUNC_DEF("get_shortcut", 0, &input_event_shortcut_class_get_shortcut),
};

void define_input_event_shortcut_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shortcut"),
        JS_NewCFunction(ctx, input_event_shortcut_class_get_shortcut, "get_shortcut", 0),
        JS_NewCFunction(ctx, input_event_shortcut_class_set_shortcut, "set_shortcut", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_input_event_shortcut_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventShortcut::__class_id);
	classes["InputEventShortcut"] = InputEventShortcut::__class_id;
	class_id_list.insert(InputEventShortcut::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventShortcut::__class_id, &input_event_shortcut_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventShortcut::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventShortcut::__class_id, proto);

	define_input_event_shortcut_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_shortcut_class_proto_funcs, _countof(input_event_shortcut_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_shortcut_class_constructor, "InputEventShortcut", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventShortcut", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_shortcut_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_shortcut_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventShortcut");
	return m;
}

JSModuleDef *js_init_input_event_shortcut_module(JSContext *ctx) {
	return _js_init_input_event_shortcut_module(ctx, "godot/classes/input_event_shortcut");
}

void register_input_event_shortcut() {
	InputEventShortcut::__init_js_class_id();
	js_init_input_event_shortcut_module(ctx);
}