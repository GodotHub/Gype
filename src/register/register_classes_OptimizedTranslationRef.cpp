#include "register/register_classes.h"
#include <godot_cpp/classes/optimized_translation.hpp>

using namespace godot;

void register_classes_OptimizedTranslationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OptimizedTranslation>>("OptimizedTranslationRef").constructor<OptimizedTranslation *>();
}