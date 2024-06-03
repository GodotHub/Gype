#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_GPUParticles2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<GPUParticles2D>("GPUParticles2D")
           .constructor<>()
           .property<GPUParticles2D::is_emitting, GPUParticles2D::set_emitting>("emitting")
           .property<GPUParticles2D::get_amount, GPUParticles2D::set_amount>("amount")
           .property<GPUParticles2D::get_amount_ratio, GPUParticles2D::set_amount_ratio>("amount_ratio")
           .property<GPUParticles2D::get_sub_emitter, GPUParticles2D::set_sub_emitter>("sub_emitter")
           .property<GPUParticles2D::get_process_material, GPUParticles2D::set_process_material>("process_material")
           .property<GPUParticles2D::get_texture, GPUParticles2D::set_texture>("texture")
           .property<GPUParticles2D::get_lifetime, GPUParticles2D::set_lifetime>("lifetime")
           .property<GPUParticles2D::get_one_shot, GPUParticles2D::set_one_shot>("one_shot")
           .property<GPUParticles2D::get_pre_process_time, GPUParticles2D::set_pre_process_time>("preprocess")
           .property<GPUParticles2D::get_speed_scale, GPUParticles2D::set_speed_scale>("speed_scale")
           .property<GPUParticles2D::get_explosiveness_ratio, GPUParticles2D::set_explosiveness_ratio>("explosiveness")
           .property<GPUParticles2D::get_randomness_ratio, GPUParticles2D::set_randomness_ratio>("randomness")
           .property<GPUParticles2D::get_fixed_fps, GPUParticles2D::set_fixed_fps>("fixed_fps")
           .property<GPUParticles2D::get_interpolate, GPUParticles2D::set_interpolate>("interpolate")
           .property<GPUParticles2D::get_fractional_delta, GPUParticles2D::set_fractional_delta>("fract_delta")
           .property<GPUParticles2D::get_interp_to_end, GPUParticles2D::set_interp_to_end>("interp_to_end")
           .property<GPUParticles2D::get_collision_base_size, GPUParticles2D::set_collision_base_size>("collision_base_size")
           .property<GPUParticles2D::get_visibility_rect, GPUParticles2D::set_visibility_rect>("visibility_rect")
           .property<GPUParticles2D::get_use_local_coordinates, GPUParticles2D::set_use_local_coordinates>("local_coords")
           .property<GPUParticles2D::get_draw_order, GPUParticles2D::set_draw_order>("draw_order")
           .property<GPUParticles2D::is_trail_enabled, GPUParticles2D::set_trail_enabled>("trail_enabled")
           .property<GPUParticles2D::get_trail_lifetime, GPUParticles2D::set_trail_lifetime>("trail_lifetime")
           .property<GPUParticles2D::get_trail_sections, GPUParticles2D::set_trail_sections>("trail_sections")
           .property<GPUParticles2D::get_trail_section_subdivisions, GPUParticles2D::set_trail_section_subdivisions>("trail_section_subdivisions")
		   .fun<static_cast<Rect2(GPUParticles2D::*)()const>(&GPUParticles2D::capture_rect)>("capture_rect")
		   .fun<static_cast<void(GPUParticles2D::*)()>(&GPUParticles2D::restart)>("restart")
		   .fun<static_cast<void(GPUParticles2D::*)(const Transform2D &,const Vector2 &,const Color &,const Color &,uint32_t)>(&GPUParticles2D::emit_particle)>("emit_particle")
		   .fun<static_cast<void(GPUParticles2D::*)(Node *)>(&GPUParticles2D::convert_from_particles)>("convert_from_particles")
;}