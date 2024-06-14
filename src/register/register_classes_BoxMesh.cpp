
#include <godot_cpp/classes/box_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_BoxMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<BoxMesh>("BoxMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<Vector3 (BoxMesh::*)() const>(&BoxMesh::get_size), static_cast<void (BoxMesh::*)(const Vector3 &)>(&BoxMesh::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<int32_t (BoxMesh::*)() const>(&BoxMesh::get_subdivide_width), static_cast<void (BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_width)>((new std::string("subdivide_width"))->c_str())
			.property<static_cast<int32_t (BoxMesh::*)() const>(&BoxMesh::get_subdivide_height), static_cast<void (BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_height)>((new std::string("subdivide_height"))->c_str())
			.property<static_cast<int32_t (BoxMesh::*)() const>(&BoxMesh::get_subdivide_depth), static_cast<void (BoxMesh::*)(int32_t)>(&BoxMesh::set_subdivide_depth)>((new std::string("subdivide_depth"))->c_str());
}