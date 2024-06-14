#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Tweener() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Tweener>("Tweener")
            .constructor<>()
            .base<RefCounted>()
;}