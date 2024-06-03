#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_texture.hpp>

using namespace godot;

void register_classes_ResourceImporterTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterTexture>("ResourceImporterTexture")
           .constructor<>()
;}