#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/path_follow3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PathFollow3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<PathFollow3D>("PathFollow3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<double (PathFollow3D::*)() const>(&PathFollow3D::get_progress), static_cast<void (PathFollow3D::*)(double)>(&PathFollow3D::set_progress)>((new std::string("progress"))->c_str())
			.property<static_cast<double (PathFollow3D::*)() const>(&PathFollow3D::get_progress_ratio), static_cast<void (PathFollow3D::*)(double)>(&PathFollow3D::set_progress_ratio)>((new std::string("progress_ratio"))->c_str())
			.property<static_cast<double (PathFollow3D::*)() const>(&PathFollow3D::get_h_offset), static_cast<void (PathFollow3D::*)(double)>(&PathFollow3D::set_h_offset)>((new std::string("h_offset"))->c_str())
			.property<static_cast<double (PathFollow3D::*)() const>(&PathFollow3D::get_v_offset), static_cast<void (PathFollow3D::*)(double)>(&PathFollow3D::set_v_offset)>((new std::string("v_offset"))->c_str())
			.property<static_cast<PathFollow3D::RotationMode (PathFollow3D::*)() const>(&PathFollow3D::get_rotation_mode), static_cast<void (PathFollow3D::*)(PathFollow3D::RotationMode)>(&PathFollow3D::set_rotation_mode)>((new std::string("rotation_mode"))->c_str())
			.property<static_cast<bool (PathFollow3D::*)() const>(&PathFollow3D::is_using_model_front), static_cast<void (PathFollow3D::*)(bool)>(&PathFollow3D::set_use_model_front)>((new std::string("use_model_front"))->c_str())
			.property<static_cast<bool (PathFollow3D::*)() const>(&PathFollow3D::get_cubic_interpolation), static_cast<void (PathFollow3D::*)(bool)>(&PathFollow3D::set_cubic_interpolation)>((new std::string("cubic_interp"))->c_str())
			.property<static_cast<bool (PathFollow3D::*)() const>(&PathFollow3D::has_loop), static_cast<void (PathFollow3D::*)(bool)>(&PathFollow3D::set_loop)>((new std::string("loop"))->c_str())
			.property<static_cast<bool (PathFollow3D::*)() const>(&PathFollow3D::is_tilt_enabled), static_cast<void (PathFollow3D::*)(bool)>(&PathFollow3D::set_tilt_enabled)>((new std::string("tilt_enabled"))->c_str())
			.static_fun<static_cast<Transform3D (*)(const Transform3D &, PathFollow3D::RotationMode)>(&PathFollow3D::correct_posture)>((new std::string("correct_posture"))->c_str());
	qjs::Value _RotationMode = context->newObject();
	_RotationMode[(new std::string("ROTATION_NONE"))->c_str()] = PathFollow3D::RotationMode::ROTATION_NONE;
	_RotationMode[(new std::string("ROTATION_Y"))->c_str()] = PathFollow3D::RotationMode::ROTATION_Y;
	_RotationMode[(new std::string("ROTATION_XY"))->c_str()] = PathFollow3D::RotationMode::ROTATION_XY;
	_RotationMode[(new std::string("ROTATION_XYZ"))->c_str()] = PathFollow3D::RotationMode::ROTATION_XYZ;
	_RotationMode[(new std::string("ROTATION_ORIENTED"))->c_str()] = PathFollow3D::RotationMode::ROTATION_ORIENTED;
	_module.add("RotationMode", std::move(_RotationMode));
}