#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/physical_bone2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicalBone2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<PhysicalBone2D>("PhysicalBone2D")
			.constructor<>()
			.property<&PhysicalBone2D::get_bone2d_nodepath, &PhysicalBone2D::set_bone2d_nodepath>("bone2d_nodepath")
			.property<&PhysicalBone2D::get_bone2d_index, &PhysicalBone2D::set_bone2d_index>("bone2d_index")
			.property<&PhysicalBone2D::get_auto_configure_joint, &PhysicalBone2D::set_auto_configure_joint>("auto_configure_joint")
			.property<&PhysicalBone2D::get_simulate_physics, &PhysicalBone2D::set_simulate_physics>("simulate_physics")
			.property<&PhysicalBone2D::get_follow_bone_when_simulating, &PhysicalBone2D::set_follow_bone_when_simulating>("follow_bone_when_simulating")
			.fun<static_cast<Joint2D *(PhysicalBone2D::*)() const>(&PhysicalBone2D::get_joint)>("get_joint")
			.fun<static_cast<bool (PhysicalBone2D::*)() const>(&PhysicalBone2D::is_simulating_physics)>("is_simulating_physics");
}