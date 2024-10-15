
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/dictionary.hpp>


using namespace godot;

static void dictionary_class_finalizer(JSRuntime *rt, JSValue val) {
	Dictionary *dictionary = static_cast<Dictionary *>(JS_GetOpaque(val, Dictionary::__class_id));
	if (dictionary)
		memfree(dictionary);
}

static JSClassDef dictionary_class_def = {
	"Dictionary",
	.finalizer = dictionary_class_finalizer
};

static JSValue dictionary_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Dictionary *dictionary_class;
	JSValue obj = JS_NewObjectClass(ctx, Dictionary::__class_id);
	if (JS_IsException(obj))
		return obj;
	dictionary_class = memnew(Dictionary);
	if (!dictionary_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, dictionary_class);
	return obj;
}
static JSValue dictionary_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::size, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::is_empty, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Dictionary::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue dictionary_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Dictionary::merge, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue dictionary_class_merged(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::merged, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::has, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_has_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::has_all, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_find_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::find_key, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_erase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Dictionary::erase, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_hash(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::hash, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_keys(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::keys, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::values, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::duplicate, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_get(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::get, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_get_or_add(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Dictionary::get_or_add, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_make_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Dictionary::make_read_only, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue dictionary_class_is_read_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::is_read_only, ctx, this_val, argc, argv);
};
static JSValue dictionary_class_recursive_equal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Dictionary::recursive_equal, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry dictionary_class_proto_funcs[] = {
	JS_CFUNC_DEF("size", 0, &dictionary_class_size),
	JS_CFUNC_DEF("is_empty", 0, &dictionary_class_is_empty),
	JS_CFUNC_DEF("clear", 0, &dictionary_class_clear),
	JS_CFUNC_DEF("merge", 2, &dictionary_class_merge),
	JS_CFUNC_DEF("merged", 2, &dictionary_class_merged),
	JS_CFUNC_DEF("has", 1, &dictionary_class_has),
	JS_CFUNC_DEF("has_all", 1, &dictionary_class_has_all),
	JS_CFUNC_DEF("find_key", 1, &dictionary_class_find_key),
	JS_CFUNC_DEF("erase", 1, &dictionary_class_erase),
	JS_CFUNC_DEF("hash", 0, &dictionary_class_hash),
	JS_CFUNC_DEF("keys", 0, &dictionary_class_keys),
	JS_CFUNC_DEF("values", 0, &dictionary_class_values),
	JS_CFUNC_DEF("duplicate", 1, &dictionary_class_duplicate),
	JS_CFUNC_DEF("get", 2, &dictionary_class_get),
	JS_CFUNC_DEF("get_or_add", 2, &dictionary_class_get_or_add),
	JS_CFUNC_DEF("make_read_only", 0, &dictionary_class_make_read_only),
	JS_CFUNC_DEF("is_read_only", 0, &dictionary_class_is_read_only),
	JS_CFUNC_DEF("recursive_equal", 2, &dictionary_class_recursive_equal),
};

void define_dictionary_property(JSContext *ctx, JSValue obj) {
}

static int js_dictionary_class_init(JSContext *ctx) {
	JS_NewClassID(&Dictionary::__class_id);
	classes["Dictionary"] = Dictionary::__class_id;
	class_id_list.insert(Dictionary::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Dictionary::__class_id, &dictionary_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Dictionary::__class_id, proto);

	define_dictionary_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, dictionary_class_proto_funcs, _countof(dictionary_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, dictionary_class_constructor, "Dictionary", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Dictionary", ctor);

	return 0;
}

void js_init_dictionary_module(JSContext *ctx) {
	js_dictionary_class_init(ctx);
}

void register_dictionary() {
	Dictionary::__init_js_class_id();
	js_init_dictionary_module(ctx);
}