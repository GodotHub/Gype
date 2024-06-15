#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeStateMachineTransition() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeStateMachineTransition>("AnimationNodeStateMachineTransition")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_xfade_time),static_cast<void(AnimationNodeStateMachineTransition::*)(double)>(&AnimationNodeStateMachineTransition::set_xfade_time)>("xfade_time")
            .property<static_cast<Ref<Curve>(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_xfade_curve),static_cast<void(AnimationNodeStateMachineTransition::*)(const Ref<Curve> &)>(&AnimationNodeStateMachineTransition::set_xfade_curve)>("xfade_curve")
            .property<static_cast<bool(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::is_loop_broken_at_end),static_cast<void(AnimationNodeStateMachineTransition::*)(bool)>(&AnimationNodeStateMachineTransition::set_break_loop_at_end)>("break_loop_at_end")
            .property<static_cast<bool(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::is_reset),static_cast<void(AnimationNodeStateMachineTransition::*)(bool)>(&AnimationNodeStateMachineTransition::set_reset)>("reset")
            .property<static_cast<int32_t(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_priority),static_cast<void(AnimationNodeStateMachineTransition::*)(int32_t)>(&AnimationNodeStateMachineTransition::set_priority)>("priority")
            .property<static_cast<AnimationNodeStateMachineTransition::SwitchMode(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_switch_mode),static_cast<void(AnimationNodeStateMachineTransition::*)(AnimationNodeStateMachineTransition::SwitchMode)>(&AnimationNodeStateMachineTransition::set_switch_mode)>("switch_mode")
            .property<static_cast<AnimationNodeStateMachineTransition::AdvanceMode(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_advance_mode),static_cast<void(AnimationNodeStateMachineTransition::*)(AnimationNodeStateMachineTransition::AdvanceMode)>(&AnimationNodeStateMachineTransition::set_advance_mode)>("advance_mode")
            .property<static_cast<StringName(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_advance_condition),static_cast<void(AnimationNodeStateMachineTransition::*)(const StringName &)>(&AnimationNodeStateMachineTransition::set_advance_condition)>("advance_condition")
            .property<static_cast<String(AnimationNodeStateMachineTransition::*)()const>(&AnimationNodeStateMachineTransition::get_advance_expression),static_cast<void(AnimationNodeStateMachineTransition::*)(const String &)>(&AnimationNodeStateMachineTransition::set_advance_expression)>("advance_expression")
;    qjs::Value _SwitchMode = context->newObject();
    _SwitchMode["SWITCH_MODE_IMMEDIATE"] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_IMMEDIATE;
    _SwitchMode["SWITCH_MODE_SYNC"] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_SYNC;
    _SwitchMode["SWITCH_MODE_AT_END"] = AnimationNodeStateMachineTransition::SwitchMode::SWITCH_MODE_AT_END;
    _module.add("SwitchMode", std::move(_SwitchMode));
    qjs::Value _AdvanceMode = context->newObject();
    _AdvanceMode["ADVANCE_MODE_DISABLED"] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_DISABLED;
    _AdvanceMode["ADVANCE_MODE_ENABLED"] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_ENABLED;
    _AdvanceMode["ADVANCE_MODE_AUTO"] = AnimationNodeStateMachineTransition::AdvanceMode::ADVANCE_MODE_AUTO;
    _module.add("AdvanceMode", std::move(_AdvanceMode));
}