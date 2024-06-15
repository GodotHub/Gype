#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFAccessor() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFAccessor>("GLTFAccessor")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_buffer_view),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_buffer_view)>("buffer_view")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_byte_offset),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_byte_offset)>("byte_offset")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_component_type),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_component_type)>("component_type")
            .property<static_cast<bool(GLTFAccessor::*)()>(&GLTFAccessor::get_normalized),static_cast<void(GLTFAccessor::*)(bool)>(&GLTFAccessor::set_normalized)>("normalized")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_count),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_count)>("count")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_accessor_type),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_accessor_type)>("accessor_type")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_type),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_type)>("type")
            .property<static_cast<PackedFloat64Array(GLTFAccessor::*)()>(&GLTFAccessor::get_min),static_cast<void(GLTFAccessor::*)(const PackedFloat64Array &)>(&GLTFAccessor::set_min)>("min")
            .property<static_cast<PackedFloat64Array(GLTFAccessor::*)()>(&GLTFAccessor::get_max),static_cast<void(GLTFAccessor::*)(const PackedFloat64Array &)>(&GLTFAccessor::set_max)>("max")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_count),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_count)>("sparse_count")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_buffer_view),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_buffer_view)>("sparse_indices_buffer_view")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_byte_offset),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_byte_offset)>("sparse_indices_byte_offset")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_component_type),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_component_type)>("sparse_indices_component_type")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_values_buffer_view),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_values_buffer_view)>("sparse_values_buffer_view")
            .property<static_cast<int32_t(GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_values_byte_offset),static_cast<void(GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_values_byte_offset)>("sparse_values_byte_offset")
;}