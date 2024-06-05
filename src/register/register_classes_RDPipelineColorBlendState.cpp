#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDPipelineColorBlendState() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDPipelineColorBlendState>("RDPipelineColorBlendState")
			.constructor<>()
			.property<&RDPipelineColorBlendState::get_enable_logic_op, &RDPipelineColorBlendState::set_enable_logic_op>("enable_logic_op")
			.property<&RDPipelineColorBlendState::get_logic_op, &RDPipelineColorBlendState::set_logic_op>("logic_op")
			.property<&RDPipelineColorBlendState::get_blend_constant, &RDPipelineColorBlendState::set_blend_constant>("blend_constant")
			.property<&RDPipelineColorBlendState::get_attachments, &RDPipelineColorBlendState::set_attachments>("attachments");
}