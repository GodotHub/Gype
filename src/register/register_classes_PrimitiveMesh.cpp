#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/variant/array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PrimitiveMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<PrimitiveMesh>("PrimitiveMesh")
			.constructor<>()
			.property<&PrimitiveMesh::get_material, &PrimitiveMesh::set_material>("material")
			.property<&PrimitiveMesh::get_custom_aabb, &PrimitiveMesh::set_custom_aabb>("custom_aabb")
			.property<&PrimitiveMesh::get_flip_faces, &PrimitiveMesh::set_flip_faces>("flip_faces")
			.property<&PrimitiveMesh::get_add_uv2, &PrimitiveMesh::set_add_uv2>("add_uv2")
			.property<&PrimitiveMesh::get_uv2_padding, &PrimitiveMesh::set_uv2_padding>("uv2_padding")
			.fun<static_cast<Array (PrimitiveMesh::*)() const>(&PrimitiveMesh::_create_mesh_array)>("_create_mesh_array")
			.fun<static_cast<Array (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_mesh_arrays)>("get_mesh_arrays");
}