#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RDPipelineSpecializationConstant() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<RDPipelineSpecializationConstant>("RDPipelineSpecializationConstant")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Variant(RDPipelineSpecializationConstant::*)()const>(&RDPipelineSpecializationConstant::get_value),static_cast<void(RDPipelineSpecializationConstant::*)(const Variant &)>(&RDPipelineSpecializationConstant::set_value)>("value")
            .property<static_cast<uint32_t(RDPipelineSpecializationConstant::*)()const>(&RDPipelineSpecializationConstant::get_constant_id),static_cast<void(RDPipelineSpecializationConstant::*)(uint32_t)>(&RDPipelineSpecializationConstant::set_constant_id)>("constant_id")
;}