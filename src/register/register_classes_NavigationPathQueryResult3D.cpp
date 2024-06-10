#include <godot_cpp/classes/navigation_path_query_result3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_NavigationPathQueryResult3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<NavigationPathQueryResult3D>("NavigationPathQueryResult3D")
			.constructor<>()
			.property<&NavigationPathQueryResult3D::get_path, &NavigationPathQueryResult3D::set_path>("path")
			.property<&NavigationPathQueryResult3D::get_path_types, &NavigationPathQueryResult3D::set_path_types>("path_types")
			.property<&NavigationPathQueryResult3D::get_path_rids, &NavigationPathQueryResult3D::set_path_rids>("path_rids")
			.property<&NavigationPathQueryResult3D::get_path_owner_ids, &NavigationPathQueryResult3D::set_path_owner_ids>("path_owner_ids")
			.fun<static_cast<void (NavigationPathQueryResult3D::*)()>(&NavigationPathQueryResult3D::reset)>("reset");
}