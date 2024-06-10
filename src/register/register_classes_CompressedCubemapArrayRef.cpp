#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_cubemap_array.hpp>

using namespace godot;

void register_classes_CompressedCubemapArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedCubemapArray>>("CompressedCubemapArrayRef").constructor<CompressedCubemapArray *>();
}