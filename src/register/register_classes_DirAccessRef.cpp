#include "register/register_classes.h"
#include <godot_cpp/classes/dir_access.hpp>

using namespace godot;

void register_classes_DirAccessRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<DirAccess>>("DirAccessRef").constructor<DirAccess *>();
}