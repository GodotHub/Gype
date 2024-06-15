#include <godot_cpp/classes/gradient_texture1d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GradientTexture1D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GradientTexture1D>("GradientTexture1D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<Ref<Gradient>(GradientTexture1D::*)()const>(&GradientTexture1D::get_gradient),static_cast<void(GradientTexture1D::*)(const Ref<Gradient> &)>(&GradientTexture1D::set_gradient)>("gradient")
            .property<static_cast<void(GradientTexture1D::*)(int32_t)>(&GradientTexture1D::set_width)>("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<bool(GradientTexture1D::*)()const>(&GradientTexture1D::is_using_hdr),static_cast<void(GradientTexture1D::*)(bool)>(&GradientTexture1D::set_use_hdr)>("use_hdr")
;}