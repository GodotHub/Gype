#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeOneShot() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeOneShot>("AnimationNodeOneShot")
			.constructor<>()
			.base<AnimationNodeSync>()
			.property<static_cast<AnimationNodeOneShot::MixMode (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_mix_mode), static_cast<void (AnimationNodeOneShot::*)(AnimationNodeOneShot::MixMode)>(&AnimationNodeOneShot::set_mix_mode)>((new std::string("mix_mode"))->c_str())
			.property<static_cast<double (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_fadein_time), static_cast<void (AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_fadein_time)>((new std::string("fadein_time"))->c_str())
			.property<static_cast<Ref<Curve> (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_fadein_curve), static_cast<void (AnimationNodeOneShot::*)(const Ref<Curve> &)>(&AnimationNodeOneShot::set_fadein_curve)>((new std::string("fadein_curve"))->c_str())
			.property<static_cast<double (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_fadeout_time), static_cast<void (AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_fadeout_time)>((new std::string("fadeout_time"))->c_str())
			.property<static_cast<Ref<Curve> (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_fadeout_curve), static_cast<void (AnimationNodeOneShot::*)(const Ref<Curve> &)>(&AnimationNodeOneShot::set_fadeout_curve)>((new std::string("fadeout_curve"))->c_str())
			.property<static_cast<bool (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::is_loop_broken_at_end), static_cast<void (AnimationNodeOneShot::*)(bool)>(&AnimationNodeOneShot::set_break_loop_at_end)>((new std::string("break_loop_at_end"))->c_str())
			.property<static_cast<bool (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::has_autorestart), static_cast<void (AnimationNodeOneShot::*)(bool)>(&AnimationNodeOneShot::set_autorestart)>((new std::string("autorestart"))->c_str())
			.property<static_cast<double (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_autorestart_delay), static_cast<void (AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_autorestart_delay)>((new std::string("autorestart_delay"))->c_str())
			.property<static_cast<double (AnimationNodeOneShot::*)() const>(&AnimationNodeOneShot::get_autorestart_random_delay), static_cast<void (AnimationNodeOneShot::*)(double)>(&AnimationNodeOneShot::set_autorestart_random_delay)>((new std::string("autorestart_random_delay"))->c_str());
	qjs::Value _OneShotRequest = context->newObject();
	_OneShotRequest[(new std::string("ONE_SHOT_REQUEST_NONE"))->c_str()] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_NONE;
	_OneShotRequest[(new std::string("ONE_SHOT_REQUEST_FIRE"))->c_str()] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_FIRE;
	_OneShotRequest[(new std::string("ONE_SHOT_REQUEST_ABORT"))->c_str()] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_ABORT;
	_OneShotRequest[(new std::string("ONE_SHOT_REQUEST_FADE_OUT"))->c_str()] = AnimationNodeOneShot::OneShotRequest::ONE_SHOT_REQUEST_FADE_OUT;
	_module.add("OneShotRequest", std::move(_OneShotRequest));
	qjs::Value _MixMode = context->newObject();
	_MixMode[(new std::string("MIX_MODE_BLEND"))->c_str()] = AnimationNodeOneShot::MixMode::MIX_MODE_BLEND;
	_MixMode[(new std::string("MIX_MODE_ADD"))->c_str()] = AnimationNodeOneShot::MixMode::MIX_MODE_ADD;
	_module.add("MixMode", std::move(_MixMode));
}