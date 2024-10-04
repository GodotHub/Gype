#include "quickjs/wrapper/slow_array_wrapper.h"
#include "quickjs/wrapper/array_wrapper.h"
#include "quickjs/wrapper/variant_wrapper.h"
#include "quickjs/wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct SlowArrayWrapper {
	Dictionary opaque;
};

SlowArrayWrapper *gd_convert_to_SlowArray(ArrayWrapper *arrw) {
	SlowArrayWrapper *slow = memnew(SlowArrayWrapper);
	memnew_placement(&(slow->opaque), Dictionary());
	Array arr = *static_cast<Array *>(gd_Array_get_opaque(arrw));
	for (int i = 0; i < arr.size(); i++) {
		slow->opaque[i] = arr[i];
	}
	return slow;
}

void gd_SlowArray_set_value(SlowArrayWrapper *dictw, VariantWrapper *keyw, VariantWrapper *varw) {
	Variant key = *GET_VARIANT_OPAQUE(keyw);
	Variant var = *GET_VARIANT_OPAQUE(varw);
	dictw->opaque[key] = var;
}

void *gd_SlowArray_get_opaque(SlowArrayWrapper *wrapper) {
	return &wrapper->opaque;
}