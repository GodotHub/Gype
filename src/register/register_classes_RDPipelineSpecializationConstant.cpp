#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDPipelineSpecializationConstant() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDPipelineSpecializationConstant>("RDPipelineSpecializationConstant")
			.constructor<>()
			.property<&RDPipelineSpecializationConstant::get_value, &RDPipelineSpecializationConstant::set_value>("value")
			.property<&RDPipelineSpecializationConstant::get_constant_id, &RDPipelineSpecializationConstant::set_constant_id>("constant_id");
}