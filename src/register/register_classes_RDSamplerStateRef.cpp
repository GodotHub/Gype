#include "register/register_classes.h"
#include <godot_cpp/classes/rd_sampler_state.hpp>

using namespace godot;

void register_classes_RDSamplerStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDSamplerState>>("RDSamplerStateRef").constructor<RDSamplerState *>();
}