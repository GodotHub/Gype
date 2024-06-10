#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_polygon.hpp>

using namespace godot;

void register_classes_NavigationPolygonRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationPolygon>>("NavigationPolygonRef").constructor<NavigationPolygon *>();
}