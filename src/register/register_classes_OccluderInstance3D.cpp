
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/occluder_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OccluderInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<OccluderInstance3D>("OccluderInstance3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Ref<Occluder3D> (OccluderInstance3D::*)() const>(&OccluderInstance3D::get_occluder), static_cast<void (OccluderInstance3D::*)(const Ref<Occluder3D> &)>(&OccluderInstance3D::set_occluder)>((new std::string("occluder"))->c_str())
			.property<static_cast<uint32_t (OccluderInstance3D::*)() const>(&OccluderInstance3D::get_bake_mask), static_cast<void (OccluderInstance3D::*)(uint32_t)>(&OccluderInstance3D::set_bake_mask)>((new std::string("bake_mask"))->c_str())
			.property<static_cast<double (OccluderInstance3D::*)() const>(&OccluderInstance3D::get_bake_simplification_distance), static_cast<void (OccluderInstance3D::*)(double)>(&OccluderInstance3D::set_bake_simplification_distance)>((new std::string("bake_simplification_distance"))->c_str())
			.fun<static_cast<void (OccluderInstance3D::*)(int32_t, bool)>(&OccluderInstance3D::set_bake_mask_value)>((new std::string("set_bake_mask_value"))->c_str())
			.fun<static_cast<bool (OccluderInstance3D::*)(int32_t) const>(&OccluderInstance3D::get_bake_mask_value)>((new std::string("get_bake_mask_value"))->c_str());
}