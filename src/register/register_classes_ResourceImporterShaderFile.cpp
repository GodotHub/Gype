#include <godot_cpp/classes/resource_importer_shader_file.hpp>
#include <godot_cpp/classes/resource_importer.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ResourceImporterShaderFile() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ResourceImporterShaderFile>("ResourceImporterShaderFile")
            .constructor<>()
            .base<ResourceImporter>()
;}