#include <godot_cpp/classes/resource_importer_shader_file.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ResourceImporterShaderFile() {
	qjs::Context::Module &_module = _General;
	_module.class_<ResourceImporterShaderFile>("ResourceImporterShaderFile")
			.constructor<>();
}