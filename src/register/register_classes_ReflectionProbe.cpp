#include <godot_cpp/classes/reflection_probe.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ReflectionProbe() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<ReflectionProbe>("ReflectionProbe")
			.constructor<>()
			.property<&ReflectionProbe::get_update_mode, &ReflectionProbe::set_update_mode>("update_mode")
			.property<&ReflectionProbe::get_intensity, &ReflectionProbe::set_intensity>("intensity")
			.property<&ReflectionProbe::get_max_distance, &ReflectionProbe::set_max_distance>("max_distance")
			.property<&ReflectionProbe::get_size, &ReflectionProbe::set_size>("size")
			.property<&ReflectionProbe::get_origin_offset, &ReflectionProbe::set_origin_offset>("origin_offset")
			.property<&ReflectionProbe::is_box_projection_enabled, &ReflectionProbe::set_enable_box_projection>("box_projection")
			.property<&ReflectionProbe::is_set_as_interior, &ReflectionProbe::set_as_interior>("interior")
			.property<&ReflectionProbe::are_shadows_enabled, &ReflectionProbe::set_enable_shadows>("enable_shadows")
			.property<&ReflectionProbe::get_cull_mask, &ReflectionProbe::set_cull_mask>("cull_mask")
			.property<&ReflectionProbe::get_mesh_lod_threshold, &ReflectionProbe::set_mesh_lod_threshold>("mesh_lod_threshold")
			.property<&ReflectionProbe::get_ambient_mode, &ReflectionProbe::set_ambient_mode>("ambient_mode")
			.property<&ReflectionProbe::get_ambient_color, &ReflectionProbe::set_ambient_color>("ambient_color")
			.property<&ReflectionProbe::get_ambient_color_energy, &ReflectionProbe::set_ambient_color_energy>("ambient_color_energy");
}