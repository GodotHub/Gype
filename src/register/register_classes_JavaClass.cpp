#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/java_class.hpp>

using namespace godot;

void register_classes_JavaClass() {
    qjs::Context::Module &_module = _General;
    _module.class_<JavaClass>("JavaClass")
           .constructor<>()
;}