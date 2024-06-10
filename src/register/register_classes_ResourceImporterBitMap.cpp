#include <godot_cpp/classes/resource_importer_bit_map.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporterBitMap() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporterBitMap>("ResourceImporterBitMap")
			.constructor<>();
}