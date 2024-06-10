#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_dynamic_font.hpp>

using namespace godot;

void register_classes_ResourceImporterDynamicFontRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterDynamicFont>>("ResourceImporterDynamicFontRef").constructor<ResourceImporterDynamicFont *>();
}