#include <godot_cpp/classes/capsule_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CapsuleMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CapsuleMesh>("CapsuleMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(CapsuleMesh::*)()const>(&CapsuleMesh::get_radius),static_cast<void(CapsuleMesh::*)(double)>(&CapsuleMesh::set_radius)>("radius")
            .property<static_cast<double(CapsuleMesh::*)()const>(&CapsuleMesh::get_height),static_cast<void(CapsuleMesh::*)(double)>(&CapsuleMesh::set_height)>("height")
            .property<static_cast<int32_t(CapsuleMesh::*)()const>(&CapsuleMesh::get_radial_segments),static_cast<void(CapsuleMesh::*)(int32_t)>(&CapsuleMesh::set_radial_segments)>("radial_segments")
            .property<static_cast<int32_t(CapsuleMesh::*)()const>(&CapsuleMesh::get_rings),static_cast<void(CapsuleMesh::*)(int32_t)>(&CapsuleMesh::set_rings)>("rings")
;}