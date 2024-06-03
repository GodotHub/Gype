#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_texture_atlas.hpp>

using namespace godot;

void register_classes_ResourceImporterTextureAtlas() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterTextureAtlas>("ResourceImporterTextureAtlas")
           .constructor<>()
;}