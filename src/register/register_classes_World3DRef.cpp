#include "register/register_classes.h"
#include <godot_cpp/classes/world3d.hpp>

using namespace godot;

void register_classes_World3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<World3D>>("World3DRef").constructor<World3D *>();
}