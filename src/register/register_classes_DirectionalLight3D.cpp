#include <godot_cpp/classes/directional_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_DirectionalLight3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<DirectionalLight3D>("DirectionalLight3D")
			.constructor<>()
			.base<Light3D>()
			.property<static_cast<DirectionalLight3D::ShadowMode (DirectionalLight3D::*)() const>(&DirectionalLight3D::get_shadow_mode), static_cast<void (DirectionalLight3D::*)(DirectionalLight3D::ShadowMode)>(&DirectionalLight3D::set_shadow_mode)>((new std::string("directional_shadow_mode"))->c_str())
			.property<static_cast<bool (DirectionalLight3D::*)() const>(&DirectionalLight3D::is_blend_splits_enabled), static_cast<void (DirectionalLight3D::*)(bool)>(&DirectionalLight3D::set_blend_splits)>((new std::string("directional_shadow_blend_splits"))->c_str())
			.property<static_cast<DirectionalLight3D::SkyMode (DirectionalLight3D::*)() const>(&DirectionalLight3D::get_sky_mode), static_cast<void (DirectionalLight3D::*)(DirectionalLight3D::SkyMode)>(&DirectionalLight3D::set_sky_mode)>((new std::string("sky_mode"))->c_str());
	qjs::Value _ShadowMode = context->newObject();
	_ShadowMode[(new std::string("SHADOW_ORTHOGONAL"))->c_str()] = DirectionalLight3D::ShadowMode::SHADOW_ORTHOGONAL;
	_ShadowMode[(new std::string("SHADOW_PARALLEL_2_SPLITS"))->c_str()] = DirectionalLight3D::ShadowMode::SHADOW_PARALLEL_2_SPLITS;
	_ShadowMode[(new std::string("SHADOW_PARALLEL_4_SPLITS"))->c_str()] = DirectionalLight3D::ShadowMode::SHADOW_PARALLEL_4_SPLITS;
	_module.add("ShadowMode", std::move(_ShadowMode));
	qjs::Value _SkyMode = context->newObject();
	_SkyMode[(new std::string("SKY_MODE_LIGHT_AND_SKY"))->c_str()] = DirectionalLight3D::SkyMode::SKY_MODE_LIGHT_AND_SKY;
	_SkyMode[(new std::string("SKY_MODE_LIGHT_ONLY"))->c_str()] = DirectionalLight3D::SkyMode::SKY_MODE_LIGHT_ONLY;
	_SkyMode[(new std::string("SKY_MODE_SKY_ONLY"))->c_str()] = DirectionalLight3D::SkyMode::SKY_MODE_SKY_ONLY;
	_module.add("SkyMode", std::move(_SkyMode));
}