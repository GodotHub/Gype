#include <godot_cpp/classes/open_xr_interface.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OpenXRInterface>("OpenXRInterface")
			.constructor<>()
			.property<&OpenXRInterface::get_display_refresh_rate, &OpenXRInterface::set_display_refresh_rate>("display_refresh_rate")
			.property<&OpenXRInterface::get_render_target_size_multiplier, &OpenXRInterface::set_render_target_size_multiplier>("render_target_size_multiplier")
			.property<&OpenXRInterface::get_foveation_level, &OpenXRInterface::set_foveation_level>("foveation_level")
			.property<&OpenXRInterface::get_foveation_dynamic, &OpenXRInterface::set_foveation_dynamic>("foveation_dynamic")
			.fun<static_cast<bool (OpenXRInterface::*)() const>(&OpenXRInterface::is_foveation_supported)>("is_foveation_supported")
			.fun<static_cast<bool (OpenXRInterface::*)(const String &) const>(&OpenXRInterface::is_action_set_active)>("is_action_set_active")
			.fun<static_cast<void (OpenXRInterface::*)(const String &, bool)>(&OpenXRInterface::set_action_set_active)>("set_action_set_active")
			.fun<static_cast<Array (OpenXRInterface::*)() const>(&OpenXRInterface::get_action_sets)>("get_action_sets")
			.fun<static_cast<Array (OpenXRInterface::*)() const>(&OpenXRInterface::get_available_display_refresh_rates)>("get_available_display_refresh_rates")
			.fun<static_cast<void (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandMotionRange)>(&OpenXRInterface::set_motion_range)>("set_motion_range")
			.fun<static_cast<OpenXRInterface::HandMotionRange (OpenXRInterface::*)(OpenXRInterface::Hand) const>(&OpenXRInterface::get_motion_range)>("get_motion_range")
			.fun<static_cast<BitField<OpenXRInterface::HandJointFlags> (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_flags)>("get_hand_joint_flags")
			.fun<static_cast<Quaternion (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_rotation)>("get_hand_joint_rotation")
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_position)>("get_hand_joint_position")
			.fun<static_cast<double (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_radius)>("get_hand_joint_radius")
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_linear_velocity)>("get_hand_joint_linear_velocity")
			.fun<static_cast<Vector3 (OpenXRInterface::*)(OpenXRInterface::Hand, OpenXRInterface::HandJoints) const>(&OpenXRInterface::get_hand_joint_angular_velocity)>("get_hand_joint_angular_velocity")
			.fun<static_cast<bool (OpenXRInterface::*)()>(&OpenXRInterface::is_hand_tracking_supported)>("is_hand_tracking_supported")
			.fun<static_cast<bool (OpenXRInterface::*)()>(&OpenXRInterface::is_eye_gaze_interaction_supported)>("is_eye_gaze_interaction_supported");
}