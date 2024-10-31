
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/classes/translation_server.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue translation_server_instance;

static void js_translation_server_singleton();

static void translation_server_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef translation_server_class_def = {
	"TranslationServer",
	.finalizer = translation_server_class_finalizer
};

static JSValue translation_server_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TranslationServer *translation_server_class;
	JSValue obj = JS_NewObjectClass(ctx, TranslationServer::__class_id);
	if (JS_IsException(obj))
		return obj;
	translation_server_class = TranslationServer::get_singleton();
	if (!translation_server_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, translation_server_class);
	return obj;
}
static JSValue translation_server_class_set_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::set_locale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_get_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_locale, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_tool_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_method_ret(&TranslationServer::get_tool_locale, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_compare_locales(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::compare_locales, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_standardize_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::standardize_locale, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_all_languages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_all_languages, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_language_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_language_name, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_all_scripts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_all_scripts, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_script_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_script_name, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_all_countries(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_all_countries, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_country_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_country_name, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_get_locale_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_locale_name, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_translate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::translate, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_translate_plural(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::translate_plural, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_add_translation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::add_translation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_remove_translation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::remove_translation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_get_translation_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_method_ret(&TranslationServer::get_translation_object, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_get_loaded_locales(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::get_loaded_locales, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_is_pseudolocalization_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::is_pseudolocalization_enabled, ctx, this_val, argc, argv);
};
static JSValue translation_server_class_set_pseudolocalization_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::set_pseudolocalization_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_reload_pseudolocalization(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
    call_builtin_method_no_ret(&TranslationServer::reload_pseudolocalization, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue translation_server_class_pseudolocalize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_translation_server_singleton();
	return call_builtin_const_method_ret(&TranslationServer::pseudolocalize, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry translation_server_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_locale", 1, &translation_server_class_set_locale),
	JS_CFUNC_DEF("get_locale", 0, &translation_server_class_get_locale),
	JS_CFUNC_DEF("get_tool_locale", 0, &translation_server_class_get_tool_locale),
	JS_CFUNC_DEF("compare_locales", 2, &translation_server_class_compare_locales),
	JS_CFUNC_DEF("standardize_locale", 1, &translation_server_class_standardize_locale),
	JS_CFUNC_DEF("get_all_languages", 0, &translation_server_class_get_all_languages),
	JS_CFUNC_DEF("get_language_name", 1, &translation_server_class_get_language_name),
	JS_CFUNC_DEF("get_all_scripts", 0, &translation_server_class_get_all_scripts),
	JS_CFUNC_DEF("get_script_name", 1, &translation_server_class_get_script_name),
	JS_CFUNC_DEF("get_all_countries", 0, &translation_server_class_get_all_countries),
	JS_CFUNC_DEF("get_country_name", 1, &translation_server_class_get_country_name),
	JS_CFUNC_DEF("get_locale_name", 1, &translation_server_class_get_locale_name),
	JS_CFUNC_DEF("translate", 2, &translation_server_class_translate),
	JS_CFUNC_DEF("translate_plural", 4, &translation_server_class_translate_plural),
	JS_CFUNC_DEF("add_translation", 1, &translation_server_class_add_translation),
	JS_CFUNC_DEF("remove_translation", 1, &translation_server_class_remove_translation),
	JS_CFUNC_DEF("get_translation_object", 1, &translation_server_class_get_translation_object),
	JS_CFUNC_DEF("clear", 0, &translation_server_class_clear),
	JS_CFUNC_DEF("get_loaded_locales", 0, &translation_server_class_get_loaded_locales),
	JS_CFUNC_DEF("is_pseudolocalization_enabled", 0, &translation_server_class_is_pseudolocalization_enabled),
	JS_CFUNC_DEF("set_pseudolocalization_enabled", 1, &translation_server_class_set_pseudolocalization_enabled),
	JS_CFUNC_DEF("reload_pseudolocalization", 0, &translation_server_class_reload_pseudolocalization),
	JS_CFUNC_DEF("pseudolocalize", 1, &translation_server_class_pseudolocalize),
};

static int js_translation_server_class_init(JSContext *ctx) {
	JS_NewClassID(&TranslationServer::__class_id);
	classes["TranslationServer"] = TranslationServer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TranslationServer::__class_id, &translation_server_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TranslationServer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, translation_server_class_proto_funcs, _countof(translation_server_class_proto_funcs));
	return 0;
}

static void js_translation_server_singleton() {
	if (JS_IsUninitialized(translation_server_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		translation_server_instance = translation_server_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "TranslationServer", translation_server_instance);
	}
}


void register_translation_server() {
	js_translation_server_class_init(ctx);
}