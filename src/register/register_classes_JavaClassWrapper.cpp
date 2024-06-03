#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/java_class_wrapper.hpp>

using namespace godot;

void register_classes_JavaClassWrapper() {
    qjs::Context::Module &_module = _General;
    _module.class_<JavaClassWrapper>("JavaClassWrapper")
           .constructor<>()
		    .fun<static_cast<Ref<JavaClass>(JavaClassWrapper::*)(const String &)>(&JavaClassWrapper::wrap)>("wrap")
;}