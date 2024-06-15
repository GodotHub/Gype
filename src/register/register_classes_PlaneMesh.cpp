#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaneMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaneMesh>("PlaneMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
            .property<static_cast<Vector2(PlaneMesh::*)()const>(&PlaneMesh::get_size),static_cast<void(PlaneMesh::*)(const Vector2 &)>(&PlaneMesh::set_size)>("size")
            .property<static_cast<int32_t(PlaneMesh::*)()const>(&PlaneMesh::get_subdivide_width),static_cast<void(PlaneMesh::*)(int32_t)>(&PlaneMesh::set_subdivide_width)>("subdivide_width")
            .property<static_cast<int32_t(PlaneMesh::*)()const>(&PlaneMesh::get_subdivide_depth),static_cast<void(PlaneMesh::*)(int32_t)>(&PlaneMesh::set_subdivide_depth)>("subdivide_depth")
            .property<static_cast<Vector3(PlaneMesh::*)()const>(&PlaneMesh::get_center_offset),static_cast<void(PlaneMesh::*)(const Vector3 &)>(&PlaneMesh::set_center_offset)>("center_offset")
            .property<static_cast<PlaneMesh::Orientation(PlaneMesh::*)()const>(&PlaneMesh::get_orientation),static_cast<void(PlaneMesh::*)(PlaneMesh::Orientation)>(&PlaneMesh::set_orientation)>("orientation")
;    qjs::Value _Orientation = context->newObject();
    _Orientation["FACE_X"] = PlaneMesh::Orientation::FACE_X;
    _Orientation["FACE_Y"] = PlaneMesh::Orientation::FACE_Y;
    _Orientation["FACE_Z"] = PlaneMesh::Orientation::FACE_Z;
    _module.add("Orientation", std::move(_Orientation));
}