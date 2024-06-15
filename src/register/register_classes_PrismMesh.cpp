#include <godot_cpp/classes/prism_mesh.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PrismMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PrismMesh>("PrismMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<double(PrismMesh::*)()const>(&PrismMesh::get_left_to_right),static_cast<void(PrismMesh::*)(double)>(&PrismMesh::set_left_to_right)>("left_to_right")
            .property<static_cast<Vector3(PrismMesh::*)()const>(&PrismMesh::get_size),static_cast<void(PrismMesh::*)(const Vector3 &)>(&PrismMesh::set_size)>("size")
            .property<static_cast<int32_t(PrismMesh::*)()const>(&PrismMesh::get_subdivide_width),static_cast<void(PrismMesh::*)(int32_t)>(&PrismMesh::set_subdivide_width)>("subdivide_width")
            .property<static_cast<int32_t(PrismMesh::*)()const>(&PrismMesh::get_subdivide_height),static_cast<void(PrismMesh::*)(int32_t)>(&PrismMesh::set_subdivide_height)>("subdivide_height")
            .property<static_cast<int32_t(PrismMesh::*)()const>(&PrismMesh::get_subdivide_depth),static_cast<void(PrismMesh::*)(int32_t)>(&PrismMesh::set_subdivide_depth)>("subdivide_depth")
;}