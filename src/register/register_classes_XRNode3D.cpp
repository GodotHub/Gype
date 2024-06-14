#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRNode3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<XRNode3D>("XRNode3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<StringName (XRNode3D::*)() const>(&XRNode3D::get_tracker), static_cast<void (XRNode3D::*)(const StringName &)>(&XRNode3D::set_tracker)>((new std::string("tracker"))->c_str())
			.property<static_cast<StringName (XRNode3D::*)() const>(&XRNode3D::get_pose_name), static_cast<void (XRNode3D::*)(const StringName &)>(&XRNode3D::set_pose_name)>((new std::string("pose"))->c_str())
			.property<static_cast<bool (XRNode3D::*)() const>(&XRNode3D::get_show_when_tracked), static_cast<void (XRNode3D::*)(bool)>(&XRNode3D::set_show_when_tracked)>((new std::string("show_when_tracked"))->c_str())
			.fun<static_cast<bool (XRNode3D::*)() const>(&XRNode3D::get_is_active)>((new std::string("get_is_active"))->c_str())
			.fun<static_cast<bool (XRNode3D::*)() const>(&XRNode3D::get_has_tracking_data)>((new std::string("get_has_tracking_data"))->c_str())
			.fun<static_cast<Ref<XRPose> (XRNode3D::*)()>(&XRNode3D::get_pose)>((new std::string("get_pose"))->c_str())
			.fun<static_cast<void (XRNode3D::*)(const String &, double, double, double, double)>(&XRNode3D::trigger_haptic_pulse)>((new std::string("trigger_haptic_pulse"))->c_str());
}