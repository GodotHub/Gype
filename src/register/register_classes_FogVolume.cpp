#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_FogVolume() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<FogVolume>("FogVolume")
           .constructor<>()
           .property<FogVolume::get_size, FogVolume::set_size>("size")
           .property<FogVolume::get_shape, FogVolume::set_shape>("shape")
           .property<FogVolume::get_material, FogVolume::set_material>("material")
;}