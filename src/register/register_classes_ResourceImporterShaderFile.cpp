#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_shader_file.hpp>

using namespace godot;

void register_classes_ResourceImporterShaderFile() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterShaderFile>("ResourceImporterShaderFile")
           .constructor<>()
;}