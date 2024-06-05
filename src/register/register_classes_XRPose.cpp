#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/variant/transform3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_XRPose() {
	qjs::Context::Module &_module = _General;
	_module.class_<XRPose>("XRPose")
			.constructor<>()
			.property<&XRPose::get_has_tracking_data, &XRPose::set_has_tracking_data>("has_tracking_data")
			.property<&XRPose::get_name, &XRPose::set_name>("name")
			.property<&XRPose::get_transform, &XRPose::set_transform>("transform")
			.property<&XRPose::get_linear_velocity, &XRPose::set_linear_velocity>("linear_velocity")
			.property<&XRPose::get_angular_velocity, &XRPose::set_angular_velocity>("angular_velocity")
			.property<&XRPose::get_tracking_confidence, &XRPose::set_tracking_confidence>("tracking_confidence")
			.fun<static_cast<Transform3D (XRPose::*)() const>(&XRPose::get_adjusted_transform)>("get_adjusted_transform");
}