#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Sprite3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Sprite3D>("Sprite3D")
           .constructor<>()
           .property<Sprite3D::get_texture, Sprite3D::set_texture>("texture")
           .property<Sprite3D::get_hframes, Sprite3D::set_hframes>("hframes")
           .property<Sprite3D::get_vframes, Sprite3D::set_vframes>("vframes")
           .property<Sprite3D::get_frame, Sprite3D::set_frame>("frame")
           .property<Sprite3D::get_frame_coords, Sprite3D::set_frame_coords>("frame_coords")
           .property<Sprite3D::is_region_enabled, Sprite3D::set_region_enabled>("region_enabled")
           .property<Sprite3D::get_region_rect, Sprite3D::set_region_rect>("region_rect")
;}