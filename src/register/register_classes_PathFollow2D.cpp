#include <godot_cpp/classes/path_follow2d.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PathFollow2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<PathFollow2D>("PathFollow2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<double(PathFollow2D::*)()const>(&PathFollow2D::get_progress),static_cast<void(PathFollow2D::*)(double)>(&PathFollow2D::set_progress)>("progress")
            .property<static_cast<double(PathFollow2D::*)()const>(&PathFollow2D::get_progress_ratio),static_cast<void(PathFollow2D::*)(double)>(&PathFollow2D::set_progress_ratio)>("progress_ratio")
            .property<static_cast<double(PathFollow2D::*)()const>(&PathFollow2D::get_h_offset),static_cast<void(PathFollow2D::*)(double)>(&PathFollow2D::set_h_offset)>("h_offset")
            .property<static_cast<double(PathFollow2D::*)()const>(&PathFollow2D::get_v_offset),static_cast<void(PathFollow2D::*)(double)>(&PathFollow2D::set_v_offset)>("v_offset")
            .property<static_cast<bool(PathFollow2D::*)()const>(&PathFollow2D::is_rotating),static_cast<void(PathFollow2D::*)(bool)>(&PathFollow2D::set_rotates)>("rotates")
            .property<static_cast<bool(PathFollow2D::*)()const>(&PathFollow2D::get_cubic_interpolation),static_cast<void(PathFollow2D::*)(bool)>(&PathFollow2D::set_cubic_interpolation)>("cubic_interp")
            .property<static_cast<bool(PathFollow2D::*)()const>(&PathFollow2D::has_loop),static_cast<void(PathFollow2D::*)(bool)>(&PathFollow2D::set_loop)>("loop")
;}