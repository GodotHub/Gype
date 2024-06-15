#include <godot_cpp/classes/tube_trail_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TubeTrailMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TubeTrailMesh>("TubeTrailMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_radius),static_cast<void(TubeTrailMesh::*)(double)>(&TubeTrailMesh::set_radius)>("radius")
            .property<static_cast<int32_t(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_radial_steps),static_cast<void(TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_radial_steps)>("radial_steps")
            .property<static_cast<int32_t(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_sections),static_cast<void(TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_sections)>("sections")
            .property<static_cast<double(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_section_length),static_cast<void(TubeTrailMesh::*)(double)>(&TubeTrailMesh::set_section_length)>("section_length")
            .property<static_cast<int32_t(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_section_rings),static_cast<void(TubeTrailMesh::*)(int32_t)>(&TubeTrailMesh::set_section_rings)>("section_rings")
            .property<static_cast<bool(TubeTrailMesh::*)()const>(&TubeTrailMesh::is_cap_top),static_cast<void(TubeTrailMesh::*)(bool)>(&TubeTrailMesh::set_cap_top)>("cap_top")
            .property<static_cast<bool(TubeTrailMesh::*)()const>(&TubeTrailMesh::is_cap_bottom),static_cast<void(TubeTrailMesh::*)(bool)>(&TubeTrailMesh::set_cap_bottom)>("cap_bottom")
            .property<static_cast<Ref<Curve>(TubeTrailMesh::*)()const>(&TubeTrailMesh::get_curve),static_cast<void(TubeTrailMesh::*)(const Ref<Curve> &)>(&TubeTrailMesh::set_curve)>("curve")
;}