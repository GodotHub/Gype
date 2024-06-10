#include "register/register_classes.h"
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>

using namespace godot;

void register_classes_ConcavePolygonShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ConcavePolygonShape3D>>("ConcavePolygonShape3DRef").constructor<ConcavePolygonShape3D *>();
}