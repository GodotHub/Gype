#include "quickjs/wrapper/dictionary_wrapper.h"
#include "quickjs/wrapper/array_wrapper.h"
#include "quickjs/wrapper/variant_wrapper.h"
#include "quickjs/wrapper/wrappers.h"
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

using namespace godot;

struct DictionaryWrapper {
	Dictionary opaque;
};

DictionaryWrapper *gd_new_empty_Dictionary_wrapper() {
	DictionaryWrapper *wrapper = memnew(DictionaryWrapper);
	memnew_placement(&(wrapper->opaque), Dictionary);
	return wrapper;
}

void gd_Dictionary_set_value(DictionaryWrapper *dictw, VariantWrapper *keyw, VariantWrapper *varw) {
	Variant key = *GET_VARIANT_OPAQUE(keyw);
	Variant var = *GET_VARIANT_OPAQUE(varw);
	dictw->opaque[key] = var;
}
void *gd_Dictionary_get_opaque(DictionaryWrapper *wrapper) {
	return &wrapper->opaque;
}