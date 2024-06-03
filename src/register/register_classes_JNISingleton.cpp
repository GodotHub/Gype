#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_JNISingleton() {
    qjs::Context::Module &_module = _System;
    _module.class_<JNISingleton>("JNISingleton")
           .constructor<>()
;}