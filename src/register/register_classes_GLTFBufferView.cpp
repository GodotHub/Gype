
#include <godot_cpp/classes/gltf_buffer_view.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFBufferView() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFBufferView>("GLTFBufferView")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<int32_t (GLTFBufferView::*)() const>(&GLTFBufferView::get_buffer), static_cast<void (GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_buffer)>((new std::string("buffer"))->c_str())
			.property<static_cast<int32_t (GLTFBufferView::*)() const>(&GLTFBufferView::get_byte_offset), static_cast<void (GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_offset)>((new std::string("byte_offset"))->c_str())
			.property<static_cast<int32_t (GLTFBufferView::*)() const>(&GLTFBufferView::get_byte_length), static_cast<void (GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_length)>((new std::string("byte_length"))->c_str())
			.property<static_cast<int32_t (GLTFBufferView::*)() const>(&GLTFBufferView::get_byte_stride), static_cast<void (GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_stride)>((new std::string("byte_stride"))->c_str())
			.property<static_cast<bool (GLTFBufferView::*)() const>(&GLTFBufferView::get_indices), static_cast<void (GLTFBufferView::*)(bool)>(&GLTFBufferView::set_indices)>((new std::string("indices"))->c_str())
			.property<static_cast<bool (GLTFBufferView::*)() const>(&GLTFBufferView::get_vertex_attributes), static_cast<void (GLTFBufferView::*)(bool)>(&GLTFBufferView::set_vertex_attributes)>((new std::string("vertex_attributes"))->c_str())
			.fun<static_cast<PackedByteArray (GLTFBufferView::*)(const Ref<GLTFState> &) const>(&GLTFBufferView::load_buffer_view_data)>((new std::string("load_buffer_view_data"))->c_str());
}