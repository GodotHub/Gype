#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ResourceImporter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ResourceImporter>("ResourceImporter")
            .constructor<>()
            .base<RefCounted>()
;    qjs::Value _ImportOrder = context->newObject();
    _ImportOrder["IMPORT_ORDER_DEFAULT"] = ResourceImporter::ImportOrder::IMPORT_ORDER_DEFAULT;
    _ImportOrder["IMPORT_ORDER_SCENE"] = ResourceImporter::ImportOrder::IMPORT_ORDER_SCENE;
    _module.add("ImportOrder", std::move(_ImportOrder));
}