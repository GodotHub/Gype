#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CSGPolygon3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CSGPolygon3D>("CSGPolygon3D")
           .constructor<>()
           .property<CSGPolygon3D::get_polygon, CSGPolygon3D::set_polygon>("polygon")
           .property<CSGPolygon3D::get_mode, CSGPolygon3D::set_mode>("mode")
           .property<CSGPolygon3D::get_depth, CSGPolygon3D::set_depth>("depth")
           .property<CSGPolygon3D::get_spin_degrees, CSGPolygon3D::set_spin_degrees>("spin_degrees")
           .property<CSGPolygon3D::get_spin_sides, CSGPolygon3D::set_spin_sides>("spin_sides")
           .property<CSGPolygon3D::get_path_node, CSGPolygon3D::set_path_node>("path_node")
           .property<CSGPolygon3D::get_path_interval_type, CSGPolygon3D::set_path_interval_type>("path_interval_type")
           .property<CSGPolygon3D::get_path_interval, CSGPolygon3D::set_path_interval>("path_interval")
           .property<CSGPolygon3D::get_path_simplify_angle, CSGPolygon3D::set_path_simplify_angle>("path_simplify_angle")
           .property<CSGPolygon3D::get_path_rotation, CSGPolygon3D::set_path_rotation>("path_rotation")
           .property<CSGPolygon3D::is_path_local, CSGPolygon3D::set_path_local>("path_local")
           .property<CSGPolygon3D::is_path_continuous_u, CSGPolygon3D::set_path_continuous_u>("path_continuous_u")
           .property<CSGPolygon3D::get_path_u_distance, CSGPolygon3D::set_path_u_distance>("path_u_distance")
           .property<CSGPolygon3D::is_path_joined, CSGPolygon3D::set_path_joined>("path_joined")
           .property<CSGPolygon3D::get_smooth_faces, CSGPolygon3D::set_smooth_faces>("smooth_faces")
           .property<CSGPolygon3D::get_material, CSGPolygon3D::set_material>("material")
;}