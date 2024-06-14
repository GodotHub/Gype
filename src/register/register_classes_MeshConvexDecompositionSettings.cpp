
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshConvexDecompositionSettings() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MeshConvexDecompositionSettings>("MeshConvexDecompositionSettings")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<double (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_max_concavity), static_cast<void (MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_max_concavity)>((new std::string("max_concavity"))->c_str())
			.property<static_cast<double (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias), static_cast<void (MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias)>((new std::string("symmetry_planes_clipping_bias"))->c_str())
			.property<static_cast<double (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias), static_cast<void (MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias)>((new std::string("revolution_axes_clipping_bias"))->c_str())
			.property<static_cast<double (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_min_volume_per_convex_hull), static_cast<void (MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_min_volume_per_convex_hull)>((new std::string("min_volume_per_convex_hull"))->c_str())
			.property<static_cast<uint32_t (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_resolution), static_cast<void (MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_resolution)>((new std::string("resolution"))->c_str())
			.property<static_cast<uint32_t (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull), static_cast<void (MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull)>((new std::string("max_num_vertices_per_convex_hull"))->c_str())
			.property<static_cast<uint32_t (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_plane_downsampling), static_cast<void (MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_plane_downsampling)>((new std::string("plane_downsampling"))->c_str())
			.property<static_cast<uint32_t (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_convex_hull_downsampling), static_cast<void (MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_convex_hull_downsampling)>((new std::string("convex_hull_downsampling"))->c_str())
			.property<static_cast<bool (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_normalize_mesh), static_cast<void (MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_normalize_mesh)>((new std::string("normalize_mesh"))->c_str())
			.property<static_cast<MeshConvexDecompositionSettings::Mode (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_mode), static_cast<void (MeshConvexDecompositionSettings::*)(MeshConvexDecompositionSettings::Mode)>(&MeshConvexDecompositionSettings::set_mode)>((new std::string("mode"))->c_str())
			.property<static_cast<bool (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_convex_hull_approximation), static_cast<void (MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_convex_hull_approximation)>((new std::string("convex_hull_approximation"))->c_str())
			.property<static_cast<uint32_t (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_max_convex_hulls), static_cast<void (MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_max_convex_hulls)>((new std::string("max_convex_hulls"))->c_str())
			.property<static_cast<bool (MeshConvexDecompositionSettings::*)() const>(&MeshConvexDecompositionSettings::get_project_hull_vertices), static_cast<void (MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_project_hull_vertices)>((new std::string("project_hull_vertices"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("CONVEX_DECOMPOSITION_MODE_VOXEL"))->c_str()] = MeshConvexDecompositionSettings::Mode::CONVEX_DECOMPOSITION_MODE_VOXEL;
	_Mode[(new std::string("CONVEX_DECOMPOSITION_MODE_TETRAHEDRON"))->c_str()] = MeshConvexDecompositionSettings::Mode::CONVEX_DECOMPOSITION_MODE_TETRAHEDRON;
	_module.add("Mode", std::move(_Mode));
}