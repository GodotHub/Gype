
#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatedTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimatedTexture>("AnimatedTexture")
			.constructor<>()
			.base<Texture2D>()
			.static_fun<&AnimatedTexture::MAX_FRAMES>((new std::string("MAX_FRAMES"))->c_str())
			.property<static_cast<int32_t (AnimatedTexture::*)() const>(&AnimatedTexture::get_frames), static_cast<void (AnimatedTexture::*)(int32_t)>(&AnimatedTexture::set_frames)>((new std::string("frames"))->c_str())
			.property<static_cast<int32_t (AnimatedTexture::*)() const>(&AnimatedTexture::get_current_frame), static_cast<void (AnimatedTexture::*)(int32_t)>(&AnimatedTexture::set_current_frame)>((new std::string("current_frame"))->c_str())
			.property<static_cast<bool (AnimatedTexture::*)() const>(&AnimatedTexture::get_pause), static_cast<void (AnimatedTexture::*)(bool)>(&AnimatedTexture::set_pause)>((new std::string("pause"))->c_str())
			.property<static_cast<bool (AnimatedTexture::*)() const>(&AnimatedTexture::get_one_shot), static_cast<void (AnimatedTexture::*)(bool)>(&AnimatedTexture::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<double (AnimatedTexture::*)() const>(&AnimatedTexture::get_speed_scale), static_cast<void (AnimatedTexture::*)(double)>(&AnimatedTexture::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.fun<static_cast<void (AnimatedTexture::*)(int32_t, const Ref<Texture2D> &)>(&AnimatedTexture::set_frame_texture)>((new std::string("set_frame_texture"))->c_str())
			.fun<static_cast<Ref<Texture2D> (AnimatedTexture::*)(int32_t) const>(&AnimatedTexture::get_frame_texture)>((new std::string("get_frame_texture"))->c_str())
			.fun<static_cast<void (AnimatedTexture::*)(int32_t, double)>(&AnimatedTexture::set_frame_duration)>((new std::string("set_frame_duration"))->c_str())
			.fun<static_cast<double (AnimatedTexture::*)(int32_t) const>(&AnimatedTexture::get_frame_duration)>((new std::string("get_frame_duration"))->c_str());
}