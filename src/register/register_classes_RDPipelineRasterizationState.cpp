#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDPipelineRasterizationState() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDPipelineRasterizationState>("RDPipelineRasterizationState")
			.constructor<>()
			.property<&RDPipelineRasterizationState::get_enable_depth_clamp, &RDPipelineRasterizationState::set_enable_depth_clamp>("enable_depth_clamp")
			.property<&RDPipelineRasterizationState::get_discard_primitives, &RDPipelineRasterizationState::set_discard_primitives>("discard_primitives")
			.property<&RDPipelineRasterizationState::get_wireframe, &RDPipelineRasterizationState::set_wireframe>("wireframe")
			.property<&RDPipelineRasterizationState::get_cull_mode, &RDPipelineRasterizationState::set_cull_mode>("cull_mode")
			.property<&RDPipelineRasterizationState::get_front_face, &RDPipelineRasterizationState::set_front_face>("front_face")
			.property<&RDPipelineRasterizationState::get_depth_bias_enabled, &RDPipelineRasterizationState::set_depth_bias_enabled>("depth_bias_enabled")
			.property<&RDPipelineRasterizationState::get_depth_bias_constant_factor, &RDPipelineRasterizationState::set_depth_bias_constant_factor>("depth_bias_constant_factor")
			.property<&RDPipelineRasterizationState::get_depth_bias_clamp, &RDPipelineRasterizationState::set_depth_bias_clamp>("depth_bias_clamp")
			.property<&RDPipelineRasterizationState::get_depth_bias_slope_factor, &RDPipelineRasterizationState::set_depth_bias_slope_factor>("depth_bias_slope_factor")
			.property<&RDPipelineRasterizationState::get_line_width, &RDPipelineRasterizationState::set_line_width>("line_width")
			.property<&RDPipelineRasterizationState::get_patch_control_points, &RDPipelineRasterizationState::set_patch_control_points>("patch_control_points");
}