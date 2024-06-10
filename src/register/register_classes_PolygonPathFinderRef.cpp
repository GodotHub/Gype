#include "register/register_classes.h"
#include <godot_cpp/classes/polygon_path_finder.hpp>

using namespace godot;

void register_classes_PolygonPathFinderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PolygonPathFinder>>("PolygonPathFinderRef").constructor<PolygonPathFinder *>();
}