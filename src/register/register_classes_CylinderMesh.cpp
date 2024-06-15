#include <godot_cpp/classes/cylinder_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CylinderMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CylinderMesh>("CylinderMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(CylinderMesh::*)()const>(&CylinderMesh::get_top_radius),static_cast<void(CylinderMesh::*)(double)>(&CylinderMesh::set_top_radius)>("top_radius")
            .property<static_cast<double(CylinderMesh::*)()const>(&CylinderMesh::get_bottom_radius),static_cast<void(CylinderMesh::*)(double)>(&CylinderMesh::set_bottom_radius)>("bottom_radius")
            .property<static_cast<double(CylinderMesh::*)()const>(&CylinderMesh::get_height),static_cast<void(CylinderMesh::*)(double)>(&CylinderMesh::set_height)>("height")
            .property<static_cast<int32_t(CylinderMesh::*)()const>(&CylinderMesh::get_radial_segments),static_cast<void(CylinderMesh::*)(int32_t)>(&CylinderMesh::set_radial_segments)>("radial_segments")
            .property<static_cast<int32_t(CylinderMesh::*)()const>(&CylinderMesh::get_rings),static_cast<void(CylinderMesh::*)(int32_t)>(&CylinderMesh::set_rings)>("rings")
            .property<static_cast<bool(CylinderMesh::*)()const>(&CylinderMesh::is_cap_top),static_cast<void(CylinderMesh::*)(bool)>(&CylinderMesh::set_cap_top)>("cap_top")
            .property<static_cast<bool(CylinderMesh::*)()const>(&CylinderMesh::is_cap_bottom),static_cast<void(CylinderMesh::*)(bool)>(&CylinderMesh::set_cap_bottom)>("cap_bottom")
;}