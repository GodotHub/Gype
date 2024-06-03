#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/viewport_texture.hpp>

using namespace godot;

void register_classes_ViewportTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<ViewportTexture>("ViewportTexture")
           .constructor<>()
           .property<ViewportTexture::get_viewport_path_in_scene, ViewportTexture::set_viewport_path_in_scene>("viewport_path")
;}