#include <godot_cpp/classes/gradient_texture2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GradientTexture2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GradientTexture2D>("GradientTexture2D")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<Ref<Gradient>(GradientTexture2D::*)()const>(&GradientTexture2D::get_gradient),static_cast<void(GradientTexture2D::*)(const Ref<Gradient> &)>(&GradientTexture2D::set_gradient)>("gradient")
            .property<static_cast<void(GradientTexture2D::*)(int32_t)>(&GradientTexture2D::set_width)>("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<void(GradientTexture2D::*)(int32_t)>(&GradientTexture2D::set_height)>("{'name': 'set_height', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'height', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<bool(GradientTexture2D::*)()const>(&GradientTexture2D::is_using_hdr),static_cast<void(GradientTexture2D::*)(bool)>(&GradientTexture2D::set_use_hdr)>("use_hdr")
            .property<static_cast<GradientTexture2D::Fill(GradientTexture2D::*)()const>(&GradientTexture2D::get_fill),static_cast<void(GradientTexture2D::*)(GradientTexture2D::Fill)>(&GradientTexture2D::set_fill)>("fill")
            .property<static_cast<Vector2(GradientTexture2D::*)()const>(&GradientTexture2D::get_fill_from),static_cast<void(GradientTexture2D::*)(const Vector2 &)>(&GradientTexture2D::set_fill_from)>("fill_from")
            .property<static_cast<Vector2(GradientTexture2D::*)()const>(&GradientTexture2D::get_fill_to),static_cast<void(GradientTexture2D::*)(const Vector2 &)>(&GradientTexture2D::set_fill_to)>("fill_to")
            .property<static_cast<GradientTexture2D::Repeat(GradientTexture2D::*)()const>(&GradientTexture2D::get_repeat),static_cast<void(GradientTexture2D::*)(GradientTexture2D::Repeat)>(&GradientTexture2D::set_repeat)>("repeat")
;    qjs::Value _Fill = context->newObject();
    _Fill["FILL_LINEAR"] = GradientTexture2D::Fill::FILL_LINEAR;
    _Fill["FILL_RADIAL"] = GradientTexture2D::Fill::FILL_RADIAL;
    _Fill["FILL_SQUARE"] = GradientTexture2D::Fill::FILL_SQUARE;
    _module.add("Fill", std::move(_Fill));
    qjs::Value _Repeat = context->newObject();
    _Repeat["REPEAT_NONE"] = GradientTexture2D::Repeat::REPEAT_NONE;
    _Repeat["REPEAT"] = GradientTexture2D::Repeat::REPEAT;
    _Repeat["REPEAT_MIRROR"] = GradientTexture2D::Repeat::REPEAT_MIRROR;
    _module.add("Repeat", std::move(_Repeat));
}