#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/canvas_item_material.hpp>

using namespace godot;

void register_classes_CanvasItemMaterial() {
    qjs::Context::Module &_module = _General;
    _module.class_<CanvasItemMaterial>("CanvasItemMaterial")
           .constructor<>()
           .property<CanvasItemMaterial::get_blend_mode, CanvasItemMaterial::set_blend_mode>("blend_mode")
           .property<CanvasItemMaterial::get_light_mode, CanvasItemMaterial::set_light_mode>("light_mode")
           .property<CanvasItemMaterial::get_particles_animation, CanvasItemMaterial::set_particles_animation>("particles_animation")
           .property<CanvasItemMaterial::get_particles_anim_h_frames, CanvasItemMaterial::set_particles_anim_h_frames>("particles_anim_h_frames")
           .property<CanvasItemMaterial::get_particles_anim_v_frames, CanvasItemMaterial::set_particles_anim_v_frames>("particles_anim_v_frames")
           .property<CanvasItemMaterial::get_particles_anim_loop, CanvasItemMaterial::set_particles_anim_loop>("particles_anim_loop")
;}