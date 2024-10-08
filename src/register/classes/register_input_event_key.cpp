
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_key_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventKey *input_event_key = static_cast<InputEventKey *>(JS_GetOpaque(val, InputEventKey::__class_id));
	if (input_event_key)
		InputEventKey::free(nullptr, input_event_key);
}

static JSClassDef input_event_key_class_def = {
	"InputEventKey",
	.finalizer = input_event_key_class_finalizer
};

static JSValue input_event_key_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventKey *input_event_key_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventKey::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_key_class = memnew(InputEventKey);
	if (!input_event_key_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_key_class);
	return obj;
}
static JSValue input_event_key_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_pressed, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_set_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_keycode, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_keycode, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_set_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_physical_keycode, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_physical_keycode, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_set_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_key_label, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_key_label, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_set_unicode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_unicode, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_unicode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_unicode, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_set_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_location, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_location, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_set_echo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventKey::set_echo, InputEventKey::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_key_class_get_keycode_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_keycode_with_modifiers, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_get_physical_keycode_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_physical_keycode_with_modifiers, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_get_key_label_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::get_key_label_with_modifiers, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_as_text_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::as_text_keycode, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_as_text_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::as_text_physical_keycode, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_as_text_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::as_text_key_label, InputEventKey::__class_id, ctx, this_val, argv);
};
static JSValue input_event_key_class_as_text_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventKey::as_text_location, InputEventKey::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_key_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pressed", 1, &input_event_key_class_set_pressed),
	JS_CFUNC_DEF("set_keycode", 1, &input_event_key_class_set_keycode),
	JS_CFUNC_DEF("get_keycode", 0, &input_event_key_class_get_keycode),
	JS_CFUNC_DEF("set_physical_keycode", 1, &input_event_key_class_set_physical_keycode),
	JS_CFUNC_DEF("get_physical_keycode", 0, &input_event_key_class_get_physical_keycode),
	JS_CFUNC_DEF("set_key_label", 1, &input_event_key_class_set_key_label),
	JS_CFUNC_DEF("get_key_label", 0, &input_event_key_class_get_key_label),
	JS_CFUNC_DEF("set_unicode", 1, &input_event_key_class_set_unicode),
	JS_CFUNC_DEF("get_unicode", 0, &input_event_key_class_get_unicode),
	JS_CFUNC_DEF("set_location", 1, &input_event_key_class_set_location),
	JS_CFUNC_DEF("get_location", 0, &input_event_key_class_get_location),
	JS_CFUNC_DEF("set_echo", 1, &input_event_key_class_set_echo),
	JS_CFUNC_DEF("get_keycode_with_modifiers", 0, &input_event_key_class_get_keycode_with_modifiers),
	JS_CFUNC_DEF("get_physical_keycode_with_modifiers", 0, &input_event_key_class_get_physical_keycode_with_modifiers),
	JS_CFUNC_DEF("get_key_label_with_modifiers", 0, &input_event_key_class_get_key_label_with_modifiers),
	JS_CFUNC_DEF("as_text_keycode", 0, &input_event_key_class_as_text_keycode),
	JS_CFUNC_DEF("as_text_physical_keycode", 0, &input_event_key_class_as_text_physical_keycode),
	JS_CFUNC_DEF("as_text_key_label", 0, &input_event_key_class_as_text_key_label),
	JS_CFUNC_DEF("as_text_location", 0, &input_event_key_class_as_text_location),
};

static int js_input_event_key_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventKey::__class_id);
	classes["InputEventKey"] = InputEventKey::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventKey::__class_id, &input_event_key_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventWithModifiers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventKey::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_key_class_proto_funcs, _countof(input_event_key_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_key_class_constructor, "InputEventKey", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventKey", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_key_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_key_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventKey");
	return m;
}

JSModuleDef *js_init_input_event_key_module(JSContext *ctx) {
	return _js_init_input_event_key_module(ctx, "godot/classes/input_event_key");
}

void register_input_event_key() {
	js_init_input_event_key_module(ctx);
}