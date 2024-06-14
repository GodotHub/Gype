
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/parallax2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Parallax2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Parallax2D>("Parallax2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_scroll_scale), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_scroll_scale)>((new std::string("scroll_scale"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_scroll_offset), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_scroll_offset)>((new std::string("scroll_offset"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_repeat_size), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_repeat_size)>((new std::string("repeat_size"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_autoscroll), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_autoscroll)>((new std::string("autoscroll"))->c_str())
			.property<static_cast<int32_t (Parallax2D::*)() const>(&Parallax2D::get_repeat_times), static_cast<void (Parallax2D::*)(int32_t)>(&Parallax2D::set_repeat_times)>((new std::string("repeat_times"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_limit_begin), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_limit_begin)>((new std::string("limit_begin"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_limit_end), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_limit_end)>((new std::string("limit_end"))->c_str())
			.property<static_cast<bool (Parallax2D::*)()>(&Parallax2D::get_follow_viewport), static_cast<void (Parallax2D::*)(bool)>(&Parallax2D::set_follow_viewport)>((new std::string("follow_viewport"))->c_str())
			.property<static_cast<bool (Parallax2D::*)()>(&Parallax2D::is_ignore_camera_scroll), static_cast<void (Parallax2D::*)(bool)>(&Parallax2D::set_ignore_camera_scroll)>((new std::string("ignore_camera_scroll"))->c_str())
			.property<static_cast<Vector2 (Parallax2D::*)() const>(&Parallax2D::get_screen_offset), static_cast<void (Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_screen_offset)>((new std::string("screen_offset"))->c_str());
}