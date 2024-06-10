#include "register/register_classes.h"
#include <godot_cpp/classes/shader.hpp>

using namespace godot;

void register_classes_ShaderRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Shader>>("ShaderRef").constructor<Shader *>();
}