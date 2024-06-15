#include <godot_cpp/classes/curve_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CurveTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CurveTexture>("CurveTexture")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<void(CurveTexture::*)(int32_t)>(&CurveTexture::set_width)>("{'name': 'set_width', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 1286410249, 'arguments': [{'name': 'width', 'type': 'int', 'meta': 'int32_t'}]}")
            .property<static_cast<CurveTexture::TextureMode(CurveTexture::*)()const>(&CurveTexture::get_texture_mode),static_cast<void(CurveTexture::*)(CurveTexture::TextureMode)>(&CurveTexture::set_texture_mode)>("texture_mode")
            .property<static_cast<Ref<Curve>(CurveTexture::*)()const>(&CurveTexture::get_curve),static_cast<void(CurveTexture::*)(const Ref<Curve> &)>(&CurveTexture::set_curve)>("curve")
;    qjs::Value _TextureMode = context->newObject();
    _TextureMode["TEXTURE_MODE_RGB"] = CurveTexture::TextureMode::TEXTURE_MODE_RGB;
    _TextureMode["TEXTURE_MODE_RED"] = CurveTexture::TextureMode::TEXTURE_MODE_RED;
    _module.add("TextureMode", std::move(_TextureMode));
}