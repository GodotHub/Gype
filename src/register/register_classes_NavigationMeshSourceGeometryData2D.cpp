#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_NavigationMeshSourceGeometryData2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<NavigationMeshSourceGeometryData2D>("NavigationMeshSourceGeometryData2D")
			.constructor<>()
			.property<&NavigationMeshSourceGeometryData2D::get_traversable_outlines, &NavigationMeshSourceGeometryData2D::set_traversable_outlines>("traversable_outlines")
			.property<&NavigationMeshSourceGeometryData2D::get_obstruction_outlines, &NavigationMeshSourceGeometryData2D::set_obstruction_outlines>("obstruction_outlines")
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::clear)>("clear")
			.fun<static_cast<bool (NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::has_data)>("has_data")
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_traversable_outline)>("add_traversable_outline")
			.fun<static_cast<void (NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_obstruction_outline)>("add_obstruction_outline");
}