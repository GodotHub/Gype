#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Noise() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Noise>("Noise")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<double(Noise::*)(double)const>(&Noise::get_noise_1d)>("get_noise_1d")
            .fun<static_cast<double(Noise::*)(double,double)const>(&Noise::get_noise_2d)>("get_noise_2d")
            .fun<static_cast<double(Noise::*)(const Vector2 &)const>(&Noise::get_noise_2dv)>("get_noise_2dv")
            .fun<static_cast<double(Noise::*)(double,double,double)const>(&Noise::get_noise_3d)>("get_noise_3d")
            .fun<static_cast<double(Noise::*)(const Vector3 &)const>(&Noise::get_noise_3dv)>("get_noise_3dv")
            .fun<static_cast<Ref<Image>(Noise::*)(int32_t,int32_t,bool,bool,bool)const>(&Noise::get_image)>("get_image")
            .fun<static_cast<Ref<Image>(Noise::*)(int32_t,int32_t,bool,bool,double,bool)const>(&Noise::get_seamless_image)>("get_seamless_image")
            .fun<static_cast<TypedArray<Image>(Noise::*)(int32_t,int32_t,int32_t,bool,bool)const>(&Noise::get_image_3d)>("get_image_3d")
            .fun<static_cast<TypedArray<Image>(Noise::*)(int32_t,int32_t,int32_t,bool,double,bool)const>(&Noise::get_seamless_image_3d)>("get_seamless_image_3d")
;}