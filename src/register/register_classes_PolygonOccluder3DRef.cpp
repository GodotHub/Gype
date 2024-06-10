#include "register/register_classes.h"
#include <godot_cpp/classes/polygon_occluder3d.hpp>

using namespace godot;

void register_classes_PolygonOccluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PolygonOccluder3D>>("PolygonOccluder3DRef").constructor<PolygonOccluder3D *>();
}