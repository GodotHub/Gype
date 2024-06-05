#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDPipelineColorBlendStateAttachment() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDPipelineColorBlendStateAttachment>("RDPipelineColorBlendStateAttachment")
			.constructor<>()
			.property<&RDPipelineColorBlendStateAttachment::get_enable_blend, &RDPipelineColorBlendStateAttachment::set_enable_blend>("enable_blend")
			.property<&RDPipelineColorBlendStateAttachment::get_src_color_blend_factor, &RDPipelineColorBlendStateAttachment::set_src_color_blend_factor>("src_color_blend_factor")
			.property<&RDPipelineColorBlendStateAttachment::get_dst_color_blend_factor, &RDPipelineColorBlendStateAttachment::set_dst_color_blend_factor>("dst_color_blend_factor")
			.property<&RDPipelineColorBlendStateAttachment::get_color_blend_op, &RDPipelineColorBlendStateAttachment::set_color_blend_op>("color_blend_op")
			.property<&RDPipelineColorBlendStateAttachment::get_src_alpha_blend_factor, &RDPipelineColorBlendStateAttachment::set_src_alpha_blend_factor>("src_alpha_blend_factor")
			.property<&RDPipelineColorBlendStateAttachment::get_dst_alpha_blend_factor, &RDPipelineColorBlendStateAttachment::set_dst_alpha_blend_factor>("dst_alpha_blend_factor")
			.property<&RDPipelineColorBlendStateAttachment::get_alpha_blend_op, &RDPipelineColorBlendStateAttachment::set_alpha_blend_op>("alpha_blend_op")
			.property<&RDPipelineColorBlendStateAttachment::get_write_r, &RDPipelineColorBlendStateAttachment::set_write_r>("write_r")
			.property<&RDPipelineColorBlendStateAttachment::get_write_g, &RDPipelineColorBlendStateAttachment::set_write_g>("write_g")
			.property<&RDPipelineColorBlendStateAttachment::get_write_b, &RDPipelineColorBlendStateAttachment::set_write_b>("write_b")
			.property<&RDPipelineColorBlendStateAttachment::get_write_a, &RDPipelineColorBlendStateAttachment::set_write_a>("write_a")
			.fun<static_cast<void (RDPipelineColorBlendStateAttachment::*)()>(&RDPipelineColorBlendStateAttachment::set_as_mix)>("set_as_mix");
}