#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_csv_translation.hpp>

using namespace godot;

void register_classes_ResourceImporterCSVTranslation() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterCSVTranslation>("ResourceImporterCSVTranslation")
           .constructor<>()
;}