#include <godot_cpp/classes/sphere_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SphereMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SphereMesh>("SphereMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(SphereMesh::*)()const>(&SphereMesh::get_radius),static_cast<void(SphereMesh::*)(double)>(&SphereMesh::set_radius)>("radius")
            .property<static_cast<double(SphereMesh::*)()const>(&SphereMesh::get_height),static_cast<void(SphereMesh::*)(double)>(&SphereMesh::set_height)>("height")
            .property<static_cast<int32_t(SphereMesh::*)()const>(&SphereMesh::get_radial_segments),static_cast<void(SphereMesh::*)(int32_t)>(&SphereMesh::set_radial_segments)>("radial_segments")
            .property<static_cast<int32_t(SphereMesh::*)()const>(&SphereMesh::get_rings),static_cast<void(SphereMesh::*)(int32_t)>(&SphereMesh::set_rings)>("rings")
            .property<static_cast<bool(SphereMesh::*)()const>(&SphereMesh::get_is_hemisphere),static_cast<void(SphereMesh::*)(bool)>(&SphereMesh::set_is_hemisphere)>("is_hemisphere")
;}