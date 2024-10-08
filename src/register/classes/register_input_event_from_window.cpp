
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_from_window_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventFromWindow *input_event_from_window = static_cast<InputEventFromWindow *>(JS_GetOpaque(val, InputEventFromWindow::__class_id));
	if (input_event_from_window)
		InputEventFromWindow::free(nullptr, input_event_from_window);
}

static JSClassDef input_event_from_window_class_def = {
	"InputEventFromWindow",
	.finalizer = input_event_from_window_class_finalizer
};

static JSValue input_event_from_window_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventFromWindow *input_event_from_window_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventFromWindow::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_from_window_class = memnew(InputEventFromWindow);
	if (!input_event_from_window_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_from_window_class);
	return obj;
}
static JSValue input_event_from_window_class_set_window_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventFromWindow::set_window_id, InputEventFromWindow::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_from_window_class_get_window_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventFromWindow::get_window_id, InputEventFromWindow::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_from_window_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_window_id", 1, &input_event_from_window_class_set_window_id),
	JS_CFUNC_DEF("get_window_id", 0, &input_event_from_window_class_get_window_id),
};

static int js_input_event_from_window_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventFromWindow::__class_id);
	classes["InputEventFromWindow"] = InputEventFromWindow::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventFromWindow::__class_id, &input_event_from_window_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventFromWindow::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_from_window_class_proto_funcs, _countof(input_event_from_window_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_from_window_class_constructor, "InputEventFromWindow", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventFromWindow", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_from_window_module(JSContext *ctx, const char *module_name) {
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
	js_init_input_event_from_window_module(ctx);
}