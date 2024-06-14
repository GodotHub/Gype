
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFDocument() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFDocument>("GLTFDocument")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFDocument::*)() const>(&GLTFDocument::get_image_format), static_cast<void (GLTFDocument::*)(const String &)>(&GLTFDocument::set_image_format)>((new std::string("image_format"))->c_str())
			.property<static_cast<double (GLTFDocument::*)() const>(&GLTFDocument::get_lossy_quality), static_cast<void (GLTFDocument::*)(double)>(&GLTFDocument::set_lossy_quality)>((new std::string("lossy_quality"))->c_str())
			.property<static_cast<GLTFDocument::RootNodeMode (GLTFDocument::*)() const>(&GLTFDocument::get_root_node_mode), static_cast<void (GLTFDocument::*)(GLTFDocument::RootNodeMode)>(&GLTFDocument::set_root_node_mode)>((new std::string("root_node_mode"))->c_str())
			.fun<static_cast<Error (GLTFDocument::*)(const String &, const Ref<GLTFState> &, uint32_t, const String &)>(&GLTFDocument::append_from_file)>((new std::string("append_from_file"))->c_str())
			.fun<static_cast<Error (GLTFDocument::*)(const PackedByteArray &, const String &, const Ref<GLTFState> &, uint32_t)>(&GLTFDocument::append_from_buffer)>((new std::string("append_from_buffer"))->c_str())
			.fun<static_cast<Error (GLTFDocument::*)(Node *, const Ref<GLTFState> &, uint32_t)>(&GLTFDocument::append_from_scene)>((new std::string("append_from_scene"))->c_str())
			.fun<static_cast<Node *(GLTFDocument::*)(const Ref<GLTFState> &, double, bool, bool)>(&GLTFDocument::generate_scene)>((new std::string("generate_scene"))->c_str())
			.fun<static_cast<PackedByteArray (GLTFDocument::*)(const Ref<GLTFState> &)>(&GLTFDocument::generate_buffer)>((new std::string("generate_buffer"))->c_str())
			.fun<static_cast<Error (GLTFDocument::*)(const Ref<GLTFState> &, const String &)>(&GLTFDocument::write_to_filesystem)>((new std::string("write_to_filesystem"))->c_str())
			.static_fun<static_cast<void (*)(const Ref<GLTFDocumentExtension> &, bool)>(&GLTFDocument::register_gltf_document_extension)>((new std::string("register_gltf_document_extension"))->c_str())
			.static_fun<static_cast<void (*)(const Ref<GLTFDocumentExtension> &)>(&GLTFDocument::unregister_gltf_document_extension)>((new std::string("unregister_gltf_document_extension"))->c_str());
	qjs::Value _RootNodeMode = context->newObject();
	_RootNodeMode[(new std::string("ROOT_NODE_MODE_SINGLE_ROOT"))->c_str()] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_SINGLE_ROOT;
	_RootNodeMode[(new std::string("ROOT_NODE_MODE_KEEP_ROOT"))->c_str()] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_KEEP_ROOT;
	_RootNodeMode[(new std::string("ROOT_NODE_MODE_MULTI_ROOT"))->c_str()] = GLTFDocument::RootNodeMode::ROOT_NODE_MODE_MULTI_ROOT;
	_module.add("RootNodeMode", std::move(_RootNodeMode));
}