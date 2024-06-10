#include "register/register_classes.h"
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>

using namespace godot;

void register_classes_RDPipelineSpecializationConstantRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDPipelineSpecializationConstant>>("RDPipelineSpecializationConstantRef").constructor<RDPipelineSpecializationConstant *>();
}