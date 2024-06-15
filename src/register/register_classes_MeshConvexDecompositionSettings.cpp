#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MeshConvexDecompositionSettings() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MeshConvexDecompositionSettings>("MeshConvexDecompositionSettings")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<double(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_max_concavity),static_cast<void(MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_max_concavity)>("max_concavity")
            .property<static_cast<double(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_symmetry_planes_clipping_bias),static_cast<void(MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_symmetry_planes_clipping_bias)>("symmetry_planes_clipping_bias")
            .property<static_cast<double(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_revolution_axes_clipping_bias),static_cast<void(MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_revolution_axes_clipping_bias)>("revolution_axes_clipping_bias")
            .property<static_cast<double(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_min_volume_per_convex_hull),static_cast<void(MeshConvexDecompositionSettings::*)(double)>(&MeshConvexDecompositionSettings::set_min_volume_per_convex_hull)>("min_volume_per_convex_hull")
            .property<static_cast<uint32_t(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_resolution),static_cast<void(MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_resolution)>("resolution")
            .property<static_cast<uint32_t(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_max_num_vertices_per_convex_hull),static_cast<void(MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_max_num_vertices_per_convex_hull)>("max_num_vertices_per_convex_hull")
            .property<static_cast<uint32_t(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_plane_downsampling),static_cast<void(MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_plane_downsampling)>("plane_downsampling")
            .property<static_cast<uint32_t(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_convex_hull_downsampling),static_cast<void(MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_convex_hull_downsampling)>("convex_hull_downsampling")
            .property<static_cast<bool(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_normalize_mesh),static_cast<void(MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_normalize_mesh)>("normalize_mesh")
            .property<static_cast<MeshConvexDecompositionSettings::Mode(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_mode),static_cast<void(MeshConvexDecompositionSettings::*)(MeshConvexDecompositionSettings::Mode)>(&MeshConvexDecompositionSettings::set_mode)>("mode")
            .property<static_cast<bool(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_convex_hull_approximation),static_cast<void(MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_convex_hull_approximation)>("convex_hull_approximation")
            .property<static_cast<uint32_t(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_max_convex_hulls),static_cast<void(MeshConvexDecompositionSettings::*)(uint32_t)>(&MeshConvexDecompositionSettings::set_max_convex_hulls)>("max_convex_hulls")
            .property<static_cast<bool(MeshConvexDecompositionSettings::*)()const>(&MeshConvexDecompositionSettings::get_project_hull_vertices),static_cast<void(MeshConvexDecompositionSettings::*)(bool)>(&MeshConvexDecompositionSettings::set_project_hull_vertices)>("project_hull_vertices")
;    qjs::Value _Mode = context->newObject();
    _Mode["CONVEX_DECOMPOSITION_MODE_VOXEL"] = MeshConvexDecompositionSettings::Mode::CONVEX_DECOMPOSITION_MODE_VOXEL;
    _Mode["CONVEX_DECOMPOSITION_MODE_TETRAHEDRON"] = MeshConvexDecompositionSettings::Mode::CONVEX_DECOMPOSITION_MODE_TETRAHEDRON;
    _module.add("Mode", std::move(_Mode));
}