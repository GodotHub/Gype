
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/packed_int32_array.hpp>

using namespace godot;

static void packed_int32_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedInt32Array *packed_int32_array = static_cast<PackedInt32Array *>(JS_GetOpaque(val, PackedInt32Array::__class_id));
	if (packed_int32_array)
		memfree(packed_int32_array);
}

static JSClassDef packed_int32_array_class_def = {
	"PackedInt32Array",
	.finalizer = packed_int32_array_class_finalizer
};

static JSValue packed_int32_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PackedInt32Array *packed_int32_array_class;
	JSValue obj = JS_NewObjectClass(ctx, PackedInt32Array::__class_id);
	if (JS_IsException(obj))
		return obj;
	packed_int32_array_class = memnew(PackedInt32Array);
	if (!packed_int32_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_int32_array_class);
	return obj;
}
static JSValue packed_int32_array_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::size, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::is_empty, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::set, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_push_back(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::push_back, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_append(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::append, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_append_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::append_array, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_remove_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::remove_at, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_insert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::insert, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::fill, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::resize, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::has, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_reverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::reverse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::slice, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_to_byte_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::to_byte_array, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedInt32Array::sort, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_int32_array_class_bsearch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::bsearch, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedInt32Array::duplicate, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_find(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::find, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_rfind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::rfind, ctx, this_val, argc, argv);
};
static JSValue packed_int32_array_class_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedInt32Array::count, ctx, this_val, argc, argv);
};


static const JSCFunctionListEntry packed_int32_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("size", 0, &packed_int32_array_class_size),
	JS_CFUNC_DEF("is_empty", 0, &packed_int32_array_class_is_empty),
	JS_CFUNC_DEF("set", 2, &packed_int32_array_class_set),
	JS_CFUNC_DEF("push_back", 1, &packed_int32_array_class_push_back),
	JS_CFUNC_DEF("append", 1, &packed_int32_array_class_append),
	JS_CFUNC_DEF("append_array", 1, &packed_int32_array_class_append_array),
	JS_CFUNC_DEF("remove_at", 1, &packed_int32_array_class_remove_at),
	JS_CFUNC_DEF("insert", 2, &packed_int32_array_class_insert),
	JS_CFUNC_DEF("fill", 1, &packed_int32_array_class_fill),
	JS_CFUNC_DEF("resize", 1, &packed_int32_array_class_resize),
	JS_CFUNC_DEF("clear", 0, &packed_int32_array_class_clear),
	JS_CFUNC_DEF("has", 1, &packed_int32_array_class_has),
	JS_CFUNC_DEF("reverse", 0, &packed_int32_array_class_reverse),
	JS_CFUNC_DEF("slice", 2, &packed_int32_array_class_slice),
	JS_CFUNC_DEF("to_byte_array", 0, &packed_int32_array_class_to_byte_array),
	JS_CFUNC_DEF("sort", 0, &packed_int32_array_class_sort),
	JS_CFUNC_DEF("bsearch", 2, &packed_int32_array_class_bsearch),
	JS_CFUNC_DEF("duplicate", 0, &packed_int32_array_class_duplicate),
	JS_CFUNC_DEF("find", 2, &packed_int32_array_class_find),
	JS_CFUNC_DEF("rfind", 2, &packed_int32_array_class_rfind),
	JS_CFUNC_DEF("count", 1, &packed_int32_array_class_count),
};



static int js_packed_int32_array_class_init(JSContext *ctx) {
	
	JS_NewClassID(&PackedInt32Array::__class_id);
	classes["PackedInt32Array"] = PackedInt32Array::__class_id;
	class_id_list.insert(PackedInt32Array::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedInt32Array::__class_id, &packed_int32_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedInt32Array::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_int32_array_class_proto_funcs, _countof(packed_int32_array_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packed_int32_array_class_constructor, "PackedInt32Array", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "PackedInt32Array", ctor);

	return 0;
}

void js_init_packed_int32_array_module(JSContext *ctx) {
	js_packed_int32_array_class_init(ctx);
}

void register_packed_int32_array() {
	PackedInt32Array::__init_js_class_id();
	js_init_packed_int32_array_module(ctx);
}