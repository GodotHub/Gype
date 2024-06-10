#include "register/register_classes.h"
#include <godot_cpp/classes/a_star2d.hpp>

using namespace godot;

void register_classes_AStar2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AStar2D>>("AStar2DRef").constructor<AStar2D *>();
}