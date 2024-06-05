#include <godot_cpp/classes/optimized_translation.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/translation.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_OptimizedTranslation() {
	qjs::Context::Module &_module = _General;
	_module.class_<OptimizedTranslation>("OptimizedTranslation")
			.constructor<>()
			.fun<static_cast<void (OptimizedTranslation::*)(const Ref<Translation> &)>(&OptimizedTranslation::generate)>("generate");
}