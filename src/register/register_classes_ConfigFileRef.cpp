#include "register/register_classes.h"
#include <godot_cpp/classes/config_file.hpp>

using namespace godot;

void register_classes_ConfigFileRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ConfigFile>>("ConfigFileRef").constructor<ConfigFile *>();
}