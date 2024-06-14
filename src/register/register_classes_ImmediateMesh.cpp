#include <godot_cpp/classes/immediate_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImmediateMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImmediateMesh>("ImmediateMesh")
			.constructor<>()
			.base<Mesh>()
			.fun<static_cast<void (ImmediateMesh::*)(Mesh::PrimitiveType, const Ref<Material> &)>(&ImmediateMesh::surface_begin)>((new std::string("surface_begin"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Color &)>(&ImmediateMesh::surface_set_color)>((new std::string("surface_set_color"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Vector3 &)>(&ImmediateMesh::surface_set_normal)>((new std::string("surface_set_normal"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Plane &)>(&ImmediateMesh::surface_set_tangent)>((new std::string("surface_set_tangent"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_set_uv)>((new std::string("surface_set_uv"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_set_uv2)>((new std::string("surface_set_uv2"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Vector3 &)>(&ImmediateMesh::surface_add_vertex)>((new std::string("surface_add_vertex"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_add_vertex_2d)>((new std::string("surface_add_vertex_2d"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)()>(&ImmediateMesh::surface_end)>((new std::string("surface_end"))->c_str())
			.fun<static_cast<void (ImmediateMesh::*)()>(&ImmediateMesh::clear_surfaces)>((new std::string("clear_surfaces"))->c_str());
}