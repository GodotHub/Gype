#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/importer_mesh_instance3d.hpp>
#include <godot_cpp/classes/skin.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImporterMeshInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<ImporterMeshInstance3D>("ImporterMeshInstance3D")
			.constructor<>()
			.property<&ImporterMeshInstance3D::get_mesh, &ImporterMeshInstance3D::set_mesh>("mesh")
			.property<&ImporterMeshInstance3D::get_skin, &ImporterMeshInstance3D::set_skin>("skin")
			.property<&ImporterMeshInstance3D::get_skeleton_path, &ImporterMeshInstance3D::set_skeleton_path>("skeleton_path")
			.property<&ImporterMeshInstance3D::get_layer_mask, &ImporterMeshInstance3D::set_layer_mask>("layer_mask")
			.property<&ImporterMeshInstance3D::get_cast_shadows_setting, &ImporterMeshInstance3D::set_cast_shadows_setting>("cast_shadow")
			.property<&ImporterMeshInstance3D::get_visibility_range_begin, &ImporterMeshInstance3D::set_visibility_range_begin>("visibility_range_begin")
			.property<&ImporterMeshInstance3D::get_visibility_range_begin_margin, &ImporterMeshInstance3D::set_visibility_range_begin_margin>("visibility_range_begin_margin")
			.property<&ImporterMeshInstance3D::get_visibility_range_end, &ImporterMeshInstance3D::set_visibility_range_end>("visibility_range_end")
			.property<&ImporterMeshInstance3D::get_visibility_range_end_margin, &ImporterMeshInstance3D::set_visibility_range_end_margin>("visibility_range_end_margin")
			.property<&ImporterMeshInstance3D::get_visibility_range_fade_mode, &ImporterMeshInstance3D::set_visibility_range_fade_mode>("visibility_range_fade_mode");
}