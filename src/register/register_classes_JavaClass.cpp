#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_JavaClass() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<JavaClass>("JavaClass")
            .constructor<>()
            .base<RefCounted>()
;}