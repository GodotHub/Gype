#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>

using namespace godot;

void register_classes_NavigationMeshSourceGeometryData2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationMeshSourceGeometryData2D>>("NavigationMeshSourceGeometryData2DRef").constructor<NavigationMeshSourceGeometryData2D *>();
}