#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFDocumentExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFDocumentExtension>("GLTFDocumentExtension")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const PackedStringArray &)>(&GLTFDocumentExtension::_import_preflight)>("_import_preflight")
            .fun<static_cast<PackedStringArray(GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_supported_extensions)>("_get_supported_extensions")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<GLTFNode> &,const Dictionary &)>(&GLTFDocumentExtension::_parse_node_extensions)>("_parse_node_extensions")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const PackedByteArray &,const String &,const Ref<Image> &)>(&GLTFDocumentExtension::_parse_image_data)>("_parse_image_data")
            .fun<static_cast<String(GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_image_file_extension)>("_get_image_file_extension")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Dictionary &,const Ref<GLTFTexture> &)>(&GLTFDocumentExtension::_parse_texture_json)>("_parse_texture_json")
            .fun<static_cast<Node3D *(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<GLTFNode> &,Node *)>(&GLTFDocumentExtension::_generate_scene_node)>("_generate_scene_node")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_import_post_parse)>("_import_post_parse")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<GLTFNode> &,const Dictionary &,Node *)>(&GLTFDocumentExtension::_import_node)>("_import_node")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,Node *)>(&GLTFDocumentExtension::_import_post)>("_import_post")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,Node *)>(&GLTFDocumentExtension::_export_preflight)>("_export_preflight")
            .fun<static_cast<void(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<GLTFNode> &,Node *)>(&GLTFDocumentExtension::_convert_scene_node)>("_convert_scene_node")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_export_preserialize)>("_export_preserialize")
            .fun<static_cast<PackedStringArray(GLTFDocumentExtension::*)()>(&GLTFDocumentExtension::_get_saveable_image_formats)>("_get_saveable_image_formats")
            .fun<static_cast<PackedByteArray(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<Image> &,const Dictionary &,const String &,double)>(&GLTFDocumentExtension::_serialize_image_to_bytes)>("_serialize_image_to_bytes")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<Image> &,const String &,const String &,double)>(&GLTFDocumentExtension::_save_image_at_path)>("_save_image_at_path")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Dictionary &,const Ref<GLTFTexture> &,const String &)>(&GLTFDocumentExtension::_serialize_texture_json)>("_serialize_texture_json")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &,const Ref<GLTFNode> &,const Dictionary &,Node *)>(&GLTFDocumentExtension::_export_node)>("_export_node")
            .fun<static_cast<Error(GLTFDocumentExtension::*)(const Ref<GLTFState> &)>(&GLTFDocumentExtension::_export_post)>("_export_post")
;}