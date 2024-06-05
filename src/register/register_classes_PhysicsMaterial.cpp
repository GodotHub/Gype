#include <godot_cpp/classes/physics_material.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PhysicsMaterial() {
	qjs::Context::Module &_module = _General;
	_module.class_<PhysicsMaterial>("PhysicsMaterial")
			.constructor<>()
			.property<&PhysicsMaterial::get_friction, &PhysicsMaterial::set_friction>("friction")
			.property<&PhysicsMaterial::is_rough, &PhysicsMaterial::set_rough>("rough")
			.property<&PhysicsMaterial::get_bounce, &PhysicsMaterial::set_bounce>("bounce")
			.property<&PhysicsMaterial::is_absorbent, &PhysicsMaterial::set_absorbent>("absorbent");
}