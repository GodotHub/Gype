#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/aspect_ratio_container.hpp>

using namespace godot;

void register_classes_AspectRatioContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<AspectRatioContainer>("AspectRatioContainer")
           .constructor<>()
           .property<AspectRatioContainer::get_ratio, AspectRatioContainer::set_ratio>("ratio")
           .property<AspectRatioContainer::get_stretch_mode, AspectRatioContainer::set_stretch_mode>("stretch_mode")
           .property<AspectRatioContainer::get_alignment_horizontal, AspectRatioContainer::set_alignment_horizontal>("alignment_horizontal")
           .property<AspectRatioContainer::get_alignment_vertical, AspectRatioContainer::set_alignment_vertical>("alignment_vertical")
;}