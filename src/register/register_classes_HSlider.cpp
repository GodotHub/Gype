#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/h_slider.hpp>

using namespace godot;

void register_classes_HSlider() {
    qjs::Context::Module &_module = _Control;
    _module.class_<HSlider>("HSlider")
           .constructor<>()
;}