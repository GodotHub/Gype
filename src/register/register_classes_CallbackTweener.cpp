#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tweener.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CallbackTweener() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CallbackTweener>("CallbackTweener")
            .constructor<>()
            .base<Tweener>()
            .fun<static_cast<Ref<CallbackTweener>(CallbackTweener::*)(double)>(&CallbackTweener::set_delay)>("set_delay")
;}