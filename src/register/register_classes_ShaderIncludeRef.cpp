#include "register/register_classes.h"
#include <godot_cpp/classes/shader_include.hpp>

using namespace godot;

void register_classes_ShaderIncludeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ShaderInclude>>("ShaderIncludeRef").constructor<ShaderInclude *>();
}