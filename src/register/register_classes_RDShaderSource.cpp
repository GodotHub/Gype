#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDShaderSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDShaderSource>("RDShaderSource")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<String (RDShaderSource::*)(RenderingDevice::ShaderStage) const>(&RDShaderSource::get_stage_source), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSource::set_stage_source)>((new std::string("source_vertex"))->c_str())
			.property<static_cast<String (RDShaderSource::*)(RenderingDevice::ShaderStage) const>(&RDShaderSource::get_stage_source), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSource::set_stage_source)>((new std::string("source_fragment"))->c_str())
			.property<static_cast<String (RDShaderSource::*)(RenderingDevice::ShaderStage) const>(&RDShaderSource::get_stage_source), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSource::set_stage_source)>((new std::string("source_tesselation_control"))->c_str())
			.property<static_cast<String (RDShaderSource::*)(RenderingDevice::ShaderStage) const>(&RDShaderSource::get_stage_source), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSource::set_stage_source)>((new std::string("source_tesselation_evaluation"))->c_str())
			.property<static_cast<String (RDShaderSource::*)(RenderingDevice::ShaderStage) const>(&RDShaderSource::get_stage_source), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSource::set_stage_source)>((new std::string("source_compute"))->c_str())
			.property<static_cast<RenderingDevice::ShaderLanguage (RDShaderSource::*)() const>(&RDShaderSource::get_language), static_cast<void (RDShaderSource::*)(RenderingDevice::ShaderLanguage)>(&RDShaderSource::set_language)>((new std::string("language"))->c_str());
}