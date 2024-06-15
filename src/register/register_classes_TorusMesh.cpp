#include <godot_cpp/classes/torus_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TorusMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TorusMesh>("TorusMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(TorusMesh::*)()const>(&TorusMesh::get_inner_radius),static_cast<void(TorusMesh::*)(double)>(&TorusMesh::set_inner_radius)>("inner_radius")
            .property<static_cast<double(TorusMesh::*)()const>(&TorusMesh::get_outer_radius),static_cast<void(TorusMesh::*)(double)>(&TorusMesh::set_outer_radius)>("outer_radius")
            .property<static_cast<int32_t(TorusMesh::*)()const>(&TorusMesh::get_rings),static_cast<void(TorusMesh::*)(int32_t)>(&TorusMesh::set_rings)>("rings")
            .property<static_cast<int32_t(TorusMesh::*)()const>(&TorusMesh::get_ring_segments),static_cast<void(TorusMesh::*)(int32_t)>(&TorusMesh::set_ring_segments)>("ring_segments")
;}