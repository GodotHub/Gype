
#include <godot_cpp/classes/reflection_probe.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ReflectionProbe() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<ReflectionProbe>("ReflectionProbe")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<ReflectionProbe::UpdateMode (ReflectionProbe::*)() const>(&ReflectionProbe::get_update_mode), static_cast<void (ReflectionProbe::*)(ReflectionProbe::UpdateMode)>(&ReflectionProbe::set_update_mode)>((new std::string("update_mode"))->c_str())
			.property<static_cast<double (ReflectionProbe::*)() const>(&ReflectionProbe::get_intensity), static_cast<void (ReflectionProbe::*)(double)>(&ReflectionProbe::set_intensity)>((new std::string("intensity"))->c_str())
			.property<static_cast<double (ReflectionProbe::*)() const>(&ReflectionProbe::get_max_distance), static_cast<void (ReflectionProbe::*)(double)>(&ReflectionProbe::set_max_distance)>((new std::string("max_distance"))->c_str())
			.property<static_cast<Vector3 (ReflectionProbe::*)() const>(&ReflectionProbe::get_size), static_cast<void (ReflectionProbe::*)(const Vector3 &)>(&ReflectionProbe::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<Vector3 (ReflectionProbe::*)() const>(&ReflectionProbe::get_origin_offset), static_cast<void (ReflectionProbe::*)(const Vector3 &)>(&ReflectionProbe::set_origin_offset)>((new std::string("origin_offset"))->c_str())
			.property<static_cast<bool (ReflectionProbe::*)() const>(&ReflectionProbe::is_box_projection_enabled), static_cast<void (ReflectionProbe::*)(bool)>(&ReflectionProbe::set_enable_box_projection)>((new std::string("box_projection"))->c_str())
			.property<static_cast<bool (ReflectionProbe::*)() const>(&ReflectionProbe::is_set_as_interior), static_cast<void (ReflectionProbe::*)(bool)>(&ReflectionProbe::set_as_interior)>((new std::string("interior"))->c_str())
			.property<static_cast<bool (ReflectionProbe::*)() const>(&ReflectionProbe::are_shadows_enabled), static_cast<void (ReflectionProbe::*)(bool)>(&ReflectionProbe::set_enable_shadows)>((new std::string("enable_shadows"))->c_str())
			.property<static_cast<uint32_t (ReflectionProbe::*)() const>(&ReflectionProbe::get_cull_mask), static_cast<void (ReflectionProbe::*)(uint32_t)>(&ReflectionProbe::set_cull_mask)>((new std::string("cull_mask"))->c_str())
			.property<static_cast<uint32_t (ReflectionProbe::*)() const>(&ReflectionProbe::get_reflection_mask), static_cast<void (ReflectionProbe::*)(uint32_t)>(&ReflectionProbe::set_reflection_mask)>((new std::string("reflection_mask"))->c_str())
			.property<static_cast<double (ReflectionProbe::*)() const>(&ReflectionProbe::get_mesh_lod_threshold), static_cast<void (ReflectionProbe::*)(double)>(&ReflectionProbe::set_mesh_lod_threshold)>((new std::string("mesh_lod_threshold"))->c_str())
			.property<static_cast<ReflectionProbe::AmbientMode (ReflectionProbe::*)() const>(&ReflectionProbe::get_ambient_mode), static_cast<void (ReflectionProbe::*)(ReflectionProbe::AmbientMode)>(&ReflectionProbe::set_ambient_mode)>((new std::string("ambient_mode"))->c_str())
			.property<static_cast<Color (ReflectionProbe::*)() const>(&ReflectionProbe::get_ambient_color), static_cast<void (ReflectionProbe::*)(const Color &)>(&ReflectionProbe::set_ambient_color)>((new std::string("ambient_color"))->c_str())
			.property<static_cast<double (ReflectionProbe::*)() const>(&ReflectionProbe::get_ambient_color_energy), static_cast<void (ReflectionProbe::*)(double)>(&ReflectionProbe::set_ambient_color_energy)>((new std::string("ambient_color_energy"))->c_str());
	qjs::Value _UpdateMode = context->newObject();
	_UpdateMode[(new std::string("UPDATE_ONCE"))->c_str()] = ReflectionProbe::UpdateMode::UPDATE_ONCE;
	_UpdateMode[(new std::string("UPDATE_ALWAYS"))->c_str()] = ReflectionProbe::UpdateMode::UPDATE_ALWAYS;
	_module.add("UpdateMode", std::move(_UpdateMode));
	qjs::Value _AmbientMode = context->newObject();
	_AmbientMode[(new std::string("AMBIENT_DISABLED"))->c_str()] = ReflectionProbe::AmbientMode::AMBIENT_DISABLED;
	_AmbientMode[(new std::string("AMBIENT_ENVIRONMENT"))->c_str()] = ReflectionProbe::AmbientMode::AMBIENT_ENVIRONMENT;
	_AmbientMode[(new std::string("AMBIENT_COLOR"))->c_str()] = ReflectionProbe::AmbientMode::AMBIENT_COLOR;
	_module.add("AmbientMode", std::move(_AmbientMode));
}