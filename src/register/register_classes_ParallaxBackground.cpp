#include <godot_cpp/classes/parallax_background.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ParallaxBackground() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<ParallaxBackground>("ParallaxBackground")
			.constructor<>()
			.property<&ParallaxBackground::get_scroll_offset, &ParallaxBackground::set_scroll_offset>("scroll_offset")
			.property<&ParallaxBackground::get_scroll_base_offset, &ParallaxBackground::set_scroll_base_offset>("scroll_base_offset")
			.property<&ParallaxBackground::get_scroll_base_scale, &ParallaxBackground::set_scroll_base_scale>("scroll_base_scale")
			.property<&ParallaxBackground::get_limit_begin, &ParallaxBackground::set_limit_begin>("scroll_limit_begin")
			.property<&ParallaxBackground::get_limit_end, &ParallaxBackground::set_limit_end>("scroll_limit_end")
			.property<&ParallaxBackground::is_ignore_camera_zoom, &ParallaxBackground::set_ignore_camera_zoom>("scroll_ignore_camera_zoom");
}