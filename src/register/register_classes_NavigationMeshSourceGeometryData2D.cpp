#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData2D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationMeshSourceGeometryData2D>("NavigationMeshSourceGeometryData2D")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<TypedArray<PackedVector2Array>(NavigationMeshSourceGeometryData2D::*)()const>(&NavigationMeshSourceGeometryData2D::get_traversable_outlines),static_cast<void(NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::set_traversable_outlines)>("traversable_outlines")
            .property<static_cast<TypedArray<PackedVector2Array>(NavigationMeshSourceGeometryData2D::*)()const>(&NavigationMeshSourceGeometryData2D::get_obstruction_outlines),static_cast<void(NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::set_obstruction_outlines)>("obstruction_outlines")
            .property<static_cast<Array(NavigationMeshSourceGeometryData2D::*)()const>(&NavigationMeshSourceGeometryData2D::get_projected_obstructions),static_cast<void(NavigationMeshSourceGeometryData2D::*)(const Array &)>(&NavigationMeshSourceGeometryData2D::set_projected_obstructions)>("projected_obstructions")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::clear)>("clear")
            .fun<static_cast<bool(NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::has_data)>("has_data")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::append_traversable_outlines)>("append_traversable_outlines")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const TypedArray<PackedVector2Array> &)>(&NavigationMeshSourceGeometryData2D::append_obstruction_outlines)>("append_obstruction_outlines")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_traversable_outline)>("add_traversable_outline")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &)>(&NavigationMeshSourceGeometryData2D::add_obstruction_outline)>("add_obstruction_outline")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const Ref<NavigationMeshSourceGeometryData2D> &)>(&NavigationMeshSourceGeometryData2D::merge)>("merge")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)(const PackedVector2Array &,bool)>(&NavigationMeshSourceGeometryData2D::add_projected_obstruction)>("add_projected_obstruction")
            .fun<static_cast<void(NavigationMeshSourceGeometryData2D::*)()>(&NavigationMeshSourceGeometryData2D::clear_projected_obstructions)>("clear_projected_obstructions")
;}