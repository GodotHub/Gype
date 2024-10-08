#include "quickjs/wrapper/array_wrapper.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/wrapper/js_object.h"
#include "quickjs/wrapper/object_wrapper.h"
#include "quickjs/wrapper/variant_wrapper.h"
#include "quickjs/wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

struct ArrayWrapper {
	Array opaque;
};

WRAPPER_GET_OPAQUE_IMPL(Array);

ArrayWrapper *gd_Array_new_wrapper(void *value) {
	return memnew(ArrayWrapper{ Array(*static_cast<Array *>(value)) });
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