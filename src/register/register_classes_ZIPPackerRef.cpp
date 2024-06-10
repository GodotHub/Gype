#include "register/register_classes.h"
#include <godot_cpp/classes/zip_packer.hpp>

using namespace godot;

void register_classes_ZIPPackerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ZIPPacker>>("ZIPPackerRef").constructor<ZIPPacker *>();
}