#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/container.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SplitContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<SplitContainer>("SplitContainer")
            .constructor<>()
            .base<Container>()
            .property<static_cast<int32_t(SplitContainer::*)()const>(&SplitContainer::get_split_offset),static_cast<void(SplitContainer::*)(int32_t)>(&SplitContainer::set_split_offset)>("split_offset")
            .property<static_cast<bool(SplitContainer::*)()const>(&SplitContainer::is_collapsed),static_cast<void(SplitContainer::*)(bool)>(&SplitContainer::set_collapsed)>("collapsed")
            .property<static_cast<SplitContainer::DraggerVisibility(SplitContainer::*)()const>(&SplitContainer::get_dragger_visibility),static_cast<void(SplitContainer::*)(SplitContainer::DraggerVisibility)>(&SplitContainer::set_dragger_visibility)>("dragger_visibility")
            .property<static_cast<bool(SplitContainer::*)()const>(&SplitContainer::is_vertical),static_cast<void(SplitContainer::*)(bool)>(&SplitContainer::set_vertical)>("vertical")
            .fun<static_cast<void(SplitContainer::*)()>(&SplitContainer::clamp_split_offset)>("clamp_split_offset")
;    qjs::Value _DraggerVisibility = context->newObject();
    _DraggerVisibility["DRAGGER_VISIBLE"] = SplitContainer::DraggerVisibility::DRAGGER_VISIBLE;
    _DraggerVisibility["DRAGGER_HIDDEN"] = SplitContainer::DraggerVisibility::DRAGGER_HIDDEN;
    _DraggerVisibility["DRAGGER_HIDDEN_COLLAPSED"] = SplitContainer::DraggerVisibility::DRAGGER_HIDDEN_COLLAPSED;
    _module.add("DraggerVisibility", std::move(_DraggerVisibility));
}