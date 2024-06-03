#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/box_mesh.hpp>

using namespace godot;

void register_classes_BoxMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<BoxMesh>("BoxMesh")
           .constructor<>()
           .property<BoxMesh::get_size, BoxMesh::set_size>("size")
           .property<BoxMesh::get_subdivide_width, BoxMesh::set_subdivide_width>("subdivide_width")
           .property<BoxMesh::get_subdivide_height, BoxMesh::set_subdivide_height>("subdivide_height")
           .property<BoxMesh::get_subdivide_depth, BoxMesh::set_subdivide_depth>("subdivide_depth")
;}