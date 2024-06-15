#include <godot_cpp/classes/canvas_group.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CanvasGroup() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<CanvasGroup>("CanvasGroup")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<double(CanvasGroup::*)()const>(&CanvasGroup::get_fit_margin),static_cast<void(CanvasGroup::*)(double)>(&CanvasGroup::set_fit_margin)>("fit_margin")
            .property<static_cast<double(CanvasGroup::*)()const>(&CanvasGroup::get_clear_margin),static_cast<void(CanvasGroup::*)(double)>(&CanvasGroup::set_clear_margin)>("clear_margin")
            .property<static_cast<bool(CanvasGroup::*)()const>(&CanvasGroup::is_using_mipmaps),static_cast<void(CanvasGroup::*)(bool)>(&CanvasGroup::set_use_mipmaps)>("use_mipmaps")
;}