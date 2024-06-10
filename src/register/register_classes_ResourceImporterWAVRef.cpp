#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_wav.hpp>

using namespace godot;

void register_classes_ResourceImporterWAVRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterWAV>>("ResourceImporterWAVRef").constructor<ResourceImporterWAV *>();
}