#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineMultisampleState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineMultisampleState>("RDPipelineMultisampleState")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<RenderingDevice::TextureSamples (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_sample_count), static_cast<void (RDPipelineMultisampleState::*)(RenderingDevice::TextureSamples)>(&RDPipelineMultisampleState::set_sample_count)>((new std::string("sample_count"))->c_str())
			.property<static_cast<bool (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_enable_sample_shading), static_cast<void (RDPipelineMultisampleState::*)(bool)>(&RDPipelineMultisampleState::set_enable_sample_shading)>((new std::string("enable_sample_shading"))->c_str())
			.property<static_cast<double (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_min_sample_shading), static_cast<void (RDPipelineMultisampleState::*)(double)>(&RDPipelineMultisampleState::set_min_sample_shading)>((new std::string("min_sample_shading"))->c_str())
			.property<static_cast<bool (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_enable_alpha_to_coverage), static_cast<void (RDPipelineMultisampleState::*)(bool)>(&RDPipelineMultisampleState::set_enable_alpha_to_coverage)>((new std::string("enable_alpha_to_coverage"))->c_str())
			.property<static_cast<bool (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_enable_alpha_to_one), static_cast<void (RDPipelineMultisampleState::*)(bool)>(&RDPipelineMultisampleState::set_enable_alpha_to_one)>((new std::string("enable_alpha_to_one"))->c_str())
			.property<static_cast<TypedArray<int> (RDPipelineMultisampleState::*)() const>(&RDPipelineMultisampleState::get_sample_masks), static_cast<void (RDPipelineMultisampleState::*)(const TypedArray<int> &)>(&RDPipelineMultisampleState::set_sample_masks)>((new std::string("sample_masks"))->c_str());
}