#include "register/register_classes.h"
#include <godot_cpp/classes/a_star_grid2d.hpp>

using namespace godot;

void register_classes_AStarGrid2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AStarGrid2D>>("AStarGrid2DRef").constructor<AStarGrid2D *>();
}