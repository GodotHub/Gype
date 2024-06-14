#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PrimitiveMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PrimitiveMesh>("PrimitiveMesh")
			.constructor<>()
			.base<Mesh>()
			.property<static_cast<Ref<Material> (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_material), static_cast<void (PrimitiveMesh::*)(const Ref<Material> &)>(&PrimitiveMesh::set_material)>((new std::string("material"))->c_str())
			.property<static_cast<AABB (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_custom_aabb), static_cast<void (PrimitiveMesh::*)(const AABB &)>(&PrimitiveMesh::set_custom_aabb)>((new std::string("custom_aabb"))->c_str())
			.property<static_cast<bool (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_flip_faces), static_cast<void (PrimitiveMesh::*)(bool)>(&PrimitiveMesh::set_flip_faces)>((new std::string("flip_faces"))->c_str())
			.property<static_cast<bool (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_add_uv2), static_cast<void (PrimitiveMesh::*)(bool)>(&PrimitiveMesh::set_add_uv2)>((new std::string("add_uv2"))->c_str())
			.property<static_cast<double (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_uv2_padding), static_cast<void (PrimitiveMesh::*)(double)>(&PrimitiveMesh::set_uv2_padding)>((new std::string("uv2_padding"))->c_str())
			.fun<static_cast<Array (PrimitiveMesh::*)() const>(&PrimitiveMesh::_create_mesh_array)>((new std::string("_create_mesh_array"))->c_str())
			.fun<static_cast<Array (PrimitiveMesh::*)() const>(&PrimitiveMesh::get_mesh_arrays)>((new std::string("get_mesh_arrays"))->c_str())
			.fun<static_cast<void (PrimitiveMesh::*)()>(&PrimitiveMesh::request_update)>((new std::string("request_update"))->c_str());
}