#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_mp3.hpp>

using namespace godot;

void register_classes_ResourceImporterMP3() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterMP3>("ResourceImporterMP3")
           .constructor<>()
;}