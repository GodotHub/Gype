#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/plane_mesh.hpp>

using namespace godot;

void register_classes_PlaneMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaneMesh>("PlaneMesh")
           .constructor<>()
           .property<PlaneMesh::get_size, PlaneMesh::set_size>("size")
           .property<PlaneMesh::get_subdivide_width, PlaneMesh::set_subdivide_width>("subdivide_width")
           .property<PlaneMesh::get_subdivide_depth, PlaneMesh::set_subdivide_depth>("subdivide_depth")
           .property<PlaneMesh::get_center_offset, PlaneMesh::set_center_offset>("center_offset")
           .property<PlaneMesh::get_orientation, PlaneMesh::set_orientation>("orientation")
;}