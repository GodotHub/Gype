#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>

using namespace godot;

void register_classes_RDPipelineSpecializationConstant() {
    qjs::Context::Module &_module = _General;
    _module.class_<RDPipelineSpecializationConstant>("RDPipelineSpecializationConstant")
           .constructor<>()
           .property<RDPipelineSpecializationConstant::get_value, RDPipelineSpecializationConstant::set_value>("value")
           .property<RDPipelineSpecializationConstant::get_constant_id, RDPipelineSpecializationConstant::set_constant_id>("constant_id")
;}