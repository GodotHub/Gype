#include <godot_cpp/classes/directional_light3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_DirectionalLight3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<DirectionalLight3D>("DirectionalLight3D")
			.constructor<>()
			.property<&DirectionalLight3D::get_shadow_mode, &DirectionalLight3D::set_shadow_mode>("directional_shadow_mode")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_split_1")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_split_2")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_split_3")
			.property<&DirectionalLight3D::is_blend_splits_enabled, &DirectionalLight3D::set_blend_splits>("directional_shadow_blend_splits")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_fade_start")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_max_distance")
			.property<&DirectionalLight3D::get_param, &DirectionalLight3D::set_param>("directional_shadow_pancake_size")
			.property<&DirectionalLight3D::get_sky_mode, &DirectionalLight3D::set_sky_mode>("sky_mode");
}