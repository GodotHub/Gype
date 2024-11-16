
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "utils/quickjs_helper.hpp"
#include <godot_cpp/variant/packed_byte_array.hpp>

using namespace godot;

static void packed_byte_array_class_finalizer(JSRuntime *rt, JSValue val) {
	PackedByteArray *packed_byte_array = static_cast<PackedByteArray *>(JS_GetOpaque(val, PackedByteArray::__class_id));
	if (packed_byte_array)
		memfree(packed_byte_array);
}

static JSClassDef packed_byte_array_class_def = {
	"PackedByteArray",
	.finalizer = packed_byte_array_class_finalizer
};

static JSValue packed_byte_array_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, PackedByteArray::__class_id);
	if (JS_IsException(obj))
		return obj;

	PackedByteArray *packed_byte_array_class = nullptr;
	
	if (argc == 0 ) {
		packed_byte_array_class = memnew(PackedByteArray());
	}
	
	if (argc == 1 &&Variant(argv[0]).get_type() == Variant::Type::PACKED_BYTE_ARRAY) {
		PackedByteArray v0 = Variant(argv[0]);
		packed_byte_array_class = memnew(PackedByteArray(v0));
	}
	
	if (argc == 1 &&Variant(argv[0]).get_type() == Variant::Type::ARRAY) {
		Array v0 = Variant(argv[0]);
		packed_byte_array_class = memnew(PackedByteArray(v0));
	}
	

	if (!packed_byte_array_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packed_byte_array_class);
	return obj;
}
static JSValue packed_byte_array_class_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::size, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_is_empty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::is_empty, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::set, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_push_back(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::push_back, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_append(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::append, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_append_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::append_array, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_remove_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::remove_at, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_insert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::insert, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::fill, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::resize, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_has(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::has, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_reverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::reverse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::slice, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_sort(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::sort, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_bsearch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::bsearch, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::duplicate, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_find(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::find, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_rfind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::rfind, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::count, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_get_string_from_ascii(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::get_string_from_ascii, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_get_string_from_utf8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::get_string_from_utf8, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_get_string_from_utf16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::get_string_from_utf16, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_get_string_from_utf32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::get_string_from_utf32, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_get_string_from_wchar(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::get_string_from_wchar, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_hex_encode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::hex_encode, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_compress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::compress, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decompress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decompress, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decompress_dynamic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decompress_dynamic, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_u8, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_s8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_s8, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_u16, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_s16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_s16, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_u32, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_s32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_s32, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_u64, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_s64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_s64, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_half(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_half, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_float, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_double, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_has_encoded_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::has_encoded_var, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_var, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_decode_var_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::decode_var_size, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_to_int32_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::to_int32_array, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_to_int64_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::to_int64_array, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_to_float32_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::to_float32_array, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_to_float64_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PackedByteArray::to_float64_array, ctx, this_val, argc, argv);
};
static JSValue packed_byte_array_class_encode_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_u8, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_s8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_s8, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_u16, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_s16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_s16, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_u32, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_s32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_s32, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_u64, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_s64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_s64, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_half(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_half, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_float, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PackedByteArray::encode_double, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packed_byte_array_class_encode_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PackedByteArray::encode_var, ctx, this_val, argc, argv);
};


static const JSCFunctionListEntry packed_byte_array_class_proto_funcs[] = {
	JS_CFUNC_DEF("size", 0, &packed_byte_array_class_size),
	JS_CFUNC_DEF("is_empty", 0, &packed_byte_array_class_is_empty),
	JS_CFUNC_DEF("set", 2, &packed_byte_array_class_set),
	JS_CFUNC_DEF("push_back", 1, &packed_byte_array_class_push_back),
	JS_CFUNC_DEF("append", 1, &packed_byte_array_class_append),
	JS_CFUNC_DEF("append_array", 1, &packed_byte_array_class_append_array),
	JS_CFUNC_DEF("remove_at", 1, &packed_byte_array_class_remove_at),
	JS_CFUNC_DEF("insert", 2, &packed_byte_array_class_insert),
	JS_CFUNC_DEF("fill", 1, &packed_byte_array_class_fill),
	JS_CFUNC_DEF("resize", 1, &packed_byte_array_class_resize),
	JS_CFUNC_DEF("clear", 0, &packed_byte_array_class_clear),
	JS_CFUNC_DEF("has", 1, &packed_byte_array_class_has),
	JS_CFUNC_DEF("reverse", 0, &packed_byte_array_class_reverse),
	JS_CFUNC_DEF("slice", 2, &packed_byte_array_class_slice),
	JS_CFUNC_DEF("sort", 0, &packed_byte_array_class_sort),
	JS_CFUNC_DEF("bsearch", 2, &packed_byte_array_class_bsearch),
	JS_CFUNC_DEF("duplicate", 0, &packed_byte_array_class_duplicate),
	JS_CFUNC_DEF("find", 2, &packed_byte_array_class_find),
	JS_CFUNC_DEF("rfind", 2, &packed_byte_array_class_rfind),
	JS_CFUNC_DEF("count", 1, &packed_byte_array_class_count),
	JS_CFUNC_DEF("get_string_from_ascii", 0, &packed_byte_array_class_get_string_from_ascii),
	JS_CFUNC_DEF("get_string_from_utf8", 0, &packed_byte_array_class_get_string_from_utf8),
	JS_CFUNC_DEF("get_string_from_utf16", 0, &packed_byte_array_class_get_string_from_utf16),
	JS_CFUNC_DEF("get_string_from_utf32", 0, &packed_byte_array_class_get_string_from_utf32),
	JS_CFUNC_DEF("get_string_from_wchar", 0, &packed_byte_array_class_get_string_from_wchar),
	JS_CFUNC_DEF("hex_encode", 0, &packed_byte_array_class_hex_encode),
	JS_CFUNC_DEF("compress", 1, &packed_byte_array_class_compress),
	JS_CFUNC_DEF("decompress", 2, &packed_byte_array_class_decompress),
	JS_CFUNC_DEF("decompress_dynamic", 2, &packed_byte_array_class_decompress_dynamic),
	JS_CFUNC_DEF("decode_u8", 1, &packed_byte_array_class_decode_u8),
	JS_CFUNC_DEF("decode_s8", 1, &packed_byte_array_class_decode_s8),
	JS_CFUNC_DEF("decode_u16", 1, &packed_byte_array_class_decode_u16),
	JS_CFUNC_DEF("decode_s16", 1, &packed_byte_array_class_decode_s16),
	JS_CFUNC_DEF("decode_u32", 1, &packed_byte_array_class_decode_u32),
	JS_CFUNC_DEF("decode_s32", 1, &packed_byte_array_class_decode_s32),
	JS_CFUNC_DEF("decode_u64", 1, &packed_byte_array_class_decode_u64),
	JS_CFUNC_DEF("decode_s64", 1, &packed_byte_array_class_decode_s64),
	JS_CFUNC_DEF("decode_half", 1, &packed_byte_array_class_decode_half),
	JS_CFUNC_DEF("decode_float", 1, &packed_byte_array_class_decode_float),
	JS_CFUNC_DEF("decode_double", 1, &packed_byte_array_class_decode_double),
	JS_CFUNC_DEF("has_encoded_var", 2, &packed_byte_array_class_has_encoded_var),
	JS_CFUNC_DEF("decode_var", 2, &packed_byte_array_class_decode_var),
	JS_CFUNC_DEF("decode_var_size", 2, &packed_byte_array_class_decode_var_size),
	JS_CFUNC_DEF("to_int32_array", 0, &packed_byte_array_class_to_int32_array),
	JS_CFUNC_DEF("to_int64_array", 0, &packed_byte_array_class_to_int64_array),
	JS_CFUNC_DEF("to_float32_array", 0, &packed_byte_array_class_to_float32_array),
	JS_CFUNC_DEF("to_float64_array", 0, &packed_byte_array_class_to_float64_array),
	JS_CFUNC_DEF("encode_u8", 2, &packed_byte_array_class_encode_u8),
	JS_CFUNC_DEF("encode_s8", 2, &packed_byte_array_class_encode_s8),
	JS_CFUNC_DEF("encode_u16", 2, &packed_byte_array_class_encode_u16),
	JS_CFUNC_DEF("encode_s16", 2, &packed_byte_array_class_encode_s16),
	JS_CFUNC_DEF("encode_u32", 2, &packed_byte_array_class_encode_u32),
	JS_CFUNC_DEF("encode_s32", 2, &packed_byte_array_class_encode_s32),
	JS_CFUNC_DEF("encode_u64", 2, &packed_byte_array_class_encode_u64),
	JS_CFUNC_DEF("encode_s64", 2, &packed_byte_array_class_encode_s64),
	JS_CFUNC_DEF("encode_half", 2, &packed_byte_array_class_encode_half),
	JS_CFUNC_DEF("encode_float", 2, &packed_byte_array_class_encode_float),
	JS_CFUNC_DEF("encode_double", 2, &packed_byte_array_class_encode_double),
	JS_CFUNC_DEF("encode_var", 3, &packed_byte_array_class_encode_var),
};



static int js_packed_byte_array_class_init(JSContext *ctx) {
	
	JS_NewClassID(&PackedByteArray::__class_id);
	classes["PackedByteArray"] = PackedByteArray::__class_id;
	class_id_list.insert(PackedByteArray::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PackedByteArray::__class_id, &packed_byte_array_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, PackedByteArray::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packed_byte_array_class_proto_funcs, _countof(packed_byte_array_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packed_byte_array_class_constructor, "PackedByteArray", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "PackedByteArray", ctor);

	return 0;
}

void js_init_packed_byte_array_module(JSContext *ctx) {
	js_packed_byte_array_class_init(ctx);
}

void register_packed_byte_array() {
	PackedByteArray::__init_js_class_id();
	js_init_packed_byte_array_module(ctx);
}