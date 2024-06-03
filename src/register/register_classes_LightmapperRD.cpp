#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/lightmapper_rd.hpp>

using namespace godot;

void register_classes_LightmapperRD() {
    qjs::Context::Module &_module = _General;
    _module.class_<LightmapperRD>("LightmapperRD")
           .constructor<>()
;}