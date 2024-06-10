#include "register/register_classes.h"
#include <godot_cpp/classes/world2d.hpp>

using namespace godot;

void register_classes_World2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<World2D>>("World2DRef").constructor<World2D *>();
}