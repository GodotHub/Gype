#include "register/register_classes.h"
#include <godot_cpp/classes/texture2drd.hpp>

using namespace godot;

void register_classes_Texture2DRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture2DRD>>("Texture2DRDRef").constructor<Texture2DRD *>();
}