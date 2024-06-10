#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFNode() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFNode>("GLTFNode")
			.constructor<>()
			.property<&GLTFNode::get_parent, &GLTFNode::set_parent>("parent")
			.property<&GLTFNode::get_height, &GLTFNode::set_height>("height")
			.property<&GLTFNode::get_xform, &GLTFNode::set_xform>("xform")
			.property<&GLTFNode::get_mesh, &GLTFNode::set_mesh>("mesh")
			.property<&GLTFNode::get_camera, &GLTFNode::set_camera>("camera")
			.property<&GLTFNode::get_skin, &GLTFNode::set_skin>("skin")
			.property<&GLTFNode::get_skeleton, &GLTFNode::set_skeleton>("skeleton")
			.property<&GLTFNode::get_position, &GLTFNode::set_position>("position")
			.property<&GLTFNode::get_rotation, &GLTFNode::set_rotation>("rotation")
			.property<&GLTFNode::get_scale, &GLTFNode::set_scale>("scale")
			.property<&GLTFNode::get_children, &GLTFNode::set_children>("children")
			.property<&GLTFNode::get_light, &GLTFNode::set_light>("light")
			.fun<static_cast<Variant (GLTFNode::*)(const StringName &)>(&GLTFNode::get_additional_data)>("get_additional_data")
			.fun<static_cast<void (GLTFNode::*)(const StringName &, const Variant &)>(&GLTFNode::set_additional_data)>("set_additional_data");
}