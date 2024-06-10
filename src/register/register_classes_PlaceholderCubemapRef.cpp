#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_cubemap.hpp>

using namespace godot;

void register_classes_PlaceholderCubemapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderCubemap>>("PlaceholderCubemapRef").constructor<PlaceholderCubemap *>();
}