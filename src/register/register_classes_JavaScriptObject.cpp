#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_JavaScriptObject() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<JavaScriptObject>("JavaScriptObject")
            .constructor<>()
            .base<RefCounted>()
;}