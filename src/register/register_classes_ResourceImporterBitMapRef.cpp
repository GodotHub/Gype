#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_bit_map.hpp>

using namespace godot;

void register_classes_ResourceImporterBitMapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterBitMap>>("ResourceImporterBitMapRef").constructor<ResourceImporterBitMap *>();
}