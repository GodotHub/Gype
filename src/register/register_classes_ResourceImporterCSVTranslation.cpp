#include <godot_cpp/classes/resource_importer_csv_translation.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ResourceImporterCSVTranslation() {
	qjs::Context::Module &_module = _General;
	_module.class_<ResourceImporterCSVTranslation>("ResourceImporterCSVTranslation")
			.constructor<>();
}