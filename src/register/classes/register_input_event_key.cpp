
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_key_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_key_class_def = {
	"InputEventKey",
	.finalizer = input_event_key_class_finalizer
};

static JSValue input_event_key_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventKey::__class_id);
	if (JS_IsException(obj))
		return obj;

	InputEventKey *input_event_key_class;
	if (argc == 1) 
		input_event_key_class = static_cast<InputEventKey *>(Variant(*argv).operator Object *());
	else 
		input_event_key_class = memnew(InputEventKey);
	if (!input_event_key_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_key_class);
	return obj;
}
static JSValue input_event_key_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_physical_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_physical_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_key_label, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_key_label, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_unicode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_unicode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_unicode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_unicode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_location, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_location, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_set_echo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventKey::set_echo, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_keycode_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_keycode_with_modifiers, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_physical_keycode_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_physical_keycode_with_modifiers, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_get_key_label_with_modifiers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::get_key_label_with_modifiers, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_as_text_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::as_text_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_as_text_physical_keycode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::as_text_physical_keycode, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_as_text_key_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::as_text_key_label, ctx, this_val, argc, argv);
};
static JSValue input_event_key_class_as_text_location(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventKey::as_text_location, ctx, this_val, argc, argv);
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

static void define_input_event_key_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pressed"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_key_class_set_pressed, "set_pressed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "keycode"),
        JS_NewCFunction(ctx, input_event_key_class_get_keycode, "get_keycode", 0),
        JS_NewCFunction(ctx, input_event_key_class_set_keycode, "set_keycode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "physical_keycode"),
        JS_NewCFunction(ctx, input_event_key_class_get_physical_keycode, "get_physical_keycode", 0),
        JS_NewCFunction(ctx, input_event_key_class_set_physical_keycode, "set_physical_keycode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "key_label"),
        JS_NewCFunction(ctx, input_event_key_class_get_key_label, "get_key_label", 0),
        JS_NewCFunction(ctx, input_event_key_class_set_key_label, "set_key_label", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "unicode"),
        JS_NewCFunction(ctx, input_event_key_class_get_unicode, "get_unicode", 0),
        JS_NewCFunction(ctx, input_event_key_class_set_unicode, "set_unicode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "location"),
        JS_NewCFunction(ctx, input_event_key_class_get_location, "get_location", 0),
        JS_NewCFunction(ctx, input_event_key_class_set_location, "set_location", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "echo"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_key_class_set_echo, "set_echo", 1),
        JS_PROP_GETSET
    );
	
}

static void define_input_event_key_enum(JSContext *ctx, JSValue proto) {
}

static int js_input_event_key_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["InputEventKey"] = InputEventKey::__class_id;
	class_id_list.insert(InputEventKey::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventKey::__class_id, &input_event_key_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventKey::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEventWithModifiers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventKey::__class_id, proto);

	define_input_event_key_property(ctx, proto);
	define_input_event_key_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_key_class_proto_funcs, _countof(input_event_key_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_key_class_constructor, "InputEventKey", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "InputEventKey", ctor);
	constructors[InputEventKey::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_input_event_key_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/input_event_with_modifiers';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_key_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventKey");
	return m;
}

JSModuleDef *js_init_input_event_key_module(JSContext *ctx) {
	return _js_init_input_event_key_module(ctx, "@godot/classes/input_event_key");
}

void register_input_event_key() {
	InputEventKey::__init_js_class_id();
	js_init_input_event_key_module(ctx);
}