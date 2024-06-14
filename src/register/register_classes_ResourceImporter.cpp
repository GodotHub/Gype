#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ResourceImporter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ResourceImporter>("ResourceImporter")
			.constructor<>()
			.base<RefCounted>();
	qjs::Value _ImportOrder = context->newObject();
	_ImportOrder[(new std::string("IMPORT_ORDER_DEFAULT"))->c_str()] = ResourceImporter::ImportOrder::IMPORT_ORDER_DEFAULT;
	_ImportOrder[(new std::string("IMPORT_ORDER_SCENE"))->c_str()] = ResourceImporter::ImportOrder::IMPORT_ORDER_SCENE;
	_module.add("ImportOrder", std::move(_ImportOrder));
}