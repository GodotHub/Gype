#include <godot_cpp/classes/missing_node.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_MissingNode() {
	qjs::Context::Module &_module = _Node;
	_module.class_<MissingNode>("MissingNode")
			.constructor<>()
			.property<&MissingNode::get_original_class, &MissingNode::set_original_class>("original_class")
			.property<&MissingNode::is_recording_properties, &MissingNode::set_recording_properties>("recording_properties");
}