#include "register/register_classes.h"
#include <godot_cpp/classes/rd_shader_spirv.hpp>

using namespace godot;

void register_classes_RDShaderSPIRVRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDShaderSPIRV>>("RDShaderSPIRVRef").constructor<RDShaderSPIRV *>();
}