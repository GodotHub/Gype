
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef button_class_def = {
	"Button",
	.finalizer = button_class_finalizer
};

static JSValue button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Button::__class_id);
	if (JS_IsException(obj))
		return obj;
	Button *button_class = memnew(Button);
	if (!button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, button_class);	
	return obj;
}
static JSValue button_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_text, ctx, this_val, argc, argv);
};
static JSValue button_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_text_overrun_behavior, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_text_overrun_behavior, ctx, this_val, argc, argv);
};
static JSValue button_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_autowrap_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue button_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_text_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue button_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_language, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_language, ctx, this_val, argc, argv);
};
static JSValue button_class_set_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_button_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_button_icon, ctx, this_val, argc, argv);
};
static JSValue button_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_flat, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::is_flat, ctx, this_val, argc, argv);
};
static JSValue button_class_set_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_clip_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_clip_text, ctx, this_val, argc, argv);
};
static JSValue button_class_set_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_text_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_text_alignment, ctx, this_val, argc, argv);
};
static JSValue button_class_set_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_icon_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_icon_alignment, ctx, this_val, argc, argv);
};
static JSValue button_class_set_vertical_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_vertical_icon_alignment, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_vertical_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::get_vertical_icon_alignment, ctx, this_val, argc, argv);
};
static JSValue button_class_set_expand_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Button::set_expand_icon, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_is_expand_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Button::is_expand_icon, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_text", 1, &button_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &button_class_get_text),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &button_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &button_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &button_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &button_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_text_direction", 1, &button_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &button_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &button_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &button_class_get_language),
	JS_CFUNC_DEF("set_button_icon", 1, &button_class_set_button_icon),
	JS_CFUNC_DEF("get_button_icon", 0, &button_class_get_button_icon),
	JS_CFUNC_DEF("set_flat", 1, &button_class_set_flat),
	JS_CFUNC_DEF("is_flat", 0, &button_class_is_flat),
	JS_CFUNC_DEF("set_clip_text", 1, &button_class_set_clip_text),
	JS_CFUNC_DEF("get_clip_text", 0, &button_class_get_clip_text),
	JS_CFUNC_DEF("set_text_alignment", 1, &button_class_set_text_alignment),
	JS_CFUNC_DEF("get_text_alignment", 0, &button_class_get_text_alignment),
	JS_CFUNC_DEF("set_icon_alignment", 1, &button_class_set_icon_alignment),
	JS_CFUNC_DEF("get_icon_alignment", 0, &button_class_get_icon_alignment),
	JS_CFUNC_DEF("set_vertical_icon_alignment", 1, &button_class_set_vertical_icon_alignment),
	JS_CFUNC_DEF("get_vertical_icon_alignment", 0, &button_class_get_vertical_icon_alignment),
	JS_CFUNC_DEF("set_expand_icon", 1, &button_class_set_expand_icon),
	JS_CFUNC_DEF("is_expand_icon", 0, &button_class_is_expand_icon),
};

void define_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, button_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, button_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "icon"),
        JS_NewCFunction(ctx, button_class_get_button_icon, "get_button_icon", 0),
        JS_NewCFunction(ctx, button_class_set_button_icon, "set_button_icon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flat"),
        JS_NewCFunction(ctx, button_class_is_flat, "is_flat", 0),
        JS_NewCFunction(ctx, button_class_set_flat, "set_flat", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alignment"),
        JS_NewCFunction(ctx, button_class_get_text_alignment, "get_text_alignment", 0),
        JS_NewCFunction(ctx, button_class_set_text_alignment, "set_text_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text_overrun_behavior"),
        JS_NewCFunction(ctx, button_class_get_text_overrun_behavior, "get_text_overrun_behavior", 0),
        JS_NewCFunction(ctx, button_class_set_text_overrun_behavior, "set_text_overrun_behavior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "autowrap_mode"),
        JS_NewCFunction(ctx, button_class_get_autowrap_mode, "get_autowrap_mode", 0),
        JS_NewCFunction(ctx, button_class_set_autowrap_mode, "set_autowrap_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "clip_text"),
        JS_NewCFunction(ctx, button_class_get_clip_text, "get_clip_text", 0),
        JS_NewCFunction(ctx, button_class_set_clip_text, "set_clip_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "icon_alignment"),
        JS_NewCFunction(ctx, button_class_get_icon_alignment, "get_icon_alignment", 0),
        JS_NewCFunction(ctx, button_class_set_icon_alignment, "set_icon_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "vertical_icon_alignment"),
        JS_NewCFunction(ctx, button_class_get_vertical_icon_alignment, "get_vertical_icon_alignment", 0),
        JS_NewCFunction(ctx, button_class_set_vertical_icon_alignment, "set_vertical_icon_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_icon"),
        JS_NewCFunction(ctx, button_class_is_expand_icon, "is_expand_icon", 0),
        JS_NewCFunction(ctx, button_class_set_expand_icon, "set_expand_icon", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, button_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, button_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, button_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, button_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Button::__class_id);
	classes["Button"] = Button::__class_id;
	class_id_list.insert(Button::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Button::__class_id, &button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Button::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, BaseButton::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Button::__class_id, proto);

	define_button_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, button_class_proto_funcs, _countof(button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, button_class_constructor, "Button", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Button", ctor);

	return 0;
}

JSModuleDef *_js_init_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/base_button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Button");
	return m;
}

JSModuleDef *js_init_button_module(JSContext *ctx) {
	return _js_init_button_module(ctx, "godot/classes/button");
}

void register_button() {
	Button::__init_js_class_id();
	js_init_button_module(ctx);
}