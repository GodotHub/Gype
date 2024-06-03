#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/v_slider.hpp>

using namespace godot;

void register_classes_VSlider() {
    qjs::Context::Module &_module = _Control;
    _module.class_<VSlider>("VSlider")
           .constructor<>()
;}