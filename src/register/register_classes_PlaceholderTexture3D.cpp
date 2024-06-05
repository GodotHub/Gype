#include <godot_cpp/classes/placeholder_texture3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PlaceholderTexture3D() {
	qjs::Context::Module &_module = _General;
	_module.class_<PlaceholderTexture3D>("PlaceholderTexture3D")
			.constructor<>()
			.property<&PlaceholderTexture3D::get_size, &PlaceholderTexture3D::set_size>("size");
}