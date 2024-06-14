#include <godot_cpp/classes/optimized_translation.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OptimizedTranslation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OptimizedTranslation>("OptimizedTranslation")
			.constructor<>()
			.base<Translation>()
			.fun<static_cast<void (OptimizedTranslation::*)(const Ref<Translation> &)>(&OptimizedTranslation::generate)>((new std::string("generate"))->c_str());
}