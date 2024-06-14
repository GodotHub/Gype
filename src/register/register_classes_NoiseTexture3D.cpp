
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NoiseTexture3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NoiseTexture3D>("NoiseTexture3D")
			.constructor<>()
			.base<Texture3D>()
			.property<static_cast<void (NoiseTexture3D::*)(int32_t)>(&NoiseTexture3D::set_width)>((new std::string("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (NoiseTexture3D::*)(int32_t)>(&NoiseTexture3D::set_height)>((new std::string("{'name': 'set_height', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'height', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<void (NoiseTexture3D::*)(int32_t)>(&NoiseTexture3D::set_depth)>((new std::string("{'name': 'set_depth', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'depth', 'type': 'int', 'meta': 'int32_t'}]}"))->c_str())
			.property<static_cast<bool (NoiseTexture3D::*)() const>(&NoiseTexture3D::get_invert), static_cast<void (NoiseTexture3D::*)(bool)>(&NoiseTexture3D::set_invert)>((new std::string("invert"))->c_str())
			.property<static_cast<bool (NoiseTexture3D::*)()>(&NoiseTexture3D::get_seamless), static_cast<void (NoiseTexture3D::*)(bool)>(&NoiseTexture3D::set_seamless)>((new std::string("seamless"))->c_str())
			.property<static_cast<double (NoiseTexture3D::*)()>(&NoiseTexture3D::get_seamless_blend_skirt), static_cast<void (NoiseTexture3D::*)(double)>(&NoiseTexture3D::set_seamless_blend_skirt)>((new std::string("seamless_blend_skirt"))->c_str())
			.property<static_cast<bool (NoiseTexture3D::*)() const>(&NoiseTexture3D::is_normalized), static_cast<void (NoiseTexture3D::*)(bool)>(&NoiseTexture3D::set_normalize)>((new std::string("normalize"))->c_str())
			.property<static_cast<Ref<Gradient> (NoiseTexture3D::*)() const>(&NoiseTexture3D::get_color_ramp), static_cast<void (NoiseTexture3D::*)(const Ref<Gradient> &)>(&NoiseTexture3D::set_color_ramp)>((new std::string("color_ramp"))->c_str())
			.property<static_cast<Ref<Noise> (NoiseTexture3D::*)()>(&NoiseTexture3D::get_noise), static_cast<void (NoiseTexture3D::*)(const Ref<Noise> &)>(&NoiseTexture3D::set_noise)>((new std::string("noise"))->c_str());
}