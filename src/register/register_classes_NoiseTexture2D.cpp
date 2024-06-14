
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NoiseTexture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NoiseTexture2D>("NoiseTexture2D")
			.constructor<>()
			.base<Texture2D>()
			.property<static_cast<void (NoiseTexture2D::*)(int32_t)>(&NoiseTexture2D::set_width)>((new std::string("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (NoiseTexture2D::*)(int32_t)>(&NoiseTexture2D::set_height)>((new std::string("{'name': 'set_height', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'height', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)() const>(&NoiseTexture2D::get_invert), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_invert)>((new std::string("invert"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)() const>(&NoiseTexture2D::is_in_3d_space), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_in_3d_space)>((new std::string("in_3d_space"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)() const>(&NoiseTexture2D::is_generating_mipmaps), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_generate_mipmaps)>((new std::string("generate_mipmaps"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)()>(&NoiseTexture2D::get_seamless), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_seamless)>((new std::string("seamless"))->c_str())
			.property<static_cast<double (NoiseTexture2D::*)()>(&NoiseTexture2D::get_seamless_blend_skirt), static_cast<void (NoiseTexture2D::*)(double)>(&NoiseTexture2D::set_seamless_blend_skirt)>((new std::string("seamless_blend_skirt"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)()>(&NoiseTexture2D::is_normal_map), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_as_normal_map)>((new std::string("as_normal_map"))->c_str())
			.property<static_cast<double (NoiseTexture2D::*)()>(&NoiseTexture2D::get_bump_strength), static_cast<void (NoiseTexture2D::*)(double)>(&NoiseTexture2D::set_bump_strength)>((new std::string("bump_strength"))->c_str())
			.property<static_cast<bool (NoiseTexture2D::*)() const>(&NoiseTexture2D::is_normalized), static_cast<void (NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_normalize)>((new std::string("normalize"))->c_str())
			.property<static_cast<Ref<Gradient> (NoiseTexture2D::*)() const>(&NoiseTexture2D::get_color_ramp), static_cast<void (NoiseTexture2D::*)(const Ref<Gradient> &)>(&NoiseTexture2D::set_color_ramp)>((new std::string("color_ramp"))->c_str())
			.property<static_cast<Ref<Noise> (NoiseTexture2D::*)()>(&NoiseTexture2D::get_noise), static_cast<void (NoiseTexture2D::*)(const Ref<Noise> &)>(&NoiseTexture2D::set_noise)>((new std::string("noise"))->c_str());
}