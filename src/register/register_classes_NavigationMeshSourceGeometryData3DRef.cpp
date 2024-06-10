#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationMeshSourceGeometryData3D>>("NavigationMeshSourceGeometryData3DRef").constructor<NavigationMeshSourceGeometryData3D *>();
}