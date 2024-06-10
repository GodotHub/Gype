#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_path_query_parameters2d.hpp>

using namespace godot;

void register_classes_NavigationPathQueryParameters2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationPathQueryParameters2D>>("NavigationPathQueryParameters2DRef").constructor<NavigationPathQueryParameters2D *>();
}