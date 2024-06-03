#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_image_font.hpp>

using namespace godot;

void register_classes_ResourceImporterImageFont() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterImageFont>("ResourceImporterImageFont")
           .constructor<>()
;}