#include <godot_cpp/classes/canvas_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CanvasTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CanvasTexture>("CanvasTexture")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<Ref<Texture2D>(CanvasTexture::*)()const>(&CanvasTexture::get_diffuse_texture),static_cast<void(CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_diffuse_texture)>("diffuse_texture")
            .property<static_cast<Ref<Texture2D>(CanvasTexture::*)()const>(&CanvasTexture::get_normal_texture),static_cast<void(CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_normal_texture)>("normal_texture")
            .property<static_cast<Ref<Texture2D>(CanvasTexture::*)()const>(&CanvasTexture::get_specular_texture),static_cast<void(CanvasTexture::*)(const Ref<Texture2D> &)>(&CanvasTexture::set_specular_texture)>("specular_texture")
            .property<static_cast<Color(CanvasTexture::*)()const>(&CanvasTexture::get_specular_color),static_cast<void(CanvasTexture::*)(const Color &)>(&CanvasTexture::set_specular_color)>("specular_color")
            .property<static_cast<double(CanvasTexture::*)()const>(&CanvasTexture::get_specular_shininess),static_cast<void(CanvasTexture::*)(double)>(&CanvasTexture::set_specular_shininess)>("specular_shininess")
            .property<static_cast<CanvasItem::TextureFilter(CanvasTexture::*)()const>(&CanvasTexture::get_texture_filter),static_cast<void(CanvasTexture::*)(CanvasItem::TextureFilter)>(&CanvasTexture::set_texture_filter)>("texture_filter")
            .property<static_cast<CanvasItem::TextureRepeat(CanvasTexture::*)()const>(&CanvasTexture::get_texture_repeat),static_cast<void(CanvasTexture::*)(CanvasItem::TextureRepeat)>(&CanvasTexture::set_texture_repeat)>("texture_repeat")
;}