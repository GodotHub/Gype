#include "register/register_classes.h"
#include <godot_cpp/classes/occluder_polygon2d.hpp>

using namespace godot;

void register_classes_OccluderPolygon2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OccluderPolygon2D>>("OccluderPolygon2DRef").constructor<OccluderPolygon2D *>();
}