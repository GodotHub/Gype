#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFDocumentExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFDocumentExtension>("GLTFDocumentExtension")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const PackedStringArray &)>(&GLTFDocumentExtension::_import_preflight)>((new std::string("_import_preflight"))->c_str())
			.fun<static_cast<PackedStringArray (GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_supported_extensions)>((new std::string("_get_supported_extensions"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<GLTFNode> &, const Dictionary &)>(&GLTFDocumentExtension::_parse_node_extensions)>((new std::string("_parse_node_extensions"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const PackedByteArray &, const String &, const Ref<Image> &)>(&GLTFDocumentExtension::_parse_image_data)>((new std::string("_parse_image_data"))->c_str())
			.fun<static_cast<String (GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_image_file_extension)>((new std::string("_get_image_file_extension"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Dictionary &, const Ref<GLTFTexture> &)>(&GLTFDocumentExtension::_parse_texture_json)>((new std::string("_parse_texture_json"))->c_str())
			.fun<static_cast<Node3D *(GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<GLTFNode> &, Node *)>(&GLTFDocumentExtension::_generate_scene_node)>((new std::string("_generate_scene_node"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_import_post_parse)>((new std::string("_import_post_parse"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<GLTFNode> &, const Dictionary &, Node *)>(&GLTFDocumentExtension::_import_node)>((new std::string("_import_node"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, Node *)>(&GLTFDocumentExtension::_import_post)>((new std::string("_import_post"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, Node *)>(&GLTFDocumentExtension::_export_preflight)>((new std::string("_export_preflight"))->c_str())
			.fun<static_cast<void (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<GLTFNode> &, Node *)>(&GLTFDocumentExtension::_convert_scene_node)>((new std::string("_convert_scene_node"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_export_preserialize)>((new std::string("_export_preserialize"))->c_str())
			.fun<static_cast<PackedStringArray (GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_saveable_image_formats)>((new std::string("_get_saveable_image_formats"))->c_str())
			.fun<static_cast<PackedByteArray (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<Image> &, const Dictionary &, const String &, double)>(&GLTFDocumentExtension::_serialize_image_to_bytes)>((new std::string("_serialize_image_to_bytes"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<Image> &, const String &, const String &, double)>(&GLTFDocumentExtension::_save_image_at_path)>((new std::string("_save_image_at_path"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Dictionary &, const Ref<GLTFTexture> &, const String &)>(&GLTFDocumentExtension::_serialize_texture_json)>((new std::string("_serialize_texture_json"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &, const Ref<GLTFNode> &, const Dictionary &, Node *)>(&GLTFDocumentExtension::_export_node)>((new std::string("_export_node"))->c_str())
			.fun<static_cast<Error (GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_export_post)>((new std::string("_export_post"))->c_str());
}