#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>

using namespace godot;

void register_classes_RDPipelineMultisampleStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineMultisampleState>>("RDPipelineMultisampleStateRef").constructor<RDPipelineMultisampleState *>();
}