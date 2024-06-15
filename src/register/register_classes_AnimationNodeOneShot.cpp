#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimationNodeOneShot() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimationNodeOneShot>("AnimationNodeOneShot")
            .constructor<>()
            .base<AnimationNodeSync>()
            .property<static_cast<AnimationNodeOneShot::MixMode(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_mix_mode),static_cast<void(AnimationNodeOneShot::*)(AnimationNodeOneShot::MixMode)>(&AnimationNodeOneShot::set_mix_mode)>("mix_mode")
            .property<static_cast<double(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_fadein_time),static_cast<void(AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_fadein_time)>("fadein_time")
            .property<static_cast<Ref<Curve>(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_fadein_curve),static_cast<void(AnimationNodeOneShot::*)(const Ref<Curve> &)>(&AnimationNodeOneShot::set_fadein_curve)>("fadein_curve")
            .property<static_cast<double(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_fadeout_time),static_cast<void(AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_fadeout_time)>("fadeout_time")
            .property<static_cast<Ref<Curve>(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_fadeout_curve),static_cast<void(AnimationNodeOneShot::*)(const Ref<Curve> &)>(&AnimationNodeOneShot::set_fadeout_curve)>("fadeout_curve")
            .property<static_cast<bool(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::is_loop_broken_at_end),static_cast<void(AnimationNodeOneShot::*)(bool)>(&AnimationNodeOneShot::set_break_loop_at_end)>("break_loop_at_end")
            .property<static_cast<bool(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::has_autorestart),static_cast<void(AnimationNodeOneShot::*)(bool)>(&AnimationNodeOneShot::set_autorestart)>("autorestart")
            .property<static_cast<double(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_autorestart_delay),static_cast<void(AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_autorestart_delay)>("autorestart_delay")
            .property<static_cast<double(AnimationNodeOneShot::*)()const>(&AnimationNodeOneShot::get_autorestart_random_delay),static_cast<void(AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_autorestart_random_delay)>("autorestart_random_delay")
;    qjs::Value _OneShotRequest = context->newObject();
    _OneShotRequest["ONE_SHOT_REQUEST_NONE"] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_NONE;
    _OneShotRequest["ONE_SHOT_REQUEST_FIRE"] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_FIRE;
    _OneShotRequest["ONE_SHOT_REQUEST_ABORT"] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_ABORT;
    _OneShotRequest["ONE_SHOT_REQUEST_FADE_OUT"] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_FADE_OUT;
    _module.add("OneShotRequest", std::move(_OneShotRequest));
    qjs::Value _MixMode = context->newObject();
    _MixMode["MIX_MODE_BLEND"] = AnimationNodeOneShot::MixMode::MIX_MODE_BLEND;
    _MixMode["MIX_MODE_ADD"] = AnimationNodeOneShot::MixMode::MIX_MODE_ADD;
    _module.add("MixMode", std::move(_MixMode));
}