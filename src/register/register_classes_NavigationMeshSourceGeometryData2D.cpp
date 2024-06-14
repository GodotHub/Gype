#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationMeshSourceGeometryData2D>("NavigationMeshSourceGeometryData2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<TypedArray<PackedVector2Array> (NavigationMeshSourceGeometryData2D::*)() const>(&NavigationMeshSourceGeometryData2D::get_traversable_outlines), static_cast<void (NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::set_traversable_outlines)>((new std::string("traversable_outlines"))->c_str())
			.property<static_cast<TypedArray<PackedVector2Array> (NavigationMeshSourceGeometryData2D::*)() const>(&NavigationMeshSourceGeometryData2D::get_obstruction_outlines), static_cast<void (NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::set_obstruction_outlines)>((new std::string("obstruction_outlines"))->c_str())
			.property<static_cast<Array (NavigationMeshSourceGeometryData2D::*)() const>(&NavigationMeshSourceGeometryData2D::get_projected_obstructions), static_cast<void (NavigationMeshSourceGeometryData2D::*)(const Array &)>(&NavigationMeshSourceGeometryData2D::set_projected_obstructions)>((new std::string("projected_obstructions"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<bool (NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::has_data)>((new std::string("has_data"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::append_traversable_outlines)>((new std::string("append_traversable_outlines"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::append_obstruction_outlines)>((new std::string("append_obstruction_outlines"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_traversable_outline)>((new std::string("add_traversable_outline"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_obstruction_outline)>((new std::string("add_obstruction_outline"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const Ref<NavigationMeshSourceGeometryData2D> &)>(&NavigationMeshSourceGeometryData2D::merge)>((new std::string("merge"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &, bool)>(&NavigationMeshSourceGeometryData2D::add_projected_obstruction)>((new std::string("add_projected_obstruction"))->c_str())
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::clear_projected_obstructions)>((new std::string("clear_projected_obstructions"))->c_str());
}