#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_JavaClassWrapper() {
    qjs::Context::Module &_module = _System;
    _module.class_<JavaClassWrapper>("JavaClassWrapper")
           .constructor<>()
		   .fun<static_cast<Ref<JavaClass>(JavaClassWrapper::*)(const String &)>(&JavaClassWrapper::wrap)>("wrap")
;}