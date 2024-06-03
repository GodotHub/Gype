#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gpu_particles3d.hpp>

using namespace godot;

void register_classes_GPUParticles3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticles3D>("GPUParticles3D")
           .constructor<>()
           .property<GPUParticles3D::is_emitting, GPUParticles3D::set_emitting>("emitting")
           .property<GPUParticles3D::get_amount, GPUParticles3D::set_amount>("amount")
           .property<GPUParticles3D::get_amount_ratio, GPUParticles3D::set_amount_ratio>("amount_ratio")
           .property<GPUParticles3D::get_sub_emitter, GPUParticles3D::set_sub_emitter>("sub_emitter")
           .property<GPUParticles3D::get_lifetime, GPUParticles3D::set_lifetime>("lifetime")
           .property<GPUParticles3D::get_interp_to_end, GPUParticles3D::set_interp_to_end>("interp_to_end")
           .property<GPUParticles3D::get_one_shot, GPUParticles3D::set_one_shot>("one_shot")
           .property<GPUParticles3D::get_pre_process_time, GPUParticles3D::set_pre_process_time>("preprocess")
           .property<GPUParticles3D::get_speed_scale, GPUParticles3D::set_speed_scale>("speed_scale")
           .property<GPUParticles3D::get_explosiveness_ratio, GPUParticles3D::set_explosiveness_ratio>("explosiveness")
           .property<GPUParticles3D::get_randomness_ratio, GPUParticles3D::set_randomness_ratio>("randomness")
           .property<GPUParticles3D::get_fixed_fps, GPUParticles3D::set_fixed_fps>("fixed_fps")
           .property<GPUParticles3D::get_interpolate, GPUParticles3D::set_interpolate>("interpolate")
           .property<GPUParticles3D::get_fractional_delta, GPUParticles3D::set_fractional_delta>("fract_delta")
           .property<GPUParticles3D::get_collision_base_size, GPUParticles3D::set_collision_base_size>("collision_base_size")
           .property<GPUParticles3D::get_visibility_aabb, GPUParticles3D::set_visibility_aabb>("visibility_aabb")
           .property<GPUParticles3D::get_use_local_coordinates, GPUParticles3D::set_use_local_coordinates>("local_coords")
           .property<GPUParticles3D::get_draw_order, GPUParticles3D::set_draw_order>("draw_order")
           .property<GPUParticles3D::get_transform_align, GPUParticles3D::set_transform_align>("transform_align")
           .property<GPUParticles3D::is_trail_enabled, GPUParticles3D::set_trail_enabled>("trail_enabled")
           .property<GPUParticles3D::get_trail_lifetime, GPUParticles3D::set_trail_lifetime>("trail_lifetime")
           .property<GPUParticles3D::get_process_material, GPUParticles3D::set_process_material>("process_material")
           .property<GPUParticles3D::get_draw_passes, GPUParticles3D::set_draw_passes>("draw_passes")
           .property<GPUParticles3D::get_draw_pass_mesh, GPUParticles3D::set_draw_pass_mesh>("draw_pass_1")
           .property<GPUParticles3D::get_draw_pass_mesh, GPUParticles3D::set_draw_pass_mesh>("draw_pass_2")
           .property<GPUParticles3D::get_draw_pass_mesh, GPUParticles3D::set_draw_pass_mesh>("draw_pass_3")
           .property<GPUParticles3D::get_draw_pass_mesh, GPUParticles3D::set_draw_pass_mesh>("draw_pass_4")
           .property<GPUParticles3D::get_skin, GPUParticles3D::set_skin>("draw_skin")
		    .fun<static_cast<void(GPUParticles3D::*)()>(&GPUParticles3D::restart)>("restart")
		    .fun<static_cast<AABB(GPUParticles3D::*)()const>(&GPUParticles3D::capture_aabb)>("capture_aabb")
		    .fun<static_cast<void(GPUParticles3D::*)(const Transform3D &,const Vector3 &,const Color &,const Color &,uint32_t)>(&GPUParticles3D::emit_particle)>("emit_particle")
		    .fun<static_cast<void(GPUParticles3D::*)(Node *)>(&GPUParticles3D::convert_from_particles)>("convert_from_particles")
;}