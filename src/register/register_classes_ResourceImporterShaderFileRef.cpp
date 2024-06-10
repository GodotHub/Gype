#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_shader_file.hpp>

using namespace godot;

void register_classes_ResourceImporterShaderFileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterShaderFile>>("ResourceImporterShaderFileRef").constructor<ResourceImporterShaderFile *>();
}