#include <godot_cpp/classes/xr_controller3d.hpp>
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_XRController3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<XRController3D>("XRController3D")
			.constructor<>()
			.base<XRNode3D>()
			.fun<static_cast<bool (XRController3D::*)(const StringName &) const>(&XRController3D::is_button_pressed)>((new std::string("is_button_pressed"))->c_str())
			.fun<static_cast<Variant (XRController3D::*)(const StringName &) const>(&XRController3D::get_input)>((new std::string("get_input"))->c_str())
			.fun<static_cast<double (XRController3D::*)(const StringName &) const>(&XRController3D::get_float)>((new std::string("get_float"))->c_str())
			.fun<static_cast<Vector2 (XRController3D::*)(const StringName &) const>(&XRController3D::get_vector2)>((new std::string("get_vector2"))->c_str())
			.fun<static_cast<XRPositionalTracker::TrackerHand (XRController3D::*)() const>(&XRController3D::get_tracker_hand)>((new std::string("get_tracker_hand"))->c_str());
}