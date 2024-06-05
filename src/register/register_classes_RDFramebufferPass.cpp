#include <godot_cpp/classes/rd_framebuffer_pass.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RDFramebufferPass() {
	qjs::Context::Module &_module = _General;
	_module.class_<RDFramebufferPass>("RDFramebufferPass")
			.constructor<>()
			.property<&RDFramebufferPass::get_color_attachments, &RDFramebufferPass::set_color_attachments>("color_attachments")
			.property<&RDFramebufferPass::get_input_attachments, &RDFramebufferPass::set_input_attachments>("input_attachments")
			.property<&RDFramebufferPass::get_resolve_attachments, &RDFramebufferPass::set_resolve_attachments>("resolve_attachments")
			.property<&RDFramebufferPass::get_preserve_attachments, &RDFramebufferPass::set_preserve_attachments>("preserve_attachments")
			.property<&RDFramebufferPass::get_depth_attachment, &RDFramebufferPass::set_depth_attachment>("depth_attachment");
}