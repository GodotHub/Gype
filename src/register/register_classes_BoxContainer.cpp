#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoxContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<BoxContainer>("BoxContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<BoxContainer::AlignmentMode(BoxContainer::*)()const>(&BoxContainer::get_alignment),static_cast<void(BoxContainer::*)(BoxContainer::AlignmentMode)>(&BoxContainer::set_alignment)>("alignment")
            .property<static_cast<bool(BoxContainer::*)()const>(&BoxContainer::is_vertical),static_cast<void(BoxContainer::*)(bool)>(&BoxContainer::set_vertical)>("vertical")
            .fun<static_cast<Control *(BoxContainer::*)(bool)>(&BoxContainer::add_spacer)>("add_spacer")
;    qjs::Value _AlignmentMode = context->newObject();
    _AlignmentMode["ALIGNMENT_BEGIN"] = BoxContainer::AlignmentMode::ALIGNMENT_BEGIN;
    _AlignmentMode["ALIGNMENT_CENTER"] = BoxContainer::AlignmentMode::ALIGNMENT_CENTER;
    _AlignmentMode["ALIGNMENT_END"] = BoxContainer::AlignmentMode::ALIGNMENT_END;
    _module.add("AlignmentMode", std::move(_AlignmentMode));
}