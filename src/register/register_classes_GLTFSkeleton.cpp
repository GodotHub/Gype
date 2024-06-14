
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFSkeleton() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFSkeleton>("GLTFSkeleton")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<PackedInt32Array (GLTFSkeleton::*)()>(&GLTFSkeleton::get_joints), static_cast<void (GLTFSkeleton::*)(const PackedInt32Array &)>(&GLTFSkeleton::set_joints)>((new std::string("joints"))->c_str())
			.property<static_cast<PackedInt32Array (GLTFSkeleton::*)()>(&GLTFSkeleton::get_roots), static_cast<void (GLTFSkeleton::*)(const PackedInt32Array &)>(&GLTFSkeleton::set_roots)>((new std::string("roots"))->c_str())
			.property<static_cast<TypedArray<String> (GLTFSkeleton::*)()>(&GLTFSkeleton::get_unique_names), static_cast<void (GLTFSkeleton::*)(const TypedArray<String> &)>(&GLTFSkeleton::set_unique_names)>((new std::string("unique_names"))->c_str())
			.property<static_cast<Dictionary (GLTFSkeleton::*)()>(&GLTFSkeleton::get_godot_bone_node), static_cast<void (GLTFSkeleton::*)(const Dictionary &)>(&GLTFSkeleton::set_godot_bone_node)>((new std::string("godot_bone_node"))->c_str())
			.fun<static_cast<Skeleton3D *(GLTFSkeleton::*)()>(&GLTFSkeleton::get_godot_skeleton)>((new std::string("get_godot_skeleton"))->c_str())
			.fun<static_cast<int32_t (GLTFSkeleton::*)()>(&GLTFSkeleton::get_bone_attachment_count)>((new std::string("get_bone_attachment_count"))->c_str())
			.fun<static_cast<BoneAttachment3D *(GLTFSkeleton::*)(int32_t)>(&GLTFSkeleton::get_bone_attachment)>((new std::string("get_bone_attachment"))->c_str());
}