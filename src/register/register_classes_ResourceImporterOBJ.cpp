#include <godot_cpp/classes/resource_importer_obj.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporterOBJ() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporterOBJ>("ResourceImporterOBJ")
			.constructor<>();
}