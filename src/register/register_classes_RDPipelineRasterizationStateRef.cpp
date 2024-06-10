#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>

using namespace godot;

void register_classes_RDPipelineRasterizationStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineRasterizationState>>("RDPipelineRasterizationStateRef").constructor<RDPipelineRasterizationState *>();
}