#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData3D() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<NavigationMeshSourceGeometryData3D>("NavigationMeshSourceGeometryData3D")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<PackedFloat32Array(NavigationMeshSourceGeometryData3D::*)()const>(&NavigationMeshSourceGeometryData3D::get_vertices),static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedFloat32Array &)>(&NavigationMeshSourceGeometryData3D::set_vertices)>("vertices")
            .property<static_cast<PackedInt32Array(NavigationMeshSourceGeometryData3D::*)()const>(&NavigationMeshSourceGeometryData3D::get_indices),static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedInt32Array &)>(&NavigationMeshSourceGeometryData3D::set_indices)>("indices")
            .property<static_cast<Array(NavigationMeshSourceGeometryData3D::*)()const>(&NavigationMeshSourceGeometryData3D::get_projected_obstructions),static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Array &)>(&NavigationMeshSourceGeometryData3D::set_projected_obstructions)>("projected_obstructions")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedFloat32Array &,const PackedInt32Array &)>(&NavigationMeshSourceGeometryData3D::append_arrays)>("append_arrays")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::clear)>("clear")
            .fun<static_cast<bool(NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::has_data)>("has_data")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Ref<Mesh> &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh)>("add_mesh")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Array &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh_array)>("add_mesh_array")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedVector3Array &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_faces)>("add_faces")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Ref<NavigationMeshSourceGeometryData3D> &)>(&NavigationMeshSourceGeometryData3D::merge)>("merge")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedVector3Array &,double,double,bool)>(&NavigationMeshSourceGeometryData3D::add_projected_obstruction)>("add_projected_obstruction")
            .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::clear_projected_obstructions)>("clear_projected_obstructions")
;}