#include <godot_cpp/classes/importer_mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ImporterMeshInstance3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<ImporterMeshInstance3D>("ImporterMeshInstance3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<Ref<ImporterMesh>(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_mesh),static_cast<void(ImporterMeshInstance3D::*)(const Ref<ImporterMesh> &)>(&ImporterMeshInstance3D::set_mesh)>("mesh")
            .property<static_cast<Ref<Skin>(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_skin),static_cast<void(ImporterMeshInstance3D::*)(const Ref<Skin> &)>(&ImporterMeshInstance3D::set_skin)>("skin")
            .property<static_cast<NodePath(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_skeleton_path),static_cast<void(ImporterMeshInstance3D::*)(const NodePath &)>(&ImporterMeshInstance3D::set_skeleton_path)>("skeleton_path")
            .property<static_cast<uint32_t(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_layer_mask),static_cast<void(ImporterMeshInstance3D::*)(uint32_t)>(&ImporterMeshInstance3D::set_layer_mask)>("layer_mask")
            .property<static_cast<GeometryInstance3D::ShadowCastingSetting(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_cast_shadows_setting),static_cast<void(ImporterMeshInstance3D::*)(GeometryInstance3D::ShadowCastingSetting)>(&ImporterMeshInstance3D::set_cast_shadows_setting)>("cast_shadow")
            .property<static_cast<double(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_visibility_range_begin),static_cast<void(ImporterMeshInstance3D::*)(double)>(&ImporterMeshInstance3D::set_visibility_range_begin)>("visibility_range_begin")
            .property<static_cast<double(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_visibility_range_begin_margin),static_cast<void(ImporterMeshInstance3D::*)(double)>(&ImporterMeshInstance3D::set_visibility_range_begin_margin)>("visibility_range_begin_margin")
            .property<static_cast<double(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_visibility_range_end),static_cast<void(ImporterMeshInstance3D::*)(double)>(&ImporterMeshInstance3D::set_visibility_range_end)>("visibility_range_end")
            .property<static_cast<double(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_visibility_range_end_margin),static_cast<void(ImporterMeshInstance3D::*)(double)>(&ImporterMeshInstance3D::set_visibility_range_end_margin)>("visibility_range_end_margin")
            .property<static_cast<GeometryInstance3D::VisibilityRangeFadeMode(ImporterMeshInstance3D::*)()const>(&ImporterMeshInstance3D::get_visibility_range_fade_mode),static_cast<void(ImporterMeshInstance3D::*)(GeometryInstance3D::VisibilityRangeFadeMode)>(&ImporterMeshInstance3D::set_visibility_range_fade_mode)>("visibility_range_fade_mode")
;}