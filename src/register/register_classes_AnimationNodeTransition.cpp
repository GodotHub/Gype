#include <godot_cpp/classes/animation_node_transition.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeTransition() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeTransition>("AnimationNodeTransition")
            .constructor<>()
            .base<AnimationNodeSync>()
            .property<static_cast<double(AnimationNodeTransition::*)()const>(&AnimationNodeTransition::get_xfade_time),static_cast<void(AnimationNodeTransition::*)(double)>(&AnimationNodeTransition::set_xfade_time)>("xfade_time")
            .property<static_cast<Ref<Curve>(AnimationNodeTransition::*)()const>(&AnimationNodeTransition::get_xfade_curve),static_cast<void(AnimationNodeTransition::*)(const Ref<Curve> &)>(&AnimationNodeTransition::set_xfade_curve)>("xfade_curve")
            .property<static_cast<bool(AnimationNodeTransition::*)()const>(&AnimationNodeTransition::is_allow_transition_to_self),static_cast<void(AnimationNodeTransition::*)(bool)>(&AnimationNodeTransition::set_allow_transition_to_self)>("allow_transition_to_self")
            .property<static_cast<void(AnimationNodeTransition::*)(int32_t)>(&AnimationNodeTransition::set_input_count)>("{'name': 'set_input_count', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'input_count', 'type': 'int', 'meta': 'int32_t'}]}")
            .fun<static_cast<void(AnimationNodeTransition::*)(int32_t,bool)>(&AnimationNodeTransition::set_input_as_auto_advance)>("set_input_as_auto_advance")
            .fun<static_cast<bool(AnimationNodeTransition::*)(int32_t)const>(&AnimationNodeTransition::is_input_set_as_auto_advance)>("is_input_set_as_auto_advance")
            .fun<static_cast<void(AnimationNodeTransition::*)(int32_t,bool)>(&AnimationNodeTransition::set_input_break_loop_at_end)>("set_input_break_loop_at_end")
            .fun<static_cast<bool(AnimationNodeTransition::*)(int32_t)const>(&AnimationNodeTransition::is_input_loop_broken_at_end)>("is_input_loop_broken_at_end")
            .fun<static_cast<void(AnimationNodeTransition::*)(int32_t,bool)>(&AnimationNodeTransition::set_input_reset)>("set_input_reset")
            .fun<static_cast<bool(AnimationNodeTransition::*)(int32_t)const>(&AnimationNodeTransition::is_input_reset)>("is_input_reset")
;}