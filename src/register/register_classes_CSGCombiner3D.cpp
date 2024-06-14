#include <godot_cpp/classes/csg_combiner3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGCombiner3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGCombiner3D>("CSGCombiner3D")
            .constructor<>()
            .base<CSGShape3D>()
;}