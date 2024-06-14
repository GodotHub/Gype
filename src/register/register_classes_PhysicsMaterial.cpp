#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsMaterial() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsMaterial>("PhysicsMaterial")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (PhysicsMaterial::*)() const>(&PhysicsMaterial::get_friction), static_cast<void (PhysicsMaterial::*)(double)>(&PhysicsMaterial::set_friction)>((new std::string("friction"))->c_str())
			.property<static_cast<bool (PhysicsMaterial::*)() const>(&PhysicsMaterial::is_rough), static_cast<void (PhysicsMaterial::*)(bool)>(&PhysicsMaterial::set_rough)>((new std::string("rough"))->c_str())
			.property<static_cast<double (PhysicsMaterial::*)() const>(&PhysicsMaterial::get_bounce), static_cast<void (PhysicsMaterial::*)(double)>(&PhysicsMaterial::set_bounce)>((new std::string("bounce"))->c_str())
			.property<static_cast<bool (PhysicsMaterial::*)() const>(&PhysicsMaterial::is_absorbent), static_cast<void (PhysicsMaterial::*)(bool)>(&PhysicsMaterial::set_absorbent)>((new std::string("absorbent"))->c_str());
}