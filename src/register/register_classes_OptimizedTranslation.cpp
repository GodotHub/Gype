#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/optimized_translation.hpp>

using namespace godot;

void register_classes_OptimizedTranslation() {
    qjs::Context::Module &_module = _General;
    _module.class_<OptimizedTranslation>("OptimizedTranslation")
           .constructor<>()
		    .fun<static_cast<void(OptimizedTranslation::*)(const Ref<Translation> &)>(&OptimizedTranslation::generate)>("generate")
;}