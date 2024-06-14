#include <godot_cpp/classes/v_slider.hpp>
#include <godot_cpp/classes/slider.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VSlider() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VSlider>("VSlider")
            .constructor<>()
            .base<Slider>()
;}