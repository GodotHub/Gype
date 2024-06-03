#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_LightmapProbe() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<LightmapProbe>("LightmapProbe")
           .constructor<>()
;}