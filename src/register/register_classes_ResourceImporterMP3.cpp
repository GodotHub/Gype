#include <godot_cpp/classes/resource_importer_mp3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporterMP3() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporterMP3>("ResourceImporterMP3")
			.constructor<>();
}