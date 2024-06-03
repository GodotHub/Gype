#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Camera3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Camera3D>("Camera3D")
           .constructor<>()
           .property<Camera3D::get_keep_aspect_mode, Camera3D::set_keep_aspect_mode>("keep_aspect")
           .property<Camera3D::get_cull_mask, Camera3D::set_cull_mask>("cull_mask")
           .property<Camera3D::get_environment, Camera3D::set_environment>("environment")
           .property<Camera3D::get_attributes, Camera3D::set_attributes>("attributes")
           .property<Camera3D::get_h_offset, Camera3D::set_h_offset>("h_offset")
           .property<Camera3D::get_v_offset, Camera3D::set_v_offset>("v_offset")
           .property<Camera3D::get_doppler_tracking, Camera3D::set_doppler_tracking>("doppler_tracking")
           .property<Camera3D::get_projection, Camera3D::set_projection>("projection")
           .property<Camera3D::is_current, Camera3D::set_current>("current")
           .property<Camera3D::get_fov, Camera3D::set_fov>("fov")
           .property<Camera3D::get_size, Camera3D::set_size>("size")
           .property<Camera3D::get_frustum_offset, Camera3D::set_frustum_offset>("frustum_offset")
           .property<Camera3D::get_near, Camera3D::set_near>("near")
           .property<Camera3D::get_far, Camera3D::set_far>("far")
		   .fun<static_cast<Vector3(Camera3D::*)(const Vector2 &)const>(&Camera3D::project_ray_normal)>("project_ray_normal")
		   .fun<static_cast<Vector3(Camera3D::*)(const Vector2 &)const>(&Camera3D::project_local_ray_normal)>("project_local_ray_normal")
		   .fun<static_cast<Vector3(Camera3D::*)(const Vector2 &)const>(&Camera3D::project_ray_origin)>("project_ray_origin")
		   .fun<static_cast<Vector2(Camera3D::*)(const Vector3 &)const>(&Camera3D::unproject_position)>("unproject_position")
		   .fun<static_cast<bool(Camera3D::*)(const Vector3 &)const>(&Camera3D::is_position_behind)>("is_position_behind")
		   .fun<static_cast<Vector3(Camera3D::*)(const Vector2 &,double)const>(&Camera3D::project_position)>("project_position")
		   .fun<static_cast<void(Camera3D::*)(double,double,double)>(&Camera3D::set_perspective)>("set_perspective")
		   .fun<static_cast<void(Camera3D::*)(double,double,double)>(&Camera3D::set_orthogonal)>("set_orthogonal")
		   .fun<static_cast<void(Camera3D::*)(double,const Vector2 &,double,double)>(&Camera3D::set_frustum)>("set_frustum")
		   .fun<static_cast<void(Camera3D::*)()>(&Camera3D::make_current)>("make_current")
		   .fun<static_cast<void(Camera3D::*)(bool)>(&Camera3D::clear_current)>("clear_current")
		   .fun<static_cast<Transform3D(Camera3D::*)()const>(&Camera3D::get_camera_transform)>("get_camera_transform")
		   .fun<static_cast<Projection(Camera3D::*)()const>(&Camera3D::get_camera_projection)>("get_camera_projection")
		   .fun<static_cast<TypedArray<Plane>(Camera3D::*)()const>(&Camera3D::get_frustum)>("get_frustum")
		   .fun<static_cast<bool(Camera3D::*)(const Vector3 &)const>(&Camera3D::is_position_in_frustum)>("is_position_in_frustum")
		   .fun<static_cast<RID(Camera3D::*)()const>(&Camera3D::get_camera_rid)>("get_camera_rid")
		   .fun<static_cast<RID(Camera3D::*)()>(&Camera3D::get_pyramid_shape_rid)>("get_pyramid_shape_rid")
		   .fun<static_cast<void(Camera3D::*)(int32_t,bool)>(&Camera3D::set_cull_mask_value)>("set_cull_mask_value")
		   .fun<static_cast<bool(Camera3D::*)(int32_t)const>(&Camera3D::get_cull_mask_value)>("get_cull_mask_value")
;}