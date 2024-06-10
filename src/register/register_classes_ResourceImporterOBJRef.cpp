#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_obj.hpp>

using namespace godot;

void register_classes_ResourceImporterOBJRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterOBJ>>("ResourceImporterOBJRef").constructor<ResourceImporterOBJ *>();
}