#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<NavigationMeshSourceGeometryData3D>("NavigationMeshSourceGeometryData3D")
           .constructor<>()
           .property<NavigationMeshSourceGeometryData3D::get_vertices, NavigationMeshSourceGeometryData3D::set_vertices>("vertices")
           .property<NavigationMeshSourceGeometryData3D::get_indices, NavigationMeshSourceGeometryData3D::set_indices>("indices")
		    .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::clear)>("clear")
		    .fun<static_cast<bool(NavigationMeshSourceGeometryData3D::*)()>(&NavigationMeshSourceGeometryData3D::has_data)>("has_data")
		    .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Ref<Mesh> &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh)>("add_mesh")
		    .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const Array &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_mesh_array)>("add_mesh_array")
		    .fun<static_cast<void(NavigationMeshSourceGeometryData3D::*)(const PackedVector3Array &,const Transform3D &)>(&NavigationMeshSourceGeometryData3D::add_faces)>("add_faces")
;}