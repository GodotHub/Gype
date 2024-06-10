#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>

using namespace godot;

void register_classes_NavigationPathQueryParameters3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationPathQueryParameters3D>>("NavigationPathQueryParameters3DRef").constructor<NavigationPathQueryParameters3D *>();
}