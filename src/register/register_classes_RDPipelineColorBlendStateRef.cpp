#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>

using namespace godot;

void register_classes_RDPipelineColorBlendStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineColorBlendState>>("RDPipelineColorBlendStateRef").constructor<RDPipelineColorBlendState *>();
}