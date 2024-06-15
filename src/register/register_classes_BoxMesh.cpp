#include <godot_cpp/classes/box_mesh.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_BoxMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<BoxMesh>("BoxMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<Vector3(BoxMesh::*)()const>(&BoxMesh::get_size),static_cast<void(BoxMesh::*)(const Vector3 &)>(&BoxMesh::set_size)>("size")
            .property<static_cast<int32_t(BoxMesh::*)()const>(&BoxMesh::get_subdivide_width),static_cast<void(BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_width)>("subdivide_width")
            .property<static_cast<int32_t(BoxMesh::*)()const>(&BoxMesh::get_subdivide_height),static_cast<void(BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_height)>("subdivide_height")
            .property<static_cast<int32_t(BoxMesh::*)()const>(&BoxMesh::get_subdivide_depth),static_cast<void(BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_depth)>("subdivide_depth")
;}