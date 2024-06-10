#include "register/register_classes.h"
#include <godot_cpp/classes/random_number_generator.hpp>

using namespace godot;

void register_classes_RandomNumberGeneratorRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RandomNumberGenerator>>("RandomNumberGeneratorRef").constructor<RandomNumberGenerator *>();
}