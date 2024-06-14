
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasLayer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<CanvasLayer>("CanvasLayer")
			.constructor<>()
			.base<Node>()
			.property<static_cast<int32_t (CanvasLayer::*)() const>(&CanvasLayer::get_layer), static_cast<void (CanvasLayer::*)(int32_t)>(&CanvasLayer::set_layer)>((new std::string("layer"))->c_str())
			.property<static_cast<bool (CanvasLayer::*)() const>(&CanvasLayer::is_visible), static_cast<void (CanvasLayer::*)(bool)>(&CanvasLayer::set_visible)>((new std::string("visible"))->c_str())
			.property<static_cast<Vector2 (CanvasLayer::*)() const>(&CanvasLayer::get_offset), static_cast<void (CanvasLayer::*)(const Vector2 &)>(&CanvasLayer::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<double (CanvasLayer::*)() const>(&CanvasLayer::get_rotation), static_cast<void (CanvasLayer::*)(double)>(&CanvasLayer::set_rotation)>((new std::string("rotation"))->c_str())
			.property<static_cast<Vector2 (CanvasLayer::*)() const>(&CanvasLayer::get_scale), static_cast<void (CanvasLayer::*)(const Vector2 &)>(&CanvasLayer::set_scale)>((new std::string("scale"))->c_str())
			.property<static_cast<Transform2D (CanvasLayer::*)() const>(&CanvasLayer::get_transform), static_cast<void (CanvasLayer::*)(const Transform2D &)>(&CanvasLayer::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<Node *(CanvasLayer::*)() const>(&CanvasLayer::get_custom_viewport), static_cast<void (CanvasLayer::*)(Node *)>(&CanvasLayer::set_custom_viewport)>((new std::string("custom_viewport"))->c_str())
			.property<static_cast<bool (CanvasLayer::*)() const>(&CanvasLayer::is_following_viewport), static_cast<void (CanvasLayer::*)(bool)>(&CanvasLayer::set_follow_viewport)>((new std::string("follow_viewport_enabled"))->c_str())
			.property<static_cast<double (CanvasLayer::*)() const>(&CanvasLayer::get_follow_viewport_scale), static_cast<void (CanvasLayer::*)(double)>(&CanvasLayer::set_follow_viewport_scale)>((new std::string("follow_viewport_scale"))->c_str())
			.fun<static_cast<void (CanvasLayer::*)()>(&CanvasLayer::show)>((new std::string("show"))->c_str())
			.fun<static_cast<void (CanvasLayer::*)()>(&CanvasLayer::hide)>((new std::string("hide"))->c_str())
			.fun<static_cast<Transform2D (CanvasLayer::*)() const>(&CanvasLayer::get_final_transform)>((new std::string("get_final_transform"))->c_str())
			.fun<static_cast<RID (CanvasLayer::*)() const>(&CanvasLayer::get_canvas)>((new std::string("get_canvas"))->c_str());
}