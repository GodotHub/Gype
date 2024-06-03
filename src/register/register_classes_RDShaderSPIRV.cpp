#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rd_shader_spirv.hpp>

using namespace godot;

void register_classes_RDShaderSPIRV() {
    qjs::Context::Module &_module = _General;
    _module.class_<RDShaderSPIRV>("RDShaderSPIRV")
           .constructor<>()
           .property<RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::set_stage_bytecode>("bytecode_vertex")
           .property<RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::set_stage_bytecode>("bytecode_fragment")
           .property<RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::set_stage_bytecode>("bytecode_tesselation_control")
           .property<RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::set_stage_bytecode>("bytecode_tesselation_evaluation")
           .property<RDShaderSPIRV::get_stage_bytecode, RDShaderSPIRV::set_stage_bytecode>("bytecode_compute")
           .property<RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::set_stage_compile_error>("compile_error_vertex")
           .property<RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::set_stage_compile_error>("compile_error_fragment")
           .property<RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::set_stage_compile_error>("compile_error_tesselation_control")
           .property<RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::set_stage_compile_error>("compile_error_tesselation_evaluation")
           .property<RDShaderSPIRV::get_stage_compile_error, RDShaderSPIRV::set_stage_compile_error>("compile_error_compute")
;}