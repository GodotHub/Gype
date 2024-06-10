#include "register/register_classes.h"
#include <godot_cpp/classes/file_access.hpp>

using namespace godot;

void register_classes_FileAccessRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<FileAccess>>("FileAccessRef").constructor<FileAccess *>();
}