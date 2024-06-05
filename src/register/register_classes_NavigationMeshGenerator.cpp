#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/callable.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_NavigationMeshGenerator() {
	qjs::Context::Module &_module = _General;
	_module.class_<NavigationMeshGenerator>("NavigationMeshGenerator")
			.constructor<>()
			.fun<static_cast<void (NavigationMeshGenerator::*)(const Ref<NavigationMesh> &, Node *)>(&NavigationMeshGenerator::bake)>("bake")
			.fun<static_cast<void (NavigationMeshGenerator::*)(const Ref<NavigationMesh> &)>(&NavigationMeshGenerator::clear)>("clear")
			.fun<static_cast<void (NavigationMeshGenerator::*)(const Ref<NavigationMesh> &, const Ref<NavigationMeshSourceGeometryData3D> &, Node *, const Callable &)>(&NavigationMeshGenerator::parse_source_geometry_data)>("parse_source_geometry_data")
			.fun<static_cast<void (NavigationMeshGenerator::*)(const Ref<NavigationMesh> &, const Ref<NavigationMeshSourceGeometryData3D> &, const Callable &)>(&NavigationMeshGenerator::bake_from_source_geometry_data)>("bake_from_source_geometry_data");
}