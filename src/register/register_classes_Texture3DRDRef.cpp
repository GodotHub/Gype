#include "register/register_classes.h"
#include <godot_cpp/classes/texture3drd.hpp>

using namespace godot;

void register_classes_Texture3DRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture3DRD>>("Texture3DRDRef").constructor<Texture3DRD *>();
}