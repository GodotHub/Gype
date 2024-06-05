#include <godot_cpp/classes/parallax_layer.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ParallaxLayer() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<ParallaxLayer>("ParallaxLayer")
			.constructor<>()
			.property<&ParallaxLayer::get_motion_scale, &ParallaxLayer::set_motion_scale>("motion_scale")
			.property<&ParallaxLayer::get_motion_offset, &ParallaxLayer::set_motion_offset>("motion_offset")
			.property<&ParallaxLayer::get_mirroring, &ParallaxLayer::set_mirroring>("motion_mirroring");
}