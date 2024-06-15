#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FlowContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<FlowContainer>("FlowContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<FlowContainer::AlignmentMode(FlowContainer::*)()const>(&FlowContainer::get_alignment),static_cast<void(FlowContainer::*)(FlowContainer::AlignmentMode)>(&FlowContainer::set_alignment)>("alignment")
            .property<static_cast<FlowContainer::LastWrapAlignmentMode(FlowContainer::*)()const>(&FlowContainer::get_last_wrap_alignment),static_cast<void(FlowContainer::*)(FlowContainer::LastWrapAlignmentMode)>(&FlowContainer::set_last_wrap_alignment)>("last_wrap_alignment")
            .property<static_cast<bool(FlowContainer::*)()const>(&FlowContainer::is_vertical),static_cast<void(FlowContainer::*)(bool)>(&FlowContainer::set_vertical)>("vertical")
            .property<static_cast<bool(FlowContainer::*)()const>(&FlowContainer::is_reverse_fill),static_cast<void(FlowContainer::*)(bool)>(&FlowContainer::set_reverse_fill)>("reverse_fill")
            .fun<static_cast<int32_t(FlowContainer::*)()const>(&FlowContainer::get_line_count)>("get_line_count")
;    qjs::Value _AlignmentMode = context->newObject();
    _AlignmentMode["ALIGNMENT_BEGIN"] = FlowContainer::AlignmentMode::ALIGNMENT_BEGIN;
    _AlignmentMode["ALIGNMENT_CENTER"] = FlowContainer::AlignmentMode::ALIGNMENT_CENTER;
    _AlignmentMode["ALIGNMENT_END"] = FlowContainer::AlignmentMode::ALIGNMENT_END;
    _module.add("AlignmentMode", std::move(_AlignmentMode));
    qjs::Value _LastWrapAlignmentMode = context->newObject();
    _LastWrapAlignmentMode["LAST_WRAP_ALIGNMENT_INHERIT"] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_INHERIT;
    _LastWrapAlignmentMode["LAST_WRAP_ALIGNMENT_BEGIN"] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_BEGIN;
    _LastWrapAlignmentMode["LAST_WRAP_ALIGNMENT_CENTER"] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_CENTER;
    _LastWrapAlignmentMode["LAST_WRAP_ALIGNMENT_END"] = FlowContainer::LastWrapAlignmentMode::LAST_WRAP_ALIGNMENT_END;
    _module.add("LastWrapAlignmentMode", std::move(_LastWrapAlignmentMode));
}