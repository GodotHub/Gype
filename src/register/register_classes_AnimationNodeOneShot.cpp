#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/curve.hpp>

using namespace godot;

void register_classes_AnimationNodeOneShot() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimationNodeOneShot>("AnimationNodeOneShot")
			.constructor<>()
			.property<&AnimationNodeOneShot::get_mix_mode, &AnimationNodeOneShot::set_mix_mode>("mix_mode")
			.property<&AnimationNodeOneShot::get_fadein_time, &AnimationNodeOneShot::set_fadein_time>("fadein_time")
			.property<&AnimationNodeOneShot::get_fadein_curve, &AnimationNodeOneShot::set_fadein_curve>("fadein_curve")
			.property<&AnimationNodeOneShot::get_fadeout_time, &AnimationNodeOneShot::set_fadeout_time>("fadeout_time")
			.property<&AnimationNodeOneShot::get_fadeout_curve, &AnimationNodeOneShot::set_fadeout_curve>("fadeout_curve")
			.property<&AnimationNodeOneShot::has_autorestart, &AnimationNodeOneShot::set_autorestart>("autorestart")
			.property<&AnimationNodeOneShot::get_autorestart_delay, &AnimationNodeOneShot::set_autorestart_delay>("autorestart_delay")
			.property<&AnimationNodeOneShot::get_autorestart_random_delay, &AnimationNodeOneShot::set_autorestart_random_delay>("autorestart_random_delay");
}