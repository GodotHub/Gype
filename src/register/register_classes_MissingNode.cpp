#include <godot_cpp/classes/missing_node.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MissingNode() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<MissingNode>("MissingNode")
            .constructor<>()
            .base<Node>()
            .property<static_cast<String(MissingNode::*)()const>(&MissingNode::get_original_class),static_cast<void(MissingNode::*)(const String &)>(&MissingNode::set_original_class)>("original_class")
            .property<static_cast<String(MissingNode::*)()const>(&MissingNode::get_original_scene),static_cast<void(MissingNode::*)(const String &)>(&MissingNode::set_original_scene)>("original_scene")
            .property<static_cast<bool(MissingNode::*)()const>(&MissingNode::is_recording_properties),static_cast<void(MissingNode::*)(bool)>(&MissingNode::set_recording_properties)>("recording_properties")
;}