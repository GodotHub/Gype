#include "register/register_classes.h"
#include <godot_cpp/classes/cubemap.hpp>

using namespace godot;

void register_classes_CubemapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Cubemap>>("CubemapRef").constructor<Cubemap *>();
}