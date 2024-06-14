
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Noise() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Noise>("Noise")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<double (Noise::*)(double) const>(&Noise::get_noise_1d)>((new std::string("get_noise_1d"))->c_str())
			.fun<static_cast<double (Noise::*)(double, double) const>(&Noise::get_noise_2d)>((new std::string("get_noise_2d"))->c_str())
			.fun<static_cast<double (Noise::*)(const Vector2 &) const>(&Noise::get_noise_2dv)>((new std::string("get_noise_2dv"))->c_str())
			.fun<static_cast<double (Noise::*)(double, double, double) const>(&Noise::get_noise_3d)>((new std::string("get_noise_3d"))->c_str())
			.fun<static_cast<double (Noise::*)(const Vector3 &) const>(&Noise::get_noise_3dv)>((new std::string("get_noise_3dv"))->c_str())
			.fun<static_cast<Ref<Image> (Noise::*)(int32_t, int32_t, bool, bool, bool) const>(&Noise::get_image)>((new std::string("get_image"))->c_str())
			.fun<static_cast<Ref<Image> (Noise::*)(int32_t, int32_t, bool, bool, double, bool) const>(&Noise::get_seamless_image)>((new std::string("get_seamless_image"))->c_str())
			.fun<static_cast<TypedArray<Image> (Noise::*)(int32_t, int32_t, int32_t, bool, bool) const>(&Noise::get_image_3d)>((new std::string("get_image_3d"))->c_str())
			.fun<static_cast<TypedArray<Image> (Noise::*)(int32_t, int32_t, int32_t, bool, double, bool) const>(&Noise::get_seamless_image_3d)>((new std::string("get_seamless_image_3d"))->c_str());
}