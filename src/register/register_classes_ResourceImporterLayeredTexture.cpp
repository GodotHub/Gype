#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_layered_texture.hpp>

using namespace godot;

void register_classes_ResourceImporterLayeredTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterLayeredTexture>("ResourceImporterLayeredTexture")
           .constructor<>()
;}