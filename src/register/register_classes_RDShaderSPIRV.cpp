#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDShaderSPIRV() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDShaderSPIRV>("RDShaderSPIRV")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<PackedByteArray(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_bytecode),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>("bytecode_vertex")
            .property<static_cast<PackedByteArray(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_bytecode),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>("bytecode_fragment")
            .property<static_cast<PackedByteArray(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_bytecode),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>("bytecode_tesselation_control")
            .property<static_cast<PackedByteArray(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_bytecode),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>("bytecode_tesselation_evaluation")
            .property<static_cast<PackedByteArray(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_bytecode),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const PackedByteArray &)>(&RDShaderSPIRV::set_stage_bytecode)>("bytecode_compute")
            .property<static_cast<String(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_compile_error),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const String &)>(&RDShaderSPIRV::set_stage_compile_error)>("compile_error_vertex")
            .property<static_cast<String(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_compile_error),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const String &)>(&RDShaderSPIRV::set_stage_compile_error)>("compile_error_fragment")
            .property<static_cast<String(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_compile_error),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const String &)>(&RDShaderSPIRV::set_stage_compile_error)>("compile_error_tesselation_control")
            .property<static_cast<String(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_compile_error),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const String &)>(&RDShaderSPIRV::set_stage_compile_error)>("compile_error_tesselation_evaluation")
            .property<static_cast<String(RDShaderSPIRV::*)(RenderingDevice::ShaderStage)const>(&RDShaderSPIRV::get_stage_compile_error),static_cast<void(RDShaderSPIRV::*)(RenderingDevice::ShaderStage,const String &)>(&RDShaderSPIRV::set_stage_compile_error)>("compile_error_compute")
;}