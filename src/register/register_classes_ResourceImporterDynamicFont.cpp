#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_dynamic_font.hpp>

using namespace godot;

void register_classes_ResourceImporterDynamicFont() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterDynamicFont>("ResourceImporterDynamicFont")
           .constructor<>()
;}