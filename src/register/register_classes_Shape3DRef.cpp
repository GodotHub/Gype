#include "register/register_classes.h"
#include <godot_cpp/classes/shape3d.hpp>

using namespace godot;

void register_classes_Shape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Shape3D>>("Shape3DRef").constructor<Shape3D *>();
}