
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_string_array.hpp>

using namespace godot;

static void packed_string_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedStringArray *packed_string_array = static_cast<PackedStringArray *>(JS_GetOpaque(val, PackedStringArray::__class_id));
	if (packed_string_array)
		memfree(packed_string_array);
}

static JSClassDef packed_string_array_class_def = {
	"PackedStringArray",
	.finalizer = packed_string_array_class_finalizer
};

static JSValue packed_string_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedStringArray *packed_string_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedStringArray::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_string_array_class = memnew(PackedStringArray);
	if (!packed_string_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_string_array_class);
	return obj;
}
static JSValue packed_string_array_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::size, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::is_empty, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::set, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_push_back(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::push_back, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_append(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::append, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_append_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::append_array, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_remove_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::remove_at, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_insert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::insert, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::fill, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::resize, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::has, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_reverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::reverse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::slice, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_to_byte_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::to_byte_array, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedStringArray::sort, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_string_array_class_bsearch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::bsearch, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedStringArray::duplicate, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_find(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::find, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_rfind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::rfind, ctx, this_val, argc, argv);
};
static JSValue packed_string_array_class_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedStringArray::count, ctx, this_val, argc, argv);
};


static const JSCFunctionListEntry packed_string_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("size", 0, &packed_string_array_class_size),
	JS_CFUNC_DEF("is_empty", 0, &packed_string_array_class_is_empty),
	JS_CFUNC_DEF("set", 2, &packed_string_array_class_set),
	JS_CFUNC_DEF("push_back", 1, &packed_string_array_class_push_back),
	JS_CFUNC_DEF("append", 1, &packed_string_array_class_append),
	JS_CFUNC_DEF("append_array", 1, &packed_string_array_class_append_array),
	JS_CFUNC_DEF("remove_at", 1, &packed_string_array_class_remove_at),
	JS_CFUNC_DEF("insert", 2, &packed_string_array_class_insert),
	JS_CFUNC_DEF("fill", 1, &packed_string_array_class_fill),
	JS_CFUNC_DEF("resize", 1, &packed_string_array_class_resize),
	JS_CFUNC_DEF("clear", 0, &packed_string_array_class_clear),
	JS_CFUNC_DEF("has", 1, &packed_string_array_class_has),
	JS_CFUNC_DEF("reverse", 0, &packed_string_array_class_reverse),
	JS_CFUNC_DEF("slice", 2, &packed_string_array_class_slice),
	JS_CFUNC_DEF("to_byte_array", 0, &packed_string_array_class_to_byte_array),
	JS_CFUNC_DEF("sort", 0, &packed_string_array_class_sort),
	JS_CFUNC_DEF("bsearch", 2, &packed_string_array_class_bsearch),
	JS_CFUNC_DEF("duplicate", 0, &packed_string_array_class_duplicate),
	JS_CFUNC_DEF("find", 2, &packed_string_array_class_find),
	JS_CFUNC_DEF("rfind", 2, &packed_string_array_class_rfind),
	JS_CFUNC_DEF("count", 1, &packed_string_array_class_count),
};



static int js_packed_string_array_class_init(JSContext *ctx) {
	
	JS_NewClassID(&PackedStringArray::__class_id);
	classes["PackedStringArray"] = PackedStringArray::__class_id;
	class_id_list.insert(PackedStringArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedStringArray::__class_id, &packed_string_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedStringArray::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_string_array_class_proto_funcs, _countof(packed_string_array_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packed_string_array_class_constructor, "PackedStringArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "PackedStringArray", ctor);

	return 0;
}

void js_init_packed_string_array_module(JSContext *ctx) {
	js_packed_string_array_class_init(ctx);
}

void register_packed_string_array() {
	PackedStringArray::__init_js_class_id();
	js_init_packed_string_array_module(ctx);
}