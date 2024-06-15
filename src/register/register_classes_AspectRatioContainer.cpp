#include <godot_cpp/classes/aspect_ratio_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AspectRatioContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<AspectRatioContainer>("AspectRatioContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<double(AspectRatioContainer::*)()const>(&AspectRatioContainer::get_ratio),static_cast<void(AspectRatioContainer::*)(double)>(&AspectRatioContainer::set_ratio)>("ratio")
            .property<static_cast<AspectRatioContainer::StretchMode(AspectRatioContainer::*)()const>(&AspectRatioContainer::get_stretch_mode),static_cast<void(AspectRatioContainer::*)(AspectRatioContainer::StretchMode)>(&AspectRatioContainer::set_stretch_mode)>("stretch_mode")
            .property<static_cast<AspectRatioContainer::AlignmentMode(AspectRatioContainer::*)()const>(&AspectRatioContainer::get_alignment_horizontal),static_cast<void(AspectRatioContainer::*)(AspectRatioContainer::AlignmentMode)>(&AspectRatioContainer::set_alignment_horizontal)>("alignment_horizontal")
            .property<static_cast<AspectRatioContainer::AlignmentMode(AspectRatioContainer::*)()const>(&AspectRatioContainer::get_alignment_vertical),static_cast<void(AspectRatioContainer::*)(AspectRatioContainer::AlignmentMode)>(&AspectRatioContainer::set_alignment_vertical)>("alignment_vertical")
;    qjs::Value _StretchMode = context->newObject();
    _StretchMode["STRETCH_WIDTH_CONTROLS_HEIGHT"] = AspectRatioContainer::StretchMode::STRETCH_WIDTH_CONTROLS_HEIGHT;
    _StretchMode["STRETCH_HEIGHT_CONTROLS_WIDTH"] = AspectRatioContainer::StretchMode::STRETCH_HEIGHT_CONTROLS_WIDTH;
    _StretchMode["STRETCH_FIT"] = AspectRatioContainer::StretchMode::STRETCH_FIT;
    _StretchMode["STRETCH_COVER"] = AspectRatioContainer::StretchMode::STRETCH_COVER;
    _module.add("StretchMode", std::move(_StretchMode));
    qjs::Value _AlignmentMode = context->newObject();
    _AlignmentMode["ALIGNMENT_BEGIN"] = AspectRatioContainer::AlignmentMode::ALIGNMENT_BEGIN;
    _AlignmentMode["ALIGNMENT_CENTER"] = AspectRatioContainer::AlignmentMode::ALIGNMENT_CENTER;
    _AlignmentMode["ALIGNMENT_END"] = AspectRatioContainer::AlignmentMode::ALIGNMENT_END;
    _module.add("AlignmentMode", std::move(_AlignmentMode));
}