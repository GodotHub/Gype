#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineMultisampleState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineMultisampleState>("RDPipelineMultisampleState")
			.constructor<>()
			.property<&RDPipelineMultisampleState::get_sample_count, &RDPipelineMultisampleState::set_sample_count>("sample_count")
			.property<&RDPipelineMultisampleState::get_enable_sample_shading, &RDPipelineMultisampleState::set_enable_sample_shading>("enable_sample_shading")
			.property<&RDPipelineMultisampleState::get_min_sample_shading, &RDPipelineMultisampleState::set_min_sample_shading>("min_sample_shading")
			.property<&RDPipelineMultisampleState::get_enable_alpha_to_coverage, &RDPipelineMultisampleState::set_enable_alpha_to_coverage>("enable_alpha_to_coverage")
			.property<&RDPipelineMultisampleState::get_enable_alpha_to_one, &RDPipelineMultisampleState::set_enable_alpha_to_one>("enable_alpha_to_one")
			.property<&RDPipelineMultisampleState::get_sample_masks, &RDPipelineMultisampleState::set_sample_masks>("sample_masks");
}