#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Camera2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Camera2D>("Camera2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Vector2(Camera2D::*)()const>(&Camera2D::get_offset),static_cast<void(Camera2D::*)(const Vector2 &)>(&Camera2D::set_offset)>("offset")
            .property<static_cast<Camera2D::AnchorMode(Camera2D::*)()const>(&Camera2D::get_anchor_mode),static_cast<void(Camera2D::*)(Camera2D::AnchorMode)>(&Camera2D::set_anchor_mode)>("anchor_mode")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_ignoring_rotation),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_ignore_rotation)>("ignore_rotation")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_enabled)>("enabled")
            .property<static_cast<Vector2(Camera2D::*)()const>(&Camera2D::get_zoom),static_cast<void(Camera2D::*)(const Vector2 &)>(&Camera2D::set_zoom)>("zoom")
            .property<static_cast<Node *(Camera2D::*)()const>(&Camera2D::get_custom_viewport),static_cast<void(Camera2D::*)(Node *)>(&Camera2D::set_custom_viewport)>("custom_viewport")
            .property<static_cast<Camera2D::Camera2DProcessCallback(Camera2D::*)()const>(&Camera2D::get_process_callback),static_cast<void(Camera2D::*)(Camera2D::Camera2DProcessCallback)>(&Camera2D::set_process_callback)>("process_callback")
            .property<static_cast<int32_t(Camera2D::*)(Side)const>(&Camera2D::get_limit),static_cast<void(Camera2D::*)(Side,int32_t)>(&Camera2D::set_limit)>("limit_left")
            .property<static_cast<int32_t(Camera2D::*)(Side)const>(&Camera2D::get_limit),static_cast<void(Camera2D::*)(Side,int32_t)>(&Camera2D::set_limit)>("limit_top")
            .property<static_cast<int32_t(Camera2D::*)(Side)const>(&Camera2D::get_limit),static_cast<void(Camera2D::*)(Side,int32_t)>(&Camera2D::set_limit)>("limit_right")
            .property<static_cast<int32_t(Camera2D::*)(Side)const>(&Camera2D::get_limit),static_cast<void(Camera2D::*)(Side,int32_t)>(&Camera2D::set_limit)>("limit_bottom")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_limit_smoothing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_limit_smoothing_enabled)>("limit_smoothed")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_position_smoothing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_position_smoothing_enabled)>("position_smoothing_enabled")
            .property<static_cast<double(Camera2D::*)()const>(&Camera2D::get_position_smoothing_speed),static_cast<void(Camera2D::*)(double)>(&Camera2D::set_position_smoothing_speed)>("position_smoothing_speed")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_rotation_smoothing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_rotation_smoothing_enabled)>("rotation_smoothing_enabled")
            .property<static_cast<double(Camera2D::*)()const>(&Camera2D::get_rotation_smoothing_speed),static_cast<void(Camera2D::*)(double)>(&Camera2D::set_rotation_smoothing_speed)>("rotation_smoothing_speed")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_drag_horizontal_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_drag_horizontal_enabled)>("drag_horizontal_enabled")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_drag_vertical_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_drag_vertical_enabled)>("drag_vertical_enabled")
            .property<static_cast<double(Camera2D::*)()const>(&Camera2D::get_drag_horizontal_offset),static_cast<void(Camera2D::*)(double)>(&Camera2D::set_drag_horizontal_offset)>("drag_horizontal_offset")
            .property<static_cast<double(Camera2D::*)()const>(&Camera2D::get_drag_vertical_offset),static_cast<void(Camera2D::*)(double)>(&Camera2D::set_drag_vertical_offset)>("drag_vertical_offset")
            .property<static_cast<double(Camera2D::*)(Side)const>(&Camera2D::get_drag_margin),static_cast<void(Camera2D::*)(Side,double)>(&Camera2D::set_drag_margin)>("drag_left_margin")
            .property<static_cast<double(Camera2D::*)(Side)const>(&Camera2D::get_drag_margin),static_cast<void(Camera2D::*)(Side,double)>(&Camera2D::set_drag_margin)>("drag_top_margin")
            .property<static_cast<double(Camera2D::*)(Side)const>(&Camera2D::get_drag_margin),static_cast<void(Camera2D::*)(Side,double)>(&Camera2D::set_drag_margin)>("drag_right_margin")
            .property<static_cast<double(Camera2D::*)(Side)const>(&Camera2D::get_drag_margin),static_cast<void(Camera2D::*)(Side,double)>(&Camera2D::set_drag_margin)>("drag_bottom_margin")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_screen_drawing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_screen_drawing_enabled)>("editor_draw_screen")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_limit_drawing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_limit_drawing_enabled)>("editor_draw_limits")
            .property<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_margin_drawing_enabled),static_cast<void(Camera2D::*)(bool)>(&Camera2D::set_margin_drawing_enabled)>("editor_draw_drag_margin")
            .fun<static_cast<void(Camera2D::*)()>(&Camera2D::make_current)>("make_current")
            .fun<static_cast<bool(Camera2D::*)()const>(&Camera2D::is_current)>("is_current")
            .fun<static_cast<Vector2(Camera2D::*)()const>(&Camera2D::get_target_position)>("get_target_position")
            .fun<static_cast<Vector2(Camera2D::*)()const>(&Camera2D::get_screen_center_position)>("get_screen_center_position")
            .fun<static_cast<void(Camera2D::*)()>(&Camera2D::force_update_scroll)>("force_update_scroll")
            .fun<static_cast<void(Camera2D::*)()>(&Camera2D::reset_smoothing)>("reset_smoothing")
            .fun<static_cast<void(Camera2D::*)()>(&Camera2D::align)>("align")
;    qjs::Value _AnchorMode = context->newObject();
    _AnchorMode["ANCHOR_MODE_FIXED_TOP_LEFT"] = Camera2D::AnchorMode::ANCHOR_MODE_FIXED_TOP_LEFT;
    _AnchorMode["ANCHOR_MODE_DRAG_CENTER"] = Camera2D::AnchorMode::ANCHOR_MODE_DRAG_CENTER;
    _module.add("AnchorMode", std::move(_AnchorMode));
    qjs::Value _Camera2DProcessCallback = context->newObject();
    _Camera2DProcessCallback["CAMERA2D_PROCESS_PHYSICS"] = Camera2D::Camera2DProcessCallback::CAMERA2D_PROCESS_PHYSICS;
    _Camera2DProcessCallback["CAMERA2D_PROCESS_IDLE"] = Camera2D::Camera2DProcessCallback::CAMERA2D_PROCESS_IDLE;
    _module.add("Camera2DProcessCallback", std::move(_Camera2DProcessCallback));
}