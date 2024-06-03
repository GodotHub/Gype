#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_scene.hpp>

using namespace godot;

void register_classes_ResourceImporterScene() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterScene>("ResourceImporterScene")
           .constructor<>()
;}