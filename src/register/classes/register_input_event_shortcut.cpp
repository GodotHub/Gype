
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_shortcut.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_shortcut_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventShortcut *input_event_shortcut = static_cast<InputEventShortcut *>(JS_GetOpaque(val, InputEventShortcut::__class_id));
	if (input_event_shortcut)
		InputEventShortcut::free(nullptr, input_event_shortcut);
}

static JSClassDef input_event_shortcut_class_def = {
	"InputEventShortcut",
	.finalizer = input_event_shortcut_class_finalizer
};

static JSValue input_event_shortcut_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventShortcut *input_event_shortcut_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventShortcut::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_shortcut_class = memnew(InputEventShortcut);
	if (!input_event_shortcut_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_shortcut_class);
	return obj;
}
static JSValue input_event_shortcut_class_set_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventShortcut::set_shortcut, InputEventShortcut::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_shortcut_class_get_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputEventShortcut::get_shortcut, InputEventShortcut::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_shortcut_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shortcut", 1, &input_event_shortcut_class_set_shortcut),
	JS_CFUNC_DEF("get_shortcut", 0, &input_event_shortcut_class_get_shortcut),
};

static int js_input_event_shortcut_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventShortcut::__class_id);
	classes["InputEventShortcut"] = InputEventShortcut::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventShortcut::__class_id, &input_event_shortcut_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventShortcut::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_shortcut_class_proto_funcs, _countof(input_event_shortcut_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_shortcut_class_constructor, "InputEventShortcut", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventShortcut", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_shortcut_module(JSContext *ctx, const char *module_name) {
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
	js_init_input_event_shortcut_module(ctx);
}