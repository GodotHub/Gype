#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>

using namespace godot;

void register_classes_NavigationPathQueryParameters3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<NavigationPathQueryParameters3D>("NavigationPathQueryParameters3D")
           .constructor<>()
           .property<NavigationPathQueryParameters3D::get_map, NavigationPathQueryParameters3D::set_map>("map")
           .property<NavigationPathQueryParameters3D::get_start_position, NavigationPathQueryParameters3D::set_start_position>("start_position")
           .property<NavigationPathQueryParameters3D::get_target_position, NavigationPathQueryParameters3D::set_target_position>("target_position")
           .property<NavigationPathQueryParameters3D::get_navigation_layers, NavigationPathQueryParameters3D::set_navigation_layers>("navigation_layers")
           .property<NavigationPathQueryParameters3D::get_pathfinding_algorithm, NavigationPathQueryParameters3D::set_pathfinding_algorithm>("pathfinding_algorithm")
           .property<NavigationPathQueryParameters3D::get_path_postprocessing, NavigationPathQueryParameters3D::set_path_postprocessing>("path_postprocessing")
           .property<NavigationPathQueryParameters3D::get_metadata_flags, NavigationPathQueryParameters3D::set_metadata_flags>("metadata_flags")
;}