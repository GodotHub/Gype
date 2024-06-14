#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/tweener.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_IntervalTweener() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<IntervalTweener>("IntervalTweener")
            .constructor<>()
            .base<Tweener>()
;}