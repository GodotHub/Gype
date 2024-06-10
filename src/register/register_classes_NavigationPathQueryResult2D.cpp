#include <godot_cpp/classes/navigation_path_query_result2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPathQueryResult2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPathQueryResult2D>("NavigationPathQueryResult2D")
			.constructor<>()
			.property<&NavigationPathQueryResult2D::get_path, &NavigationPathQueryResult2D::set_path>("path")
			.property<&NavigationPathQueryResult2D::get_path_types, &NavigationPathQueryResult2D::set_path_types>("path_types")
			.property<&NavigationPathQueryResult2D::get_path_rids, &NavigationPathQueryResult2D::set_path_rids>("path_rids")
			.property<&NavigationPathQueryResult2D::get_path_owner_ids, &NavigationPathQueryResult2D::set_path_owner_ids>("path_owner_ids")
			.fun<static_cast<void (NavigationPathQueryResult2D::*)()>(&NavigationPathQueryResult2D::reset)>("reset");
}