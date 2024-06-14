#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/parallax_layer.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ParallaxLayer() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<ParallaxLayer>("ParallaxLayer")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Vector2 (ParallaxLayer::*)() const>(&ParallaxLayer::get_motion_scale), static_cast<void (ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_motion_scale)>((new std::string("motion_scale"))->c_str())
			.property<static_cast<Vector2 (ParallaxLayer::*)() const>(&ParallaxLayer::get_motion_offset), static_cast<void (ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_motion_offset)>((new std::string("motion_offset"))->c_str())
			.property<static_cast<Vector2 (ParallaxLayer::*)() const>(&ParallaxLayer::get_mirroring), static_cast<void (ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_mirroring)>((new std::string("motion_mirroring"))->c_str());
}