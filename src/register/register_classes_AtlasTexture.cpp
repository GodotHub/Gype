#include <godot_cpp/classes/atlas_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/texture2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AtlasTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AtlasTexture>("AtlasTexture")
            .constructor<>()
            .base<Texture2D>()
            .property<static_cast<Ref<Texture2D>(AtlasTexture::*)()const>(&AtlasTexture::get_atlas),static_cast<void(AtlasTexture::*)(const Ref<Texture2D> &)>(&AtlasTexture::set_atlas)>("atlas")
            .property<static_cast<Rect2(AtlasTexture::*)()const>(&AtlasTexture::get_region),static_cast<void(AtlasTexture::*)(const Rect2 &)>(&AtlasTexture::set_region)>("region")
            .property<static_cast<Rect2(AtlasTexture::*)()const>(&AtlasTexture::get_margin),static_cast<void(AtlasTexture::*)(const Rect2 &)>(&AtlasTexture::set_margin)>("margin")
            .property<static_cast<bool(AtlasTexture::*)()const>(&AtlasTexture::has_filter_clip),static_cast<void(AtlasTexture::*)(bool)>(&AtlasTexture::set_filter_clip)>("filter_clip")
;}