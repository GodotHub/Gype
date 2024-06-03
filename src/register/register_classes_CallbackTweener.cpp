#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/callback_tweener.hpp>

using namespace godot;

void register_classes_CallbackTweener() {
    qjs::Context::Module &_module = _General;
    _module.class_<CallbackTweener>("CallbackTweener")
           .constructor<>()
		    .fun<static_cast<Ref<CallbackTweener>(CallbackTweener::*)(double)>(&CallbackTweener::set_delay)>("set_delay")
;}