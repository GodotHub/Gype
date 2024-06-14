
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDFramebufferPass() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDFramebufferPass>("RDFramebufferPass")
			.constructor<>()
			.base<RefCounted>()
			.static_fun<&RDFramebufferPass::ATTACHMENT_UNUSED>((new std::string("ATTACHMENT_UNUSED"))->c_str())
			.property<static_cast<PackedInt32Array (RDFramebufferPass::*)() const>(&RDFramebufferPass::get_color_attachments), static_cast<void (RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_color_attachments)>((new std::string("color_attachments"))->c_str())
			.property<static_cast<PackedInt32Array (RDFramebufferPass::*)() const>(&RDFramebufferPass::get_input_attachments), static_cast<void (RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_input_attachments)>((new std::string("input_attachments"))->c_str())
			.property<static_cast<PackedInt32Array (RDFramebufferPass::*)() const>(&RDFramebufferPass::get_resolve_attachments), static_cast<void (RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_resolve_attachments)>((new std::string("resolve_attachments"))->c_str())
			.property<static_cast<PackedInt32Array (RDFramebufferPass::*)() const>(&RDFramebufferPass::get_preserve_attachments), static_cast<void (RDFramebufferPass::*)(const PackedInt32Array &)>(&RDFramebufferPass::set_preserve_attachments)>((new std::string("preserve_attachments"))->c_str())
			.property<static_cast<int32_t (RDFramebufferPass::*)() const>(&RDFramebufferPass::get_depth_attachment), static_cast<void (RDFramebufferPass::*)(int32_t)>(&RDFramebufferPass::set_depth_attachment)>((new std::string("depth_attachment"))->c_str());
}