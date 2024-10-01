#include "wrapper/array_wrapper.h"
#include "quickjs/quickjs.h"
#include "utils/env.h"
#include "utils/quickjs_helper.h"
#include "wrapper/js_object.h"
#include "wrapper/object_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include "wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
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

struct SlowArrayWrapper {
	Array arr;
	Dictionary dict;
};

WRAPPER_GET_OPAQUE_IMPL(Array);

ArrayWrapper *gd_Array_new_wrapper(void *value) {
	return memnew(ArrayWrapper{ Array(*static_cast<Array *>(value)) });
}

SlowArrayWrapper *gd_variant_new_slow_Array(JSValue *p_arr) {
	return nullptr;
}

ArrayWrapper *gd_Array_new_empty_wrapper() {
	return memnew(ArrayWrapper{ Array() });
}

void gd_Array_call_append(ArrayWrapper *arr, VariantWrapper *val) {
	Array gd_arr = arr->opaque;
	Variant gd_val = *static_cast<Variant *>(gd_Variant_get_opaque(val));
	gd_arr.append(gd_val);
}

void gd_Array_call_append_array(ArrayWrapper *arr1, ArrayWrapper *arr2) {
	Array gd_arr1 = arr1->opaque;
	Array gd_arr2 = arr2->opaque;
	gd_arr1.append_array(gd_arr2);
}

void gd_Array_call_set_value(ArrayWrapper *arr, VariantWrapper *var, int index) {
	Array gd_arr = arr->opaque;
	Variant gd_var = *GET_VARIANT_OPAQUE(var);
	gd_arr[index] = gd_var;
}

void gd_Array_call_clear(ArrayWrapper *arr) {
	arr->opaque.clear();
}

void gd_Array_call_print(ArrayWrapper *arr) {
	Array gd_arr = arr->opaque;
	UtilityFunctions::print(gd_arr);
}

void gd_Array_call_reset(JSContext *ctx, JSValue arr) {
	Array gd_arr = *GET_VARIANT_OPAQUE(arr.var);
	gd_arr.clear();
	JSValue js_length = JS_GetPropertyStr(ctx, arr, "length");
	int len;
	if (JS_ToInt32(ctx, &len, js_length))
		return;
	for (int i = 0; i < len; i++) {
		JSValue val = JS_GetPropertyUint32(ctx, arr, i);
		Variant gd_val = *GET_VARIANT_OPAQUE(val.var);
		gd_arr.append(gd_val);
		JS_FreeValue(ctx, val);
	}
	JS_FreeValue(ctx, js_length);
}

void gd_Array_call_pop(ArrayWrapper *arr, int shift) {
	Array gd_arr = arr->opaque;
	if (shift)
		gd_arr.pop_front();
	else
		gd_arr.pop_back();
}

void gd_Array_call_reverse(ArrayWrapper *arr) {
	arr->opaque.reverse();
}

// void gd_Array_call_remove_at(JSValue *p_arr, int index) {
// 	Array gd_arr = *GET_VARIANT_OPAQUE(p_arr->var);
// 	gd_arr.remove_at(index);
// }