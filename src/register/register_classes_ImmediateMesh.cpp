#include <godot_cpp/classes/immediate_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ImmediateMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<ImmediateMesh>("ImmediateMesh")
			.constructor<>()
			.fun<static_cast<void (ImmediateMesh::*)(Mesh::PrimitiveType, const Ref<Material> &)>(&ImmediateMesh::surface_begin)>("surface_begin")
			.fun<static_cast<void (ImmediateMesh::*)(const Color &)>(&ImmediateMesh::surface_set_color)>("surface_set_color")
			.fun<static_cast<void (ImmediateMesh::*)(const Vector3 &)>(&ImmediateMesh::surface_set_normal)>("surface_set_normal")
			.fun<static_cast<void (ImmediateMesh::*)(const Plane &)>(&ImmediateMesh::surface_set_tangent)>("surface_set_tangent")
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_set_uv)>("surface_set_uv")
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_set_uv2)>("surface_set_uv2")
			.fun<static_cast<void (ImmediateMesh::*)(const Vector3 &)>(&ImmediateMesh::surface_add_vertex)>("surface_add_vertex")
			.fun<static_cast<void (ImmediateMesh::*)(const Vector2 &)>(&ImmediateMesh::surface_add_vertex_2d)>("surface_add_vertex_2d")
			.fun<static_cast<void (ImmediateMesh::*)()>(&ImmediateMesh::surface_end)>("surface_end")
			.fun<static_cast<void (ImmediateMesh::*)()>(&ImmediateMesh::clear_surfaces)>("clear_surfaces");
}