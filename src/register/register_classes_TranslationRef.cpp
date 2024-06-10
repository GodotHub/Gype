#include "register/register_classes.h"
#include <godot_cpp/classes/translation.hpp>

using namespace godot;

void register_classes_TranslationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Translation>>("TranslationRef").constructor<Translation *>();
}