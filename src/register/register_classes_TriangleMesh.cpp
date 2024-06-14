#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TriangleMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TriangleMesh>("TriangleMesh")
            .constructor<>()
            .base<RefCounted>()
;}