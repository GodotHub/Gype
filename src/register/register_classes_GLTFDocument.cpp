#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_document.hpp>

using namespace godot;

void register_classes_GLTFDocument() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFDocument>("GLTFDocument")
           .constructor<>()
           .property<GLTFDocument::get_image_format, GLTFDocument::set_image_format>("image_format")
           .property<GLTFDocument::get_lossy_quality, GLTFDocument::set_lossy_quality>("lossy_quality")
           .property<GLTFDocument::get_root_node_mode, GLTFDocument::set_root_node_mode>("root_node_mode")
		    .fun<static_cast<Error(GLTFDocument::*)(const String &,const Ref<GLTFState> &,uint32_t,const String &)>(&GLTFDocument::append_from_file)>("append_from_file")
		    .fun<static_cast<Error(GLTFDocument::*)(const PackedByteArray &,const String &,const Ref<GLTFState> &,uint32_t)>(&GLTFDocument::append_from_buffer)>("append_from_buffer")
		    .fun<static_cast<Error(GLTFDocument::*)(Node *,const Ref<GLTFState> &,uint32_t)>(&GLTFDocument::append_from_scene)>("append_from_scene")
		    .fun<static_cast<Node *(GLTFDocument::*)(const Ref<GLTFState> &,double,bool,bool)>(&GLTFDocument::generate_scene)>("generate_scene")
		    .fun<static_cast<PackedByteArray(GLTFDocument::*)(const Ref<GLTFState> &)>(&GLTFDocument::generate_buffer)>("generate_buffer")
		    .fun<static_cast<Error(GLTFDocument::*)(const Ref<GLTFState> &,const String &)>(&GLTFDocument::write_to_filesystem)>("write_to_filesystem")
            .static_fun<GLTFDocument::register_gltf_document_extension>("register_gltf_document_extension")
            .static_fun<GLTFDocument::unregister_gltf_document_extension>("unregister_gltf_document_extension")
;}