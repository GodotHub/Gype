#include <godot_cpp/classes/jni_singleton.hpp>
#include <godot_cpp/classes/object.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_JNISingleton() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<JNISingleton>("JNISingleton")
            .constructor<>()
            .base<Object>()
;}