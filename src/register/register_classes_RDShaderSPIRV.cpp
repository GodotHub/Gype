#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDShaderSPIRV() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDShaderSPIRV>("RDShaderSPIRV")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<PackedByteArray (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_bytecode), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>((new std::string("bytecode_vertex"))->c_str())
			.property<static_cast<PackedByteArray (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_bytecode), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>((new std::string("bytecode_fragment"))->c_str())
			.property<static_cast<PackedByteArray (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_bytecode), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>((new std::string("bytecode_tesselation_control"))->c_str())
			.property<static_cast<PackedByteArray (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_bytecode), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>((new std::string("bytecode_tesselation_evaluation"))->c_str())
			.property<static_cast<PackedByteArray (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_bytecode), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>((new std::string("bytecode_compute"))->c_str())
			.property<static_cast<String (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_compile_error), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSPIRV::set_stage_compile_error)>((new std::string("compile_error_vertex"))->c_str())
			.property<static_cast<String (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_compile_error), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSPIRV::set_stage_compile_error)>((new std::string("compile_error_fragment"))->c_str())
			.property<static_cast<String (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_compile_error), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSPIRV::set_stage_compile_error)>((new std::string("compile_error_tesselation_control"))->c_str())
			.property<static_cast<String (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_compile_error), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSPIRV::set_stage_compile_error)>((new std::string("compile_error_tesselation_evaluation"))->c_str())
			.property<static_cast<String (RDShaderSPIRV::*)(RenderingDevice::ShaderStage) const>(&RDShaderSPIRV::get_stage_compile_error), static_cast<void (RDShaderSPIRV::*)(RenderingDevice::ShaderStage, const String &)>(&RDShaderSPIRV::set_stage_compile_error)>((new std::string("compile_error_compute"))->c_str());
}