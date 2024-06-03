#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_bm_font.hpp>

using namespace godot;

void register_classes_ResourceImporterBMFont() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterBMFont>("ResourceImporterBMFont")
           .constructor<>()
;}