#include <godot_cpp/classes/parallax2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Parallax2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Parallax2D>("Parallax2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_scroll_scale),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_scroll_scale)>("scroll_scale")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_scroll_offset),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_scroll_offset)>("scroll_offset")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_repeat_size),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_repeat_size)>("repeat_size")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_autoscroll),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_autoscroll)>("autoscroll")
            .property<static_cast<int32_t(Parallax2D::*)()const>(&Parallax2D::get_repeat_times),static_cast<void(Parallax2D::*)(int32_t)>(&Parallax2D::set_repeat_times)>("repeat_times")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_limit_begin),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_limit_begin)>("limit_begin")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_limit_end),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_limit_end)>("limit_end")
            .property<static_cast<bool(Parallax2D::*)()>(&Parallax2D::get_follow_viewport),static_cast<void(Parallax2D::*)(bool)>(&Parallax2D::set_follow_viewport)>("follow_viewport")
            .property<static_cast<bool(Parallax2D::*)()>(&Parallax2D::is_ignore_camera_scroll),static_cast<void(Parallax2D::*)(bool)>(&Parallax2D::set_ignore_camera_scroll)>("ignore_camera_scroll")
            .property<static_cast<Vector2(Parallax2D::*)()const>(&Parallax2D::get_screen_offset),static_cast<void(Parallax2D::*)(const Vector2 &)>(&Parallax2D::set_screen_offset)>("screen_offset")
;}