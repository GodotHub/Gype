
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VisualInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VisualInstance3D>("VisualInstance3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<uint32_t (VisualInstance3D::*)() const>(&VisualInstance3D::get_layer_mask), static_cast<void (VisualInstance3D::*)(uint32_t)>(&VisualInstance3D::set_layer_mask)>((new std::string("layers"))->c_str())
			.property<static_cast<double (VisualInstance3D::*)() const>(&VisualInstance3D::get_sorting_offset), static_cast<void (VisualInstance3D::*)(double)>(&VisualInstance3D::set_sorting_offset)>((new std::string("sorting_offset"))->c_str())
			.property<static_cast<bool (VisualInstance3D::*)() const>(&VisualInstance3D::is_sorting_use_aabb_center), static_cast<void (VisualInstance3D::*)(bool)>(&VisualInstance3D::set_sorting_use_aabb_center)>((new std::string("sorting_use_aabb_center"))->c_str())
			.fun<static_cast<AABB (VisualInstance3D::*)() const>(&VisualInstance3D::_get_aabb)>((new std::string("_get_aabb"))->c_str())
			.fun<static_cast<void (VisualInstance3D::*)(const RID &)>(&VisualInstance3D::set_base)>((new std::string("set_base"))->c_str())
			.fun<static_cast<RID (VisualInstance3D::*)() const>(&VisualInstance3D::get_base)>((new std::string("get_base"))->c_str())
			.fun<static_cast<RID (VisualInstance3D::*)() const>(&VisualInstance3D::get_instance)>((new std::string("get_instance"))->c_str())
			.fun<static_cast<void (VisualInstance3D::*)(int32_t, bool)>(&VisualInstance3D::set_layer_mask_value)>((new std::string("set_layer_mask_value"))->c_str())
			.fun<static_cast<bool (VisualInstance3D::*)(int32_t) const>(&VisualInstance3D::get_layer_mask_value)>((new std::string("get_layer_mask_value"))->c_str())
			.fun<static_cast<AABB (VisualInstance3D::*)() const>(&VisualInstance3D::get_aabb)>((new std::string("get_aabb"))->c_str());
}