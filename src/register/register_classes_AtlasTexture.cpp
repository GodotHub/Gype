#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/atlas_texture.hpp>

using namespace godot;

void register_classes_AtlasTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<AtlasTexture>("AtlasTexture")
           .constructor<>()
           .property<AtlasTexture::get_atlas, AtlasTexture::set_atlas>("atlas")
           .property<AtlasTexture::get_region, AtlasTexture::set_region>("region")
           .property<AtlasTexture::get_margin, AtlasTexture::set_margin>("margin")
           .property<AtlasTexture::has_filter_clip, AtlasTexture::set_filter_clip>("filter_clip")
;}