#include "register/register_classes.h"
#include <godot_cpp/classes/standard_material3d.hpp>

using namespace godot;

void register_classes_StandardMaterial3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StandardMaterial3D>>("StandardMaterial3DRef").constructor<StandardMaterial3D *>();
}