#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_material.hpp>

using namespace godot;

void register_classes_PlaceholderMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderMaterial>>("PlaceholderMaterialRef").constructor<PlaceholderMaterial *>();
}