#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>

using namespace godot;

void register_classes_RDPipelineDepthStencilStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineDepthStencilState>>("RDPipelineDepthStencilStateRef").constructor<RDPipelineDepthStencilState *>();
}