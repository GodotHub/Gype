#include <godot_cpp/classes/animation_node_animation.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeAnimation() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeAnimation>("AnimationNodeAnimation")
            .constructor<>()
            .base<AnimationRootNode>()
            .property<static_cast<StringName(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::get_animation),static_cast<void(AnimationNodeAnimation::*)(const StringName &)>(&AnimationNodeAnimation::set_animation)>("animation")
            .property<static_cast<AnimationNodeAnimation::PlayMode(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::get_play_mode),static_cast<void(AnimationNodeAnimation::*)(AnimationNodeAnimation::PlayMode)>(&AnimationNodeAnimation::set_play_mode)>("play_mode")
            .property<static_cast<bool(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::is_using_custom_timeline),static_cast<void(AnimationNodeAnimation::*)(bool)>(&AnimationNodeAnimation::set_use_custom_timeline)>("use_custom_timeline")
            .property<static_cast<double(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::get_timeline_length),static_cast<void(AnimationNodeAnimation::*)(double)>(&AnimationNodeAnimation::set_timeline_length)>("timeline_length")
            .property<static_cast<bool(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::is_stretching_time_scale),static_cast<void(AnimationNodeAnimation::*)(bool)>(&AnimationNodeAnimation::set_stretch_time_scale)>("stretch_time_scale")
            .property<static_cast<double(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::get_start_offset),static_cast<void(AnimationNodeAnimation::*)(double)>(&AnimationNodeAnimation::set_start_offset)>("start_offset")
            .property<static_cast<Animation::LoopMode(AnimationNodeAnimation::*)()const>(&AnimationNodeAnimation::get_loop_mode),static_cast<void(AnimationNodeAnimation::*)(Animation::LoopMode)>(&AnimationNodeAnimation::set_loop_mode)>("loop_mode")
;    qjs::Value _PlayMode = context->newObject();
    _PlayMode["PLAY_MODE_FORWARD"] = AnimationNodeAnimation::PlayMode::PLAY_MODE_FORWARD;
    _PlayMode["PLAY_MODE_BACKWARD"] = AnimationNodeAnimation::PlayMode::PLAY_MODE_BACKWARD;
    _module.add("PlayMode", std::move(_PlayMode));
}