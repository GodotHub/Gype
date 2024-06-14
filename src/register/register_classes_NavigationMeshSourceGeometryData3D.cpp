#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationMeshSourceGeometryData3D>("NavigationMeshSourceGeometryData3D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<PackedFloat32Array (NavigationMeshSourceGeometryData3D::*)() const>(&NavigationMeshSourceGeometryData3D::get_vertices), static_cast<void (NavigationMeshSourceGeometryData3D::*)(const PackedFloat32Array &)>(&NavigationMeshSourceGeometryData3D::set_vertices)>((new std::string("vertices"))->c_str())
			.property<static_cast<PackedInt32Array (NavigationMeshSourceGeometryData3D::*)() const>(&NavigationMeshSourceGeometryData3D::get_indices), static_cast<void (NavigationMeshSourceGeometryData3D::*)(const PackedInt32Array &)>(&NavigationMeshSourceGeometryData3D::set_indices)>((new std::string("indices"))->c_str())
			.property<static_cast<Array (NavigationMeshSourceGeometryData3D::*)() const>(&NavigationMeshSourceGeometryData3D::get_projected_obstructions), static_cast<void (NavigationMeshSourceGeometryData3D::*)(const Array &)>(&NavigationMeshSourceGeometryData3D::set_projected_obstructions)>((new std::string("projected_obstructions"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const PackedFloat32Array &, const PackedInt32Array &)>(&NavigationMeshSourceGeometryData3D::append_arrays)>((new std::string("append_arrays"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<bool (NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::has_data)>((new std::string("has_data"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const Ref<Mesh> &, const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh)>((new std::string("add_mesh"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const Array &, const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh_array)>((new std::string("add_mesh_array"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const PackedVector3Array &, const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_faces)>((new std::string("add_faces"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const Ref<NavigationMeshSourceGeometryData3D> &)>(&NavigationMeshSourceGeometryData3D::merge)>((new std::string("merge"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)(const PackedVector3Array &, double, double, bool)>(&NavigationMeshSourceGeometryData3D::add_projected_obstruction)>((new std::string("add_projected_obstruction"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::clear_projected_obstructions)>((new std::string("clear_projected_obstructions"))->c_str());
}