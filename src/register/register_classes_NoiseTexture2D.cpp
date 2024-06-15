#include <godot_cpp/classes/noise_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NoiseTexture2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NoiseTexture2D>("NoiseTexture2D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<void(NoiseTexture2D::*)(int32_t)>(&NoiseTexture2D::set_width)>("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(NoiseTexture2D::*)(int32_t)>(&NoiseTexture2D::set_height)>("{'name': 'set_height', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'height', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<bool(NoiseTexture2D::*)()const>(&NoiseTexture2D::get_invert),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_invert)>("invert")
            .property<static_cast<bool(NoiseTexture2D::*)()const>(&NoiseTexture2D::is_in_3d_space),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_in_3d_space)>("in_3d_space")
            .property<static_cast<bool(NoiseTexture2D::*)()const>(&NoiseTexture2D::is_generating_mipmaps),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_generate_mipmaps)>("generate_mipmaps")
            .property<static_cast<bool(NoiseTexture2D::*)()>(&NoiseTexture2D::get_seamless),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_seamless)>("seamless")
            .property<static_cast<double(NoiseTexture2D::*)()>(&NoiseTexture2D::get_seamless_blend_skirt),static_cast<void(NoiseTexture2D::*)(double)>(&NoiseTexture2D::set_seamless_blend_skirt)>("seamless_blend_skirt")
            .property<static_cast<bool(NoiseTexture2D::*)()>(&NoiseTexture2D::is_normal_map),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_as_normal_map)>("as_normal_map")
            .property<static_cast<double(NoiseTexture2D::*)()>(&NoiseTexture2D::get_bump_strength),static_cast<void(NoiseTexture2D::*)(double)>(&NoiseTexture2D::set_bump_strength)>("bump_strength")
            .property<static_cast<bool(NoiseTexture2D::*)()const>(&NoiseTexture2D::is_normalized),static_cast<void(NoiseTexture2D::*)(bool)>(&NoiseTexture2D::set_normalize)>("normalize")
            .property<static_cast<Ref<Gradient>(NoiseTexture2D::*)()const>(&NoiseTexture2D::get_color_ramp),static_cast<void(NoiseTexture2D::*)(const Ref<Gradient> &)>(&NoiseTexture2D::set_color_ramp)>("color_ramp")
            .property<static_cast<Ref<Noise>(NoiseTexture2D::*)()>(&NoiseTexture2D::get_noise),static_cast<void(NoiseTexture2D::*)(const Ref<Noise> &)>(&NoiseTexture2D::set_noise)>("noise")
;}