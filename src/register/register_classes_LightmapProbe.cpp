#include <godot_cpp/classes/lightmap_probe.hpp>
#include <godot_cpp/classes/node3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_LightmapProbe() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<LightmapProbe>("LightmapProbe")
            .constructor<>()
            .base<Node3D>()
;}