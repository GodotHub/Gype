#include <godot_cpp/classes/gltf_buffer_view.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFBufferView() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFBufferView>("GLTFBufferView")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<int32_t(GLTFBufferView::*)()const>(&GLTFBufferView::get_buffer),static_cast<void(GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_buffer)>("buffer")
            .property<static_cast<int32_t(GLTFBufferView::*)()const>(&GLTFBufferView::get_byte_offset),static_cast<void(GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_offset)>("byte_offset")
            .property<static_cast<int32_t(GLTFBufferView::*)()const>(&GLTFBufferView::get_byte_length),static_cast<void(GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_length)>("byte_length")
            .property<static_cast<int32_t(GLTFBufferView::*)()const>(&GLTFBufferView::get_byte_stride),static_cast<void(GLTFBufferView::*)(int32_t)>(&GLTFBufferView::set_byte_stride)>("byte_stride")
            .property<static_cast<bool(GLTFBufferView::*)()const>(&GLTFBufferView::get_indices),static_cast<void(GLTFBufferView::*)(bool)>(&GLTFBufferView::set_indices)>("indices")
            .property<static_cast<bool(GLTFBufferView::*)()const>(&GLTFBufferView::get_vertex_attributes),static_cast<void(GLTFBufferView::*)(bool)>(&GLTFBufferView::set_vertex_attributes)>("vertex_attributes")
            .fun<static_cast<PackedByteArray(GLTFBufferView::*)(const Ref<GLTFState> &)const>(&GLTFBufferView::load_buffer_view_data)>("load_buffer_view_data")
;}