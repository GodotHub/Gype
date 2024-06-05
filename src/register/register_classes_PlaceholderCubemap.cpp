#include <godot_cpp/classes/placeholder_cubemap.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PlaceholderCubemap() {
	qjs::Context::Module &_module = _General;
	_module.class_<PlaceholderCubemap>("PlaceholderCubemap")
			.constructor<>();
}