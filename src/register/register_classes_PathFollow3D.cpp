#include <godot_cpp/classes/path_follow3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PathFollow3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<PathFollow3D>("PathFollow3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<double(PathFollow3D::*)()const>(&PathFollow3D::get_progress),static_cast<void(PathFollow3D::*)(double)>(&PathFollow3D::set_progress)>("progress")
            .property<static_cast<double(PathFollow3D::*)()const>(&PathFollow3D::get_progress_ratio),static_cast<void(PathFollow3D::*)(double)>(&PathFollow3D::set_progress_ratio)>("progress_ratio")
            .property<static_cast<double(PathFollow3D::*)()const>(&PathFollow3D::get_h_offset),static_cast<void(PathFollow3D::*)(double)>(&PathFollow3D::set_h_offset)>("h_offset")
            .property<static_cast<double(PathFollow3D::*)()const>(&PathFollow3D::get_v_offset),static_cast<void(PathFollow3D::*)(double)>(&PathFollow3D::set_v_offset)>("v_offset")
            .property<static_cast<PathFollow3D::RotationMode(PathFollow3D::*)()const>(&PathFollow3D::get_rotation_mode),static_cast<void(PathFollow3D::*)(PathFollow3D::RotationMode)>(&PathFollow3D::set_rotation_mode)>("rotation_mode")
            .property<static_cast<bool(PathFollow3D::*)()const>(&PathFollow3D::is_using_model_front),static_cast<void(PathFollow3D::*)(bool)>(&PathFollow3D::set_use_model_front)>("use_model_front")
            .property<static_cast<bool(PathFollow3D::*)()const>(&PathFollow3D::get_cubic_interpolation),static_cast<void(PathFollow3D::*)(bool)>(&PathFollow3D::set_cubic_interpolation)>("cubic_interp")
            .property<static_cast<bool(PathFollow3D::*)()const>(&PathFollow3D::has_loop),static_cast<void(PathFollow3D::*)(bool)>(&PathFollow3D::set_loop)>("loop")
            .property<static_cast<bool(PathFollow3D::*)()const>(&PathFollow3D::is_tilt_enabled),static_cast<void(PathFollow3D::*)(bool)>(&PathFollow3D::set_tilt_enabled)>("tilt_enabled")
            .static_fun<static_cast<Transform3D(*)(const Transform3D &,PathFollow3D::RotationMode)>(&PathFollow3D::correct_posture)>("correct_posture")
;    qjs::Value _RotationMode = context->newObject();
    _RotationMode["ROTATION_NONE"] = PathFollow3D::RotationMode::ROTATION_NONE;
    _RotationMode["ROTATION_Y"] = PathFollow3D::RotationMode::ROTATION_Y;
    _RotationMode["ROTATION_XY"] = PathFollow3D::RotationMode::ROTATION_XY;
    _RotationMode["ROTATION_XYZ"] = PathFollow3D::RotationMode::ROTATION_XYZ;
    _RotationMode["ROTATION_ORIENTED"] = PathFollow3D::RotationMode::ROTATION_ORIENTED;
    _module.add("RotationMode", std::move(_RotationMode));
}