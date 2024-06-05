#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_MeshConvexDecompositionSettings() {
	qjs::Context::Module &_module = _General;
	_module.class_<MeshConvexDecompositionSettings>("MeshConvexDecompositionSettings")
			.constructor<>()
			.property<&MeshConvexDecompositionSettings::get_max_concavity, &MeshConvexDecompositionSettings::set_max_concavity>("max_concavity")
			.property<&MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias, &MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias>("symmetry_planes_clipping_bias")
			.property<&MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias, &MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias>("revolution_axes_clipping_bias")
			.property<&MeshConvexDecompositionSettings::get_min_volume_per_convex_hull, &MeshConvexDecompositionSettings::set_min_volume_per_convex_hull>("min_volume_per_convex_hull")
			.property<&MeshConvexDecompositionSettings::get_resolution, &MeshConvexDecompositionSettings::set_resolution>("resolution")
			.property<&MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull, &MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull>("max_num_vertices_per_convex_hull")
			.property<&MeshConvexDecompositionSettings::get_plane_downsampling, &MeshConvexDecompositionSettings::set_plane_downsampling>("plane_downsampling")
			.property<&MeshConvexDecompositionSettings::get_convex_hull_downsampling, &MeshConvexDecompositionSettings::set_convex_hull_downsampling>("convex_hull_downsampling")
			.property<&MeshConvexDecompositionSettings::get_normalize_mesh, &MeshConvexDecompositionSettings::set_normalize_mesh>("normalize_mesh")
			.property<&MeshConvexDecompositionSettings::get_mode, &MeshConvexDecompositionSettings::set_mode>("mode")
			.property<&MeshConvexDecompositionSettings::get_convex_hull_approximation, &MeshConvexDecompositionSettings::set_convex_hull_approximation>("convex_hull_approximation")
			.property<&MeshConvexDecompositionSettings::get_max_convex_hulls, &MeshConvexDecompositionSettings::set_max_convex_hulls>("max_convex_hulls")
			.property<&MeshConvexDecompositionSettings::get_project_hull_vertices, &MeshConvexDecompositionSettings::set_project_hull_vertices>("project_hull_vertices");
}