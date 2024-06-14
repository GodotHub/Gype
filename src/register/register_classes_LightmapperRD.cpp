#include <godot_cpp/classes/lightmapper_rd.hpp>
#include <godot_cpp/classes/lightmapper.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LightmapperRD() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<LightmapperRD>("LightmapperRD")
            .constructor<>()
            .base<Lightmapper>()
;}