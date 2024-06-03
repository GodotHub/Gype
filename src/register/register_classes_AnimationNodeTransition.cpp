#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/animation_node_transition.hpp>

using namespace godot;

void register_classes_AnimationNodeTransition() {
    qjs::Context::Module &_module = _General;
    _module.class_<AnimationNodeTransition>("AnimationNodeTransition")
           .constructor<>()
           .property<AnimationNodeTransition::get_xfade_time, AnimationNodeTransition::set_xfade_time>("xfade_time")
           .property<AnimationNodeTransition::get_xfade_curve, AnimationNodeTransition::set_xfade_curve>("xfade_curve")
           .property<AnimationNodeTransition::is_allow_transition_to_self, AnimationNodeTransition::set_allow_transition_to_self>("allow_transition_to_self")
           .property<AnimationNodeTransition::get_input_count, AnimationNodeTransition::set_input_count>("input_count")
		    .fun<static_cast<void(AnimationNodeTransition::*)(int32_t,bool)>(&AnimationNodeTransition::set_input_as_auto_advance)>("set_input_as_auto_advance")
		    .fun<static_cast<bool(AnimationNodeTransition::*)(int32_t)const>(&AnimationNodeTransition::is_input_set_as_auto_advance)>("is_input_set_as_auto_advance")
		    .fun<static_cast<void(AnimationNodeTransition::*)(int32_t,bool)>(&AnimationNodeTransition::set_input_reset)>("set_input_reset")
		    .fun<static_cast<bool(AnimationNodeTransition::*)(int32_t)const>(&AnimationNodeTransition::is_input_reset)>("is_input_reset")
;}