#include <godot_cpp/classes/viewport_texture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ViewportTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ViewportTexture>("ViewportTexture")
			.constructor<>()
			.property<&ViewportTexture::get_viewport_path_in_scene, &ViewportTexture::set_viewport_path_in_scene>("viewport_path");
}