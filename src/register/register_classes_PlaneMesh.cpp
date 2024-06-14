
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PlaneMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PlaneMesh>("PlaneMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<Vector2 (PlaneMesh::*)() const>(&PlaneMesh::get_size), static_cast<void (PlaneMesh::*)(const Vector2 &)>(&PlaneMesh::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<int32_t (PlaneMesh::*)() const>(&PlaneMesh::get_subdivide_width), static_cast<void (PlaneMesh::*)(int32_t)>(&PlaneMesh::set_subdivide_width)>((new std::string("subdivide_width"))->c_str())
			.property<static_cast<int32_t (PlaneMesh::*)() const>(&PlaneMesh::get_subdivide_depth), static_cast<void (PlaneMesh::*)(int32_t)>(&PlaneMesh::set_subdivide_depth)>((new std::string("subdivide_depth"))->c_str())
			.property<static_cast<Vector3 (PlaneMesh::*)() const>(&PlaneMesh::get_center_offset), static_cast<void (PlaneMesh::*)(const Vector3 &)>(&PlaneMesh::set_center_offset)>((new std::string("center_offset"))->c_str())
			.property<static_cast<PlaneMesh::Orientation (PlaneMesh::*)() const>(&PlaneMesh::get_orientation), static_cast<void (PlaneMesh::*)(PlaneMesh::Orientation)>(&PlaneMesh::set_orientation)>((new std::string("orientation"))->c_str());
	qjs::Value _Orientation = context->newObject();
	_Orientation[(new std::string("FACE_X"))->c_str()] = PlaneMesh::Orientation::FACE_X;
	_Orientation[(new std::string("FACE_Y"))->c_str()] = PlaneMesh::Orientation::FACE_Y;
	_Orientation[(new std::string("FACE_Z"))->c_str()] = PlaneMesh::Orientation::FACE_Z;
	_module.add("Orientation", std::move(_Orientation));
}