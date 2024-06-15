#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFDocument() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFDocument>("GLTFDocument")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(GLTFDocument::*)()const>(&GLTFDocument::get_image_format),static_cast<void(GLTFDocument::*)(const String &)>(&GLTFDocument::set_image_format)>("image_format")
            .property<static_cast<double(GLTFDocument::*)()const>(&GLTFDocument::get_lossy_quality),static_cast<void(GLTFDocument::*)(double)>(&GLTFDocument::set_lossy_quality)>("lossy_quality")
            .property<static_cast<GLTFDocument::RootNodeMode(GLTFDocument::*)()const>(&GLTFDocument::get_root_node_mode),static_cast<void(GLTFDocument::*)(GLTFDocument::RootNodeMode)>(&GLTFDocument::set_root_node_mode)>("root_node_mode")
            .fun<static_cast<Error(GLTFDocument::*)(const String &,const Ref<GLTFState> &,uint32_t,const String &)>(&GLTFDocument::append_from_file)>("append_from_file")
            .fun<static_cast<Error(GLTFDocument::*)(const PackedByteArray &,const String &,const Ref<GLTFState> &,uint32_t)>(&GLTFDocument::append_from_buffer)>("append_from_buffer")
            .fun<static_cast<Error(GLTFDocument::*)(Node *,const Ref<GLTFState> &,uint32_t)>(&GLTFDocument::append_from_scene)>("append_from_scene")
            .fun<static_cast<Node *(GLTFDocument::*)(const Ref<GLTFState> &,double,bool,bool)>(&GLTFDocument::generate_scene)>("generate_scene")
            .fun<static_cast<PackedByteArray(GLTFDocument::*)(const Ref<GLTFState> &)>(&GLTFDocument::generate_buffer)>("generate_buffer")
            .fun<static_cast<Error(GLTFDocument::*)(const Ref<GLTFState> &,const String &)>(&GLTFDocument::write_to_filesystem)>("write_to_filesystem")
            .static_fun<static_cast<void(*)(const Ref<GLTFDocumentExtension> &,bool)>(&GLTFDocument::register_gltf_document_extension)>("register_gltf_document_extension")
            .static_fun<static_cast<void(*)(const Ref<GLTFDocumentExtension> &)>(&GLTFDocument::unregister_gltf_document_extension)>("unregister_gltf_document_extension")
;    qjs::Value _RootNodeMode = context->newObject();
    _RootNodeMode["ROOT_NODE_MODE_SINGLE_ROOT"] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_SINGLE_ROOT;
    _RootNodeMode["ROOT_NODE_MODE_KEEP_ROOT"] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_KEEP_ROOT;
    _RootNodeMode["ROOT_NODE_MODE_MULTI_ROOT"] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_MULTI_ROOT;
    _module.add("RootNodeMode", std::move(_RootNodeMode));
}