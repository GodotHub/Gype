#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rd_attachment_format.hpp>

using namespace godot;

void register_classes_RDAttachmentFormat() {
    qjs::Context::Module &_module = _General;
    _module.class_<RDAttachmentFormat>("RDAttachmentFormat")
           .constructor<>()
           .property<RDAttachmentFormat::get_format, RDAttachmentFormat::set_format>("format")
           .property<RDAttachmentFormat::get_samples, RDAttachmentFormat::set_samples>("samples")
           .property<RDAttachmentFormat::get_usage_flags, RDAttachmentFormat::set_usage_flags>("usage_flags")
;}