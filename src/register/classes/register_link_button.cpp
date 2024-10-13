
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/link_button.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void link_button_class_finalizer(JSRuntime *rt, JSValue val) {
	LinkButton *link_button = static_cast<LinkButton *>(JS_GetOpaque(val, LinkButton::__class_id));
	if (link_button)
		LinkButton::free(nullptr, link_button);
}

static JSClassDef link_button_class_def = {
	"LinkButton",
	.finalizer = link_button_class_finalizer
};

static JSValue link_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LinkButton *link_button_class;
	JSValue obj = JS_NewObjectClass(ctx, LinkButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	link_button_class = memnew(LinkButton);
	if (!link_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, link_button_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue link_button_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_text, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_text, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_text_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_language, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_language, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_uri(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_uri, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_uri(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_uri, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_underline_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_underline_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_underline_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_underline_mode, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_structured_text_bidi_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue link_button_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LinkButton::set_structured_text_bidi_override_options, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue link_button_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LinkButton::get_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry link_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_text", 1, &link_button_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &link_button_class_get_text),
	JS_CFUNC_DEF("set_text_direction", 1, &link_button_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &link_button_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &link_button_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &link_button_class_get_language),
	JS_CFUNC_DEF("set_uri", 1, &link_button_class_set_uri),
	JS_CFUNC_DEF("get_uri", 0, &link_button_class_get_uri),
	JS_CFUNC_DEF("set_underline_mode", 1, &link_button_class_set_underline_mode),
	JS_CFUNC_DEF("get_underline_mode", 0, &link_button_class_get_underline_mode),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &link_button_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &link_button_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &link_button_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &link_button_class_get_structured_text_bidi_override_options),
};

void define_link_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, link_button_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, link_button_class_set_text, "set_text", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "underline"),
        JS_NewCFunction(ctx, link_button_class_get_underline_mode, "get_underline_mode", 0),
        JS_NewCFunction(ctx, link_button_class_set_underline_mode, "set_underline_mode", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "uri"),
        JS_NewCFunction(ctx, link_button_class_get_uri, "get_uri", 0),
        JS_NewCFunction(ctx, link_button_class_set_uri, "set_uri", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, link_button_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, link_button_class_set_text_direction, "set_text_direction", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, link_button_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, link_button_class_set_language, "set_language", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "structured_text_bidi_override"),
        JS_NewCFunction(ctx, link_button_class_get_structured_text_bidi_override, "get_structured_text_bidi_override", 0),
        JS_NewCFunction(ctx, link_button_class_set_structured_text_bidi_override, "set_structured_text_bidi_override", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "structured_text_bidi_override_options"),
        JS_NewCFunction(ctx, link_button_class_get_structured_text_bidi_override_options, "get_structured_text_bidi_override_options", 0),
        JS_NewCFunction(ctx, link_button_class_set_structured_text_bidi_override_options, "set_structured_text_bidi_override_options", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_link_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&LinkButton::__class_id);
	classes["LinkButton"] = LinkButton::__class_id;
	class_id_list.insert(LinkButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LinkButton::__class_id, &link_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BaseButton::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LinkButton::__class_id, proto);
	define_link_button_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, link_button_class_proto_funcs, _countof(link_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, link_button_class_constructor, "LinkButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LinkButton", ctor);

	return 0;
}

JSModuleDef *_js_init_link_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/base_button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_link_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LinkButton");
	return m;
}

JSModuleDef *js_init_link_button_module(JSContext *ctx) {
	return _js_init_link_button_module(ctx, "godot/classes/link_button");
}

void register_link_button() {
	LinkButton::__init_js_class_id();
	js_init_link_button_module(ctx);
}