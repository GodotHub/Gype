#include "register/register_classes.h"
#include <godot_cpp/classes/rd_uniform.hpp>

using namespace godot;

void register_classes_RDUniformRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDUniform>>("RDUniformRef").constructor<RDUniform *>();
}