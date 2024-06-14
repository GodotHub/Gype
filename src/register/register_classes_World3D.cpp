#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_World3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<World3D>("World3D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Ref<Environment> (World3D::*)() const>(&World3D::get_environment), static_cast<void (World3D::*)(const Ref<Environment> &)>(&World3D::set_environment)>((new std::string("environment"))->c_str())
			.property<static_cast<Ref<Environment> (World3D::*)() const>(&World3D::get_fallback_environment), static_cast<void (World3D::*)(const Ref<Environment> &)>(&World3D::set_fallback_environment)>((new std::string("fallback_environment"))->c_str())
			.property<static_cast<Ref<CameraAttributes> (World3D::*)() const>(&World3D::get_camera_attributes), static_cast<void (World3D::*)(const Ref<CameraAttributes> &)>(&World3D::set_camera_attributes)>((new std::string("camera_attributes"))->c_str())
			.property<static_cast<RID (World3D::*)() const>(&World3D::get_space)>((new std::string("space"))->c_str())
			.property<static_cast<RID (World3D::*)() const>(&World3D::get_navigation_map)>((new std::string("navigation_map"))->c_str())
			.property<static_cast<RID (World3D::*)() const>(&World3D::get_scenario)>((new std::string("scenario"))->c_str())
			.property<static_cast<PhysicsDirectSpaceState3D *(World3D::*)()>(&World3D::get_direct_space_state)>((new std::string("direct_space_state"))->c_str());
}