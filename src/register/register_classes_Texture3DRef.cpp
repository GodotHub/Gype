#include "register/register_classes.h"
#include <godot_cpp/classes/texture3d.hpp>

using namespace godot;

void register_classes_Texture3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture3D>>("Texture3DRef").constructor<Texture3D *>();
}