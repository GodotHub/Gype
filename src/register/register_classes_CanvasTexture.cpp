#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/canvas_texture.hpp>

using namespace godot;

void register_classes_CanvasTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<CanvasTexture>("CanvasTexture")
           .constructor<>()
           .property<CanvasTexture::get_diffuse_texture, CanvasTexture::set_diffuse_texture>("diffuse_texture")
           .property<CanvasTexture::get_normal_texture, CanvasTexture::set_normal_texture>("normal_texture")
           .property<CanvasTexture::get_specular_texture, CanvasTexture::set_specular_texture>("specular_texture")
           .property<CanvasTexture::get_specular_color, CanvasTexture::set_specular_color>("specular_color")
           .property<CanvasTexture::get_specular_shininess, CanvasTexture::set_specular_shininess>("specular_shininess")
           .property<CanvasTexture::get_texture_filter, CanvasTexture::set_texture_filter>("texture_filter")
           .property<CanvasTexture::get_texture_repeat, CanvasTexture::set_texture_repeat>("texture_repeat")
;}