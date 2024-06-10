#include "register/register_classes.h"
#include <godot_cpp/classes/compressed_cubemap.hpp>

using namespace godot;

void register_classes_CompressedCubemapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CompressedCubemap>>("CompressedCubemapRef").constructor<CompressedCubemap *>();
}