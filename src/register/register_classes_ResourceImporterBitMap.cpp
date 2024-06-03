#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/resource_importer_bit_map.hpp>

using namespace godot;

void register_classes_ResourceImporterBitMap() {
    qjs::Context::Module &_module = _General;
    _module.class_<ResourceImporterBitMap>("ResourceImporterBitMap")
           .constructor<>()
;}