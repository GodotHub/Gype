#include "register/register_classes.h"
#include <godot_cpp/classes/pck_packer.hpp>

using namespace godot;

void register_classes_PCKPackerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PCKPacker>>("PCKPackerRef").constructor<PCKPacker *>();
}