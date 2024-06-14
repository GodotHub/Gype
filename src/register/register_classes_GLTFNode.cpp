
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFNode() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFNode>("GLTFNode")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFNode::*)()>(&GLTFNode::get_original_name), static_cast<void (GLTFNode::*)(const String &)>(&GLTFNode::set_original_name)>((new std::string("original_name"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_parent), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_parent)>((new std::string("parent"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_height), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<Transform3D (GLTFNode::*)()>(&GLTFNode::get_xform), static_cast<void (GLTFNode::*)(const Transform3D &)>(&GLTFNode::set_xform)>((new std::string("xform"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_mesh), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_camera), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_camera)>((new std::string("camera"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_skin), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_skin)>((new std::string("skin"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_skeleton), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_skeleton)>((new std::string("skeleton"))->c_str())
			.property<static_cast<Vector3 (GLTFNode::*)()>(&GLTFNode::get_position), static_cast<void (GLTFNode::*)(const Vector3 &)>(&GLTFNode::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<Quaternion (GLTFNode::*)()>(&GLTFNode::get_rotation), static_cast<void (GLTFNode::*)(const Quaternion &)>(&GLTFNode::set_rotation)>((new std::string("rotation"))->c_str())
			.property<static_cast<Vector3 (GLTFNode::*)()>(&GLTFNode::get_scale), static_cast<void (GLTFNode::*)(const Vector3 &)>(&GLTFNode::set_scale)>((new std::string("scale"))->c_str())
			.property<static_cast<PackedInt32Array (GLTFNode::*)()>(&GLTFNode::get_children), static_cast<void (GLTFNode::*)(const PackedInt32Array &)>(&GLTFNode::set_children)>((new std::string("children"))->c_str())
			.property<static_cast<int32_t (GLTFNode::*)()>(&GLTFNode::get_light), static_cast<void (GLTFNode::*)(int32_t)>(&GLTFNode::set_light)>((new std::string("light"))->c_str())
			.fun<static_cast<Variant (GLTFNode::*)(const StringName &)>(&GLTFNode::get_additional_data)>((new std::string("get_additional_data"))->c_str())
			.fun<static_cast<void (GLTFNode::*)(const StringName &, const Variant &)>(&GLTFNode::set_additional_data)>((new std::string("set_additional_data"))->c_str());
}