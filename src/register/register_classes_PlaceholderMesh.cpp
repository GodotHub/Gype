#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_mesh.hpp>

using namespace godot;

void register_classes_PlaceholderMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderMesh>("PlaceholderMesh")
           .constructor<>()
           .property<PlaceholderMesh::get_aabb, PlaceholderMesh::set_aabb>("aabb")
;}