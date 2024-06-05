#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatedTexture() {
	qjs::Context::Module &_module = _General;
	_module.class_<AnimatedTexture>("AnimatedTexture")
			.constructor<>()
			.property<&AnimatedTexture::get_frames, &AnimatedTexture::set_frames>("frames")
			.property<&AnimatedTexture::get_current_frame, &AnimatedTexture::set_current_frame>("current_frame")
			.property<&AnimatedTexture::get_pause, &AnimatedTexture::set_pause>("pause")
			.property<&AnimatedTexture::get_one_shot, &AnimatedTexture::set_one_shot>("one_shot")
			.property<&AnimatedTexture::get_speed_scale, &AnimatedTexture::set_speed_scale>("speed_scale")
			.fun<static_cast<void (AnimatedTexture::*)(int32_t, const Ref<Texture2D> &)>(&AnimatedTexture::set_frame_texture)>("set_frame_texture")
			.fun<static_cast<Ref<Texture2D> (AnimatedTexture::*)(int32_t) const>(&AnimatedTexture::get_frame_texture)>("get_frame_texture")
			.fun<static_cast<void (AnimatedTexture::*)(int32_t, double)>(&AnimatedTexture::set_frame_duration)>("set_frame_duration")
			.fun<static_cast<double (AnimatedTexture::*)(int32_t) const>(&AnimatedTexture::get_frame_duration)>("get_frame_duration");
}