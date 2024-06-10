#include <godot_cpp/classes/rd_attachment_format.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDAttachmentFormat() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDAttachmentFormat>("RDAttachmentFormat")
			.constructor<>()
			.property<&RDAttachmentFormat::get_format, &RDAttachmentFormat::set_format>("format")
			.property<&RDAttachmentFormat::get_samples, &RDAttachmentFormat::set_samples>("samples")
			.property<&RDAttachmentFormat::get_usage_flags, &RDAttachmentFormat::set_usage_flags>("usage_flags");
}