#include "register/register_classes.h"
#include <godot_cpp/classes/rd_shader_source.hpp>

using namespace godot;

void register_classes_RDShaderSourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDShaderSource>>("RDShaderSourceRef").constructor<RDShaderSource *>();
}