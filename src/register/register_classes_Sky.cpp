#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sky.hpp>

using namespace godot;

void register_classes_Sky() {
    qjs::Context::Module &_module = _General;
    _module.class_<Sky>("Sky")
           .constructor<>()
           .property<Sky::get_material, Sky::set_material>("sky_material")
           .property<Sky::get_process_mode, Sky::set_process_mode>("process_mode")
           .property<Sky::get_radiance_size, Sky::set_radiance_size>("radiance_size")
;}