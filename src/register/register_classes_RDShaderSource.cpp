#include <godot_cpp/classes/rd_shader_source.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RDShaderSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RDShaderSource>("RDShaderSource")
			.constructor<>()
			.property<&RDShaderSource::get_stage_source, &RDShaderSource::set_stage_source>("source_vertex")
			.property<&RDShaderSource::get_stage_source, &RDShaderSource::set_stage_source>("source_fragment")
			.property<&RDShaderSource::get_stage_source, &RDShaderSource::set_stage_source>("source_tesselation_control")
			.property<&RDShaderSource::get_stage_source, &RDShaderSource::set_stage_source>("source_tesselation_evaluation")
			.property<&RDShaderSource::get_stage_source, &RDShaderSource::set_stage_source>("source_compute")
			.property<&RDShaderSource::get_language, &RDShaderSource::set_language>("language");
}