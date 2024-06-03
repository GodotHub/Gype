#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/jni_singleton.hpp>

using namespace godot;

void register_classes_JNISingleton() {
    qjs::Context::Module &_module = _General;
    _module.class_<JNISingleton>("JNISingleton")
           .constructor<>()
;}