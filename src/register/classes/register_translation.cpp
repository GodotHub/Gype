
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void translation_class_finalizer(JSRuntime *rt, JSValue val) {
	Translation *translation = static_cast<Translation *>(JS_GetOpaque(val, Translation::__class_id));
	if (translation)
		Translation::free(nullptr, translation);
}

static JSClassDef translation_class_def = {
	"Translation",
	.finalizer = translation_class_finalizer
};

static JSValue translation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Translation *translation_class;
	JSValue obj = JS_NewObjectClass(ctx, Translation::__class_id);
	if (JS_IsException(obj))
		return obj;
	translation_class = memnew(Translation);
	if (!translation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, translation_class);
	return obj;
}
static JSValue translation_class_set_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Translation::set_locale, Translation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue translation_class_get_locale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_locale, Translation::__class_id, ctx, this_val, argv);
};
static JSValue translation_class_add_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Translation::add_message, Translation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue translation_class_add_plural_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Translation::add_plural_message, Translation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue translation_class_get_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_message, Translation::__class_id, ctx, this_val, argv);
};
static JSValue translation_class_get_plural_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_plural_message, Translation::__class_id, ctx, this_val, argv);
};
static JSValue translation_class_erase_message(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Translation::erase_message, Translation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue translation_class_get_message_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_message_list, Translation::__class_id, ctx, this_val, argv);
};
static JSValue translation_class_get_translated_message_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_translated_message_list, Translation::__class_id, ctx, this_val, argv);
};
static JSValue translation_class_get_message_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Translation::get_message_count, Translation::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry translation_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_locale", 1, &translation_class_set_locale),
	JS_CFUNC_DEF("get_locale", 0, &translation_class_get_locale),
	JS_CFUNC_DEF("add_message", 3, &translation_class_add_message),
	JS_CFUNC_DEF("add_plural_message", 3, &translation_class_add_plural_message),
	JS_CFUNC_DEF("get_message", 2, &translation_class_get_message),
	JS_CFUNC_DEF("get_plural_message", 4, &translation_class_get_plural_message),
	JS_CFUNC_DEF("erase_message", 2, &translation_class_erase_message),
	JS_CFUNC_DEF("get_message_list", 0, &translation_class_get_message_list),
	JS_CFUNC_DEF("get_translated_message_list", 0, &translation_class_get_translated_message_list),
	JS_CFUNC_DEF("get_message_count", 0, &translation_class_get_message_count),
};

static int js_translation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Translation::__class_id);
	classes["Translation"] = Translation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Translation::__class_id, &translation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Translation::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, translation_class_proto_funcs, _countof(translation_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, translation_class_constructor, "Translation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Translation", ctor);

	return 0;
}

JSModuleDef *_js_init_translation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_translation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Translation");
	return m;
}

JSModuleDef *js_init_translation_module(JSContext *ctx) {
	return _js_init_translation_module(ctx, "godot/classes/translation");
}

void register_translation() {
	js_init_translation_module(ctx);
}