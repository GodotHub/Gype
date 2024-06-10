#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_mp3.hpp>

using namespace godot;

void register_classes_ResourceImporterMP3Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterMP3>>("ResourceImporterMP3Ref").constructor<ResourceImporterMP3 *>();
}