#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>

using namespace godot;

void register_classes_RDPipelineColorBlendStateAttachmentRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineColorBlendStateAttachment>>("RDPipelineColorBlendStateAttachmentRef").constructor<RDPipelineColorBlendStateAttachment *>();
}