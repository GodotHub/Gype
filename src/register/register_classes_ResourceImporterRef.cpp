#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer.hpp>

using namespace godot;

void register_classes_ResourceImporterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporter>>("ResourceImporterRef").constructor<ResourceImporter *>();
}