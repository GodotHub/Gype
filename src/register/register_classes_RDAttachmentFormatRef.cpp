#include "register/register_classes.h"
#include <godot_cpp/classes/rd_attachment_format.hpp>

using namespace godot;

void register_classes_RDAttachmentFormatRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDAttachmentFormat>>("RDAttachmentFormatRef").constructor<RDAttachmentFormat *>();
}