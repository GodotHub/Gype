#include "wrapper/dictionary_wrapper.h"
#include "wrapper/array_wrapper.h"
#include "wrapper/variant_wrapper.h"
#include "wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct DictionaryWrapper {
	Dictionary opaque;
};

DictionaryWrapper *gd_convert_to_slowArray(ArrayWrapper *arrw) {
	DictionaryWrapper *slow = memnew(DictionaryWrapper);
	memnew_placement(&(slow->opaque), Dictionary());
	Array arr = *static_cast<Array *>(gd_Array_get_opaque(arrw));
	for (int i = 0; i < arr.size(); i++) {
		slow->opaque.get_or_add(i, arr[i]);
	}

	return slow;
}
void gd_dict_set_value(DictionaryWrapper *dictw, VariantWrapper *keyw, VariantWrapper *varw) {
	Variant key = *GET_VARIANT_OPAQUE(keyw);
	Variant varw = *GET_VARIANT_OPAQUE(varw);
	dictw->opaque[key] = varw;
}