#include <godot_cpp/classes/navigation_path_query_parameters2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPathQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPathQueryParameters2D>("NavigationPathQueryParameters2D")
			.constructor<>()
			.property<&NavigationPathQueryParameters2D::get_map, &NavigationPathQueryParameters2D::set_map>("map")
			.property<&NavigationPathQueryParameters2D::get_start_position, &NavigationPathQueryParameters2D::set_start_position>("start_position")
			.property<&NavigationPathQueryParameters2D::get_target_position, &NavigationPathQueryParameters2D::set_target_position>("target_position")
			.property<&NavigationPathQueryParameters2D::get_navigation_layers, &NavigationPathQueryParameters2D::set_navigation_layers>("navigation_layers")
			.property<&NavigationPathQueryParameters2D::get_pathfinding_algorithm, &NavigationPathQueryParameters2D::set_pathfinding_algorithm>("pathfinding_algorithm")
			.property<&NavigationPathQueryParameters2D::get_path_postprocessing, &NavigationPathQueryParameters2D::set_path_postprocessing>("path_postprocessing")
			.property<&NavigationPathQueryParameters2D::get_metadata_flags, &NavigationPathQueryParameters2D::set_metadata_flags>("metadata_flags");
}