#include <godot_cpp/classes/gltf_mesh.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFMesh>("GLTFMesh")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFMesh::*)()>(&GLTFMesh::get_original_name), static_cast<void (GLTFMesh::*)(const String &)>(&GLTFMesh::set_original_name)>((new std::string("original_name"))->c_str())
			.property<static_cast<Ref<ImporterMesh> (GLTFMesh::*)()>(&GLTFMesh::get_mesh), static_cast<void (GLTFMesh::*)(const Ref<ImporterMesh> &)>(&GLTFMesh::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<PackedFloat32Array (GLTFMesh::*)()>(&GLTFMesh::get_blend_weights), static_cast<void (GLTFMesh::*)(const PackedFloat32Array &)>(&GLTFMesh::set_blend_weights)>((new std::string("blend_weights"))->c_str())
			.property<static_cast<TypedArray<Material> (GLTFMesh::*)()>(&GLTFMesh::get_instance_materials), static_cast<void (GLTFMesh::*)(const TypedArray<Material> &)>(&GLTFMesh::set_instance_materials)>((new std::string("instance_materials"))->c_str())
			.fun<static_cast<Variant (GLTFMesh::*)(const StringName &)>(&GLTFMesh::get_additional_data)>((new std::string("get_additional_data"))->c_str())
			.fun<static_cast<void (GLTFMesh::*)(const StringName &, const Variant &)>(&GLTFMesh::set_additional_data)>((new std::string("set_additional_data"))->c_str());
}