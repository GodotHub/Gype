#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>

using namespace godot;

void register_classes_NavigationPathQueryResult3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationPathQueryResult3D>>("NavigationPathQueryResult3DRef").constructor<NavigationPathQueryResult3D *>();
}