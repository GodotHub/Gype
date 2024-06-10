#include <godot_cpp/classes/placeholder_texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PlaceholderTexture2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PlaceholderTexture2D>("PlaceholderTexture2D")
			.constructor<>()
			.property<&PlaceholderTexture2D::get_size, &PlaceholderTexture2D::set_size>("size");
}