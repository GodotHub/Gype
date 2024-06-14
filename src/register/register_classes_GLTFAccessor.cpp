
#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_float64_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFAccessor() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFAccessor>("GLTFAccessor")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_buffer_view), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_buffer_view)>((new std::string("buffer_view"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_byte_offset), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_byte_offset)>((new std::string("byte_offset"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_component_type), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_component_type)>((new std::string("component_type"))->c_str())
			.property<static_cast<bool (GLTFAccessor::*)()>(&GLTFAccessor::get_normalized), static_cast<void (GLTFAccessor::*)(bool)>(&GLTFAccessor::set_normalized)>((new std::string("normalized"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_count), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_count)>((new std::string("count"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_accessor_type), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_accessor_type)>((new std::string("accessor_type"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_type), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_type)>((new std::string("type"))->c_str())
			.property<static_cast<PackedFloat64Array (GLTFAccessor::*)()>(&GLTFAccessor::get_min), static_cast<void (GLTFAccessor::*)(const PackedFloat64Array &)>(&GLTFAccessor::set_min)>((new std::string("min"))->c_str())
			.property<static_cast<PackedFloat64Array (GLTFAccessor::*)()>(&GLTFAccessor::get_max), static_cast<void (GLTFAccessor::*)(const PackedFloat64Array &)>(&GLTFAccessor::set_max)>((new std::string("max"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_count), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_count)>((new std::string("sparse_count"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_buffer_view), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_buffer_view)>((new std::string("sparse_indices_buffer_view"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_byte_offset), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_byte_offset)>((new std::string("sparse_indices_byte_offset"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_indices_component_type), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_indices_component_type)>((new std::string("sparse_indices_component_type"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_values_buffer_view), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_values_buffer_view)>((new std::string("sparse_values_buffer_view"))->c_str())
			.property<static_cast<int32_t (GLTFAccessor::*)()>(&GLTFAccessor::get_sparse_values_byte_offset), static_cast<void (GLTFAccessor::*)(int32_t)>(&GLTFAccessor::set_sparse_values_byte_offset)>((new std::string("sparse_values_byte_offset"))->c_str());
}