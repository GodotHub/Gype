#include <godot_cpp/classes/placeholder_mesh.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/classes/mesh.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PlaceholderMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PlaceholderMesh>("PlaceholderMesh")
            .constructor<>()
            .base<Mesh>()
            .property<static_cast<void(PlaceholderMesh::*)(const AABB &)>(&PlaceholderMesh::set_aabb)>("{'name': 'set_aabb', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 259215842, 'arguments': [{'name': 'aabb', 'type': 'AABB'}]}")
;}