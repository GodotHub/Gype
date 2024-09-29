#include "wrapper/array_wrapper.h"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "utils/quickjs_helper.h"
#include "wrapper/js_object.h"
#include "wrapper/object_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include "wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

enum {
	/* classid tag        */ /* union usage   | properties */
	JS_CLASS_OBJECT = 1, /* must be first */
	JS_CLASS_ARRAY, /* u.array       | length */
	JS_CLASS_ERROR,
	JS_CLASS_NUMBER, /* u.object_data */
	JS_CLASS_STRING, /* u.object_data */
	JS_CLASS_BOOLEAN, /* u.object_data */
	JS_CLASS_SYMBOL, /* u.object_data */
	JS_CLASS_ARGUMENTS, /* u.array       | length */
	JS_CLASS_MAPPED_ARGUMENTS, /*               | length */
	JS_CLASS_DATE, /* u.object_data */
	JS_CLASS_MODULE_NS,
	JS_CLASS_C_FUNCTION, /* u.cfunc */
	JS_CLASS_BYTECODE_FUNCTION, /* u.func */
	JS_CLASS_BOUND_FUNCTION, /* u.bound_function */
	JS_CLASS_C_FUNCTION_DATA, /* u.c_function_data_record */
	JS_CLASS_GENERATOR_FUNCTION, /* u.func */
	JS_CLASS_FOR_IN_ITERATOR, /* u.for_in_iterator */
	JS_CLASS_REGEXP, /* u.regexp */
	JS_CLASS_ARRAY_BUFFER, /* u.array_buffer */
	JS_CLASS_SHARED_ARRAY_BUFFER, /* u.array_buffer */
	JS_CLASS_UINT8C_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT8_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT8_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT16_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT16_ARRAY, /* u.array (typed_array) */
	JS_CLASS_INT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_UINT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_BIG_INT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_BIG_UINT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_FLOAT32_ARRAY, /* u.array (typed_array) */
	JS_CLASS_FLOAT64_ARRAY, /* u.array (typed_array) */
	JS_CLASS_DATAVIEW, /* u.typed_array */
	JS_CLASS_BIG_INT, /* u.object_data */
#ifdef CONFIG_BIGNUM
	JS_CLASS_BIG_FLOAT, /* u.object_data */
	JS_CLASS_FLOAT_ENV, /* u.float_env */
	JS_CLASS_BIG_DECIMAL, /* u.object_data */
	JS_CLASS_OPERATOR_SET, /* u.operator_set */
#endif
	JS_CLASS_MAP, /* u.map_state */
	JS_CLASS_SET, /* u.map_state */
	JS_CLASS_WEAKMAP, /* u.map_state */
	JS_CLASS_WEAKSET, /* u.map_state */
	JS_CLASS_MAP_ITERATOR, /* u.map_iterator_data */
	JS_CLASS_SET_ITERATOR, /* u.map_iterator_data */
	JS_CLASS_ARRAY_ITERATOR, /* u.array_iterator_data */
	JS_CLASS_STRING_ITERATOR, /* u.array_iterator_data */
	JS_CLASS_REGEXP_STRING_ITERATOR, /* u.regexp_string_iterator_data */
	JS_CLASS_GENERATOR, /* u.generator_data */
	JS_CLASS_PROXY, /* u.proxy_data */
	JS_CLASS_PROMISE, /* u.promise_data */
	JS_CLASS_PROMISE_RESOLVE_FUNCTION, /* u.promise_function_data */
	JS_CLASS_PROMISE_REJECT_FUNCTION, /* u.promise_function_data */
	JS_CLASS_ASYNC_FUNCTION, /* u.func */
	JS_CLASS_ASYNC_FUNCTION_RESOLVE, /* u.async_function_data */
	JS_CLASS_ASYNC_FUNCTION_REJECT, /* u.async_function_data */
	JS_CLASS_ASYNC_FROM_SYNC_ITERATOR, /* u.async_from_sync_iterator_data */
	JS_CLASS_ASYNC_GENERATOR_FUNCTION, /* u.func */
	JS_CLASS_ASYNC_GENERATOR, /* u.async_generator_data */

	JS_CLASS_INIT_COUNT, /* last entry for predefined classes */
};

struct ArrayWrapper {
	Array opaque;
};

void *gd_get_Array_opaque(ArrayWrapper *wrapper) {
	return &wrapper->opaque;
}

ArrayWrapper *gd_new_Array_wrapper(void *p_from) {
	Array opaque = Array(*static_cast<Array *>(p_from));
	return new ArrayWrapper{ opaque };
}

ArrayWrapper *gd_new_empty_array_wrapper() {
	return new ArrayWrapper{ Array() };
}

VariantWrapper *gd_variant_new_Array(JSValue *val) {
	if (ctx == nullptr)
		return gd_new_variant_nil();
	Array r_arr;
	JSValue js_len = JS_GetPropertyStr(ctx, *val, "length");
	int len;
	if (JS_ToInt32(ctx, &len, js_len))
		return nullptr;
	for (int i = 0; i < len; i++) {
		JSValue el = JS_GetPropertyUint32(ctx, *val, i);
		Variant gd_val;
		if (JS_IsString(el) || JS_IsNumber(el) || JS_IsBool(el)) {
			gd_val = *GET_VARIANT_OPAQUE(el.gptr);
		} else if (JS_IsObject(el)) {
			gd_val = memnew(godot::JSObject(el));
		}
		r_arr.append(gd_val);
		JS_FreeValue(ctx, el);
	}
	JS_FreeValue(ctx, js_len);
	return gd_new_variant_Array(&r_arr);
}

void gd_Array_call_append(JSValue *arr, JSValue *val) {
	Variant gd_val = *GET_VARIANT_OPAQUE(arr->gptr);
	Array gd_arr = Array(gd_val);
	gd_arr.append(val->gptr);
	Variant ngd_val = Variant(gd_arr);
	gd_set_variant_opaque((VariantWrapper *)arr->gptr, &ngd_val);
}
