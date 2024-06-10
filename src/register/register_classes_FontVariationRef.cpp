#include "register/register_classes.h"
#include <godot_cpp/classes/font_variation.hpp>

using namespace godot;

void register_classes_FontVariationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<FontVariation>>("FontVariationRef").constructor<FontVariation *>();
}