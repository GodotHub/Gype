#include "register/register_classes.h"
#include <godot_cpp/classes/cubemap_array.hpp>

using namespace godot;

void register_classes_CubemapArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CubemapArray>>("CubemapArrayRef").constructor<CubemapArray *>();
}