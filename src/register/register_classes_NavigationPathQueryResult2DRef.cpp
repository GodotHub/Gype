#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>

using namespace godot;

void register_classes_NavigationPathQueryResult2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationPathQueryResult2D>>("NavigationPathQueryResult2DRef").constructor<NavigationPathQueryResult2D *>();
}