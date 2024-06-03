#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/capsule_mesh.hpp>

using namespace godot;

void register_classes_CapsuleMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<CapsuleMesh>("CapsuleMesh")
           .constructor<>()
           .property<CapsuleMesh::get_radius, CapsuleMesh::set_radius>("radius")
           .property<CapsuleMesh::get_height, CapsuleMesh::set_height>("height")
           .property<CapsuleMesh::get_radial_segments, CapsuleMesh::set_radial_segments>("radial_segments")
           .property<CapsuleMesh::get_rings, CapsuleMesh::set_rings>("rings")
;}