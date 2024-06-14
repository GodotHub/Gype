
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Camera3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Camera3D>("Camera3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Camera3D::KeepAspect (Camera3D::*)() const>(&Camera3D::get_keep_aspect_mode), static_cast<void (Camera3D::*)(Camera3D::KeepAspect)>(&Camera3D::set_keep_aspect_mode)>((new std::string("keep_aspect"))->c_str())
			.property<static_cast<uint32_t (Camera3D::*)() const>(&Camera3D::get_cull_mask), static_cast<void (Camera3D::*)(uint32_t)>(&Camera3D::set_cull_mask)>((new std::string("cull_mask"))->c_str())
			.property<static_cast<Ref<Environment> (Camera3D::*)() const>(&Camera3D::get_environment), static_cast<void (Camera3D::*)(const Ref<Environment> &)>(&Camera3D::set_environment)>((new std::string("environment"))->c_str())
			.property<static_cast<Ref<CameraAttributes> (Camera3D::*)() const>(&Camera3D::get_attributes), static_cast<void (Camera3D::*)(const Ref<CameraAttributes> &)>(&Camera3D::set_attributes)>((new std::string("attributes"))->c_str())
			.property<static_cast<Ref<Compositor> (Camera3D::*)() const>(&Camera3D::get_compositor), static_cast<void (Camera3D::*)(const Ref<Compositor> &)>(&Camera3D::set_compositor)>((new std::string("compositor"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_h_offset), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_h_offset)>((new std::string("h_offset"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_v_offset), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_v_offset)>((new std::string("v_offset"))->c_str())
			.property<static_cast<Camera3D::DopplerTracking (Camera3D::*)() const>(&Camera3D::get_doppler_tracking), static_cast<void (Camera3D::*)(Camera3D::DopplerTracking)>(&Camera3D::set_doppler_tracking)>((new std::string("doppler_tracking"))->c_str())
			.property<static_cast<Camera3D::ProjectionType (Camera3D::*)() const>(&Camera3D::get_projection), static_cast<void (Camera3D::*)(Camera3D::ProjectionType)>(&Camera3D::set_projection)>((new std::string("projection"))->c_str())
			.property<static_cast<bool (Camera3D::*)() const>(&Camera3D::is_current), static_cast<void (Camera3D::*)(bool)>(&Camera3D::set_current)>((new std::string("current"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_fov), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_fov)>((new std::string("fov"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_size), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Vector2 (Camera3D::*)() const>(&Camera3D::get_frustum_offset), static_cast<void (Camera3D::*)(const Vector2 &)>(&Camera3D::set_frustum_offset)>((new std::string("frustum_offset"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_near), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_near)>((new std::string("near"))->c_str())
			.property<static_cast<double (Camera3D::*)() const>(&Camera3D::get_far), static_cast<void (Camera3D::*)(double)>(&Camera3D::set_far)>((new std::string("far"))->c_str())
			.fun<static_cast<Vector3 (Camera3D::*)(const Vector2 &) const>(&Camera3D::project_ray_normal)>((new std::string("project_ray_normal"))->c_str())
			.fun<static_cast<Vector3 (Camera3D::*)(const Vector2 &) const>(&Camera3D::project_local_ray_normal)>((new std::string("project_local_ray_normal"))->c_str())
			.fun<static_cast<Vector3 (Camera3D::*)(const Vector2 &) const>(&Camera3D::project_ray_origin)>((new std::string("project_ray_origin"))->c_str())
			.fun<static_cast<Vector2 (Camera3D::*)(const Vector3 &) const>(&Camera3D::unproject_position)>((new std::string("unproject_position"))->c_str())
			.fun<static_cast<bool (Camera3D::*)(const Vector3 &) const>(&Camera3D::is_position_behind)>((new std::string("is_position_behind"))->c_str())
			.fun<static_cast<Vector3 (Camera3D::*)(const Vector2 &, double) const>(&Camera3D::project_position)>((new std::string("project_position"))->c_str())
			.fun<static_cast<void (Camera3D::*)(double, double, double)>(&Camera3D::set_perspective)>((new std::string("set_perspective"))->c_str())
			.fun<static_cast<void (Camera3D::*)(double, double, double)>(&Camera3D::set_orthogonal)>((new std::string("set_orthogonal"))->c_str())
			.fun<static_cast<void (Camera3D::*)(double, const Vector2 &, double, double)>(&Camera3D::set_frustum)>((new std::string("set_frustum"))->c_str())
			.fun<static_cast<void (Camera3D::*)()>(&Camera3D::make_current)>((new std::string("make_current"))->c_str())
			.fun<static_cast<void (Camera3D::*)(bool)>(&Camera3D::clear_current)>((new std::string("clear_current"))->c_str())
			.fun<static_cast<Transform3D (Camera3D::*)() const>(&Camera3D::get_camera_transform)>((new std::string("get_camera_transform"))->c_str())
			.fun<static_cast<Projection (Camera3D::*)() const>(&Camera3D::get_camera_projection)>((new std::string("get_camera_projection"))->c_str())
			.fun<static_cast<TypedArray<Plane> (Camera3D::*)() const>(&Camera3D::get_frustum)>((new std::string("get_frustum"))->c_str())
			.fun<static_cast<bool (Camera3D::*)(const Vector3 &) const>(&Camera3D::is_position_in_frustum)>((new std::string("is_position_in_frustum"))->c_str())
			.fun<static_cast<RID (Camera3D::*)() const>(&Camera3D::get_camera_rid)>((new std::string("get_camera_rid"))->c_str())
			.fun<static_cast<RID (Camera3D::*)()>(&Camera3D::get_pyramid_shape_rid)>((new std::string("get_pyramid_shape_rid"))->c_str())
			.fun<static_cast<void (Camera3D::*)(int32_t, bool)>(&Camera3D::set_cull_mask_value)>((new std::string("set_cull_mask_value"))->c_str())
			.fun<static_cast<bool (Camera3D::*)(int32_t) const>(&Camera3D::get_cull_mask_value)>((new std::string("get_cull_mask_value"))->c_str());
	qjs::Value _ProjectionType = context->newObject();
	_ProjectionType[(new std::string("PROJECTION_PERSPECTIVE"))->c_str()] = Camera3D::ProjectionType::PROJECTION_PERSPECTIVE;
	_ProjectionType[(new std::string("PROJECTION_ORTHOGONAL"))->c_str()] = Camera3D::ProjectionType::PROJECTION_ORTHOGONAL;
	_ProjectionType[(new std::string("PROJECTION_FRUSTUM"))->c_str()] = Camera3D::ProjectionType::PROJECTION_FRUSTUM;
	_module.add("ProjectionType", std::move(_ProjectionType));
	qjs::Value _KeepAspect = context->newObject();
	_KeepAspect[(new std::string("KEEP_WIDTH"))->c_str()] = Camera3D::KeepAspect::KEEP_WIDTH;
	_KeepAspect[(new std::string("KEEP_HEIGHT"))->c_str()] = Camera3D::KeepAspect::KEEP_HEIGHT;
	_module.add("KeepAspect", std::move(_KeepAspect));
	qjs::Value _DopplerTracking = context->newObject();
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_DISABLED"))->c_str()] = Camera3D::DopplerTracking::DOPPLER_TRACKING_DISABLED;
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_IDLE_STEP"))->c_str()] = Camera3D::DopplerTracking::DOPPLER_TRACKING_IDLE_STEP;
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_PHYSICS_STEP"))->c_str()] = Camera3D::DopplerTracking::DOPPLER_TRACKING_PHYSICS_STEP;
	_module.add("DopplerTracking", std::move(_DopplerTracking));
}