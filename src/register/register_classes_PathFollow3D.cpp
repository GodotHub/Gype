#include <godot_cpp/classes/path_follow3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PathFollow3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<PathFollow3D>("PathFollow3D")
			.constructor<>()
			.property<&PathFollow3D::get_progress, &PathFollow3D::set_progress>("progress")
			.property<&PathFollow3D::get_progress_ratio, &PathFollow3D::set_progress_ratio>("progress_ratio")
			.property<&PathFollow3D::get_h_offset, &PathFollow3D::set_h_offset>("h_offset")
			.property<&PathFollow3D::get_v_offset, &PathFollow3D::set_v_offset>("v_offset")
			.property<&PathFollow3D::get_rotation_mode, &PathFollow3D::set_rotation_mode>("rotation_mode")
			.property<&PathFollow3D::is_using_model_front, &PathFollow3D::set_use_model_front>("use_model_front")
			.property<&PathFollow3D::get_cubic_interpolation, &PathFollow3D::set_cubic_interpolation>("cubic_interp")
			.property<&PathFollow3D::has_loop, &PathFollow3D::set_loop>("loop")
			.property<&PathFollow3D::is_tilt_enabled, &PathFollow3D::set_tilt_enabled>("tilt_enabled")
			.static_fun<&PathFollow3D::correct_posture>("correct_posture");
}