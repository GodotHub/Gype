#include "register/register_classes.h"
#include <godot_cpp/classes/shader_material.hpp>

using namespace godot;

void register_classes_ShaderMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ShaderMaterial>>("ShaderMaterialRef").constructor<ShaderMaterial *>();
}