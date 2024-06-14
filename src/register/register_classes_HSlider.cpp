#include <godot_cpp/classes/h_slider.hpp>
#include <godot_cpp/classes/slider.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HSlider() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<HSlider>("HSlider")
            .constructor<>()
            .base<Slider>()
;}