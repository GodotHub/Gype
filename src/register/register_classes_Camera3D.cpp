#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/projection.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/compositor.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Camera3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Camera3D>("Camera3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<Camera3D::KeepAspect(Camera3D::*)()const>(&Camera3D::get_keep_aspect_mode),static_cast<void(Camera3D::*)(Camera3D::KeepAspect)>(&Camera3D::set_keep_aspect_mode)>("keep_aspect")
            .property<static_cast<uint32_t(Camera3D::*)()const>(&Camera3D::get_cull_mask),static_cast<void(Camera3D::*)(uint32_t)>(&Camera3D::set_cull_mask)>("cull_mask")
            .property<static_cast<Ref<Environment>(Camera3D::*)()const>(&Camera3D::get_environment),static_cast<void(Camera3D::*)(const Ref<Environment> &)>(&Camera3D::set_environment)>("environment")
            .property<static_cast<Ref<CameraAttributes>(Camera3D::*)()const>(&Camera3D::get_attributes),static_cast<void(Camera3D::*)(const Ref<CameraAttributes> &)>(&Camera3D::set_attributes)>("attributes")
            .property<static_cast<Ref<Compositor>(Camera3D::*)()const>(&Camera3D::get_compositor),static_cast<void(Camera3D::*)(const Ref<Compositor> &)>(&Camera3D::set_compositor)>("compositor")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_h_offset),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_h_offset)>("h_offset")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_v_offset),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_v_offset)>("v_offset")
            .property<static_cast<Camera3D::DopplerTracking(Camera3D::*)()const>(&Camera3D::get_doppler_tracking),static_cast<void(Camera3D::*)(Camera3D::DopplerTracking)>(&Camera3D::set_doppler_tracking)>("doppler_tracking")
            .property<static_cast<Camera3D::ProjectionType(Camera3D::*)()const>(&Camera3D::get_projection),static_cast<void(Camera3D::*)(Camera3D::ProjectionType)>(&Camera3D::set_projection)>("projection")
            .property<static_cast<bool(Camera3D::*)()const>(&Camera3D::is_current),static_cast<void(Camera3D::*)(bool)>(&Camera3D::set_current)>("current")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_fov),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_fov)>("fov")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_size),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_size)>("size")
            .property<static_cast<Vector2(Camera3D::*)()const>(&Camera3D::get_frustum_offset),static_cast<void(Camera3D::*)(const Vector2 &)>(&Camera3D::set_frustum_offset)>("frustum_offset")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_near),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_near)>("near")
            .property<static_cast<double(Camera3D::*)()const>(&Camera3D::get_far),static_cast<void(Camera3D::*)(double)>(&Camera3D::set_far)>("far")
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
;    qjs::Value _ProjectionType = context->newObject();
    _ProjectionType["PROJECTION_PERSPECTIVE"] = Camera3D::ProjectionType::PROJECTION_PERSPECTIVE;
    _ProjectionType["PROJECTION_ORTHOGONAL"] = Camera3D::ProjectionType::PROJECTION_ORTHOGONAL;
    _ProjectionType["PROJECTION_FRUSTUM"] = Camera3D::ProjectionType::PROJECTION_FRUSTUM;
    _module.add("ProjectionType", std::move(_ProjectionType));
    qjs::Value _KeepAspect = context->newObject();
    _KeepAspect["KEEP_WIDTH"] = Camera3D::KeepAspect::KEEP_WIDTH;
    _KeepAspect["KEEP_HEIGHT"] = Camera3D::KeepAspect::KEEP_HEIGHT;
    _module.add("KeepAspect", std::move(_KeepAspect));
    qjs::Value _DopplerTracking = context->newObject();
    _DopplerTracking["DOPPLER_TRACKING_DISABLED"] = Camera3D::DopplerTracking::DOPPLER_TRACKING_DISABLED;
    _DopplerTracking["DOPPLER_TRACKING_IDLE_STEP"] = Camera3D::DopplerTracking::DOPPLER_TRACKING_IDLE_STEP;
    _DopplerTracking["DOPPLER_TRACKING_PHYSICS_STEP"] = Camera3D::DopplerTracking::DOPPLER_TRACKING_PHYSICS_STEP;
    _module.add("DopplerTracking", std::move(_DopplerTracking));
}