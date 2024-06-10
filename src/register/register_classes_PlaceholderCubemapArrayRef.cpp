#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_cubemap_array.hpp>

using namespace godot;

void register_classes_PlaceholderCubemapArrayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderCubemapArray>>("PlaceholderCubemapArrayRef").constructor<PlaceholderCubemapArray *>();
}