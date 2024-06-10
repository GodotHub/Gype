#include "register/register_classes.h"
#include <godot_cpp/classes/rd_shader_file.hpp>

using namespace godot;

void register_classes_RDShaderFileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDShaderFile>>("RDShaderFileRef").constructor<RDShaderFile *>();
}