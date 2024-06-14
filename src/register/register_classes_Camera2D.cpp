
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Camera2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Camera2D>("Camera2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_offset), static_cast<void (Camera2D::*)(const Vector2 &)>(&Camera2D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<Camera2D::AnchorMode (Camera2D::*)() const>(&Camera2D::get_anchor_mode), static_cast<void (Camera2D::*)(Camera2D::AnchorMode)>(&Camera2D::set_anchor_mode)>((new std::string("anchor_mode"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_ignoring_rotation), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_ignore_rotation)>((new std::string("ignore_rotation"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_zoom), static_cast<void (Camera2D::*)(const Vector2 &)>(&Camera2D::set_zoom)>((new std::string("zoom"))->c_str())
			.property<static_cast<Node *(Camera2D::*)() const>(&Camera2D::get_custom_viewport), static_cast<void (Camera2D::*)(Node *)>(&Camera2D::set_custom_viewport)>((new std::string("custom_viewport"))->c_str())
			.property<static_cast<Camera2D::Camera2DProcessCallback (Camera2D::*)() const>(&Camera2D::get_process_callback), static_cast<void (Camera2D::*)(Camera2D::Camera2DProcessCallback)>(&Camera2D::set_process_callback)>((new std::string("process_callback"))->c_str())
			.property<static_cast<int32_t (Camera2D::*)(Side) const>(&Camera2D::get_limit), static_cast<void (Camera2D::*)(Side, int32_t)>(&Camera2D::set_limit)>((new std::string("limit_left"))->c_str())
			.property<static_cast<int32_t (Camera2D::*)(Side) const>(&Camera2D::get_limit), static_cast<void (Camera2D::*)(Side, int32_t)>(&Camera2D::set_limit)>((new std::string("limit_top"))->c_str())
			.property<static_cast<int32_t (Camera2D::*)(Side) const>(&Camera2D::get_limit), static_cast<void (Camera2D::*)(Side, int32_t)>(&Camera2D::set_limit)>((new std::string("limit_right"))->c_str())
			.property<static_cast<int32_t (Camera2D::*)(Side) const>(&Camera2D::get_limit), static_cast<void (Camera2D::*)(Side, int32_t)>(&Camera2D::set_limit)>((new std::string("limit_bottom"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_limit_smoothing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_limit_smoothing_enabled)>((new std::string("limit_smoothed"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_position_smoothing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_position_smoothing_enabled)>((new std::string("position_smoothing_enabled"))->c_str())
			.property<static_cast<double (Camera2D::*)() const>(&Camera2D::get_position_smoothing_speed), static_cast<void (Camera2D::*)(double)>(&Camera2D::set_position_smoothing_speed)>((new std::string("position_smoothing_speed"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_rotation_smoothing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_rotation_smoothing_enabled)>((new std::string("rotation_smoothing_enabled"))->c_str())
			.property<static_cast<double (Camera2D::*)() const>(&Camera2D::get_rotation_smoothing_speed), static_cast<void (Camera2D::*)(double)>(&Camera2D::set_rotation_smoothing_speed)>((new std::string("rotation_smoothing_speed"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_drag_horizontal_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_drag_horizontal_enabled)>((new std::string("drag_horizontal_enabled"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_drag_vertical_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_drag_vertical_enabled)>((new std::string("drag_vertical_enabled"))->c_str())
			.property<static_cast<double (Camera2D::*)() const>(&Camera2D::get_drag_horizontal_offset), static_cast<void (Camera2D::*)(double)>(&Camera2D::set_drag_horizontal_offset)>((new std::string("drag_horizontal_offset"))->c_str())
			.property<static_cast<double (Camera2D::*)() const>(&Camera2D::get_drag_vertical_offset), static_cast<void (Camera2D::*)(double)>(&Camera2D::set_drag_vertical_offset)>((new std::string("drag_vertical_offset"))->c_str())
			.property<static_cast<double (Camera2D::*)(Side) const>(&Camera2D::get_drag_margin), static_cast<void (Camera2D::*)(Side, double)>(&Camera2D::set_drag_margin)>((new std::string("drag_left_margin"))->c_str())
			.property<static_cast<double (Camera2D::*)(Side) const>(&Camera2D::get_drag_margin), static_cast<void (Camera2D::*)(Side, double)>(&Camera2D::set_drag_margin)>((new std::string("drag_top_margin"))->c_str())
			.property<static_cast<double (Camera2D::*)(Side) const>(&Camera2D::get_drag_margin), static_cast<void (Camera2D::*)(Side, double)>(&Camera2D::set_drag_margin)>((new std::string("drag_right_margin"))->c_str())
			.property<static_cast<double (Camera2D::*)(Side) const>(&Camera2D::get_drag_margin), static_cast<void (Camera2D::*)(Side, double)>(&Camera2D::set_drag_margin)>((new std::string("drag_bottom_margin"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_screen_drawing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_screen_drawing_enabled)>((new std::string("editor_draw_screen"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_limit_drawing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_limit_drawing_enabled)>((new std::string("editor_draw_limits"))->c_str())
			.property<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_margin_drawing_enabled), static_cast<void (Camera2D::*)(bool)>(&Camera2D::set_margin_drawing_enabled)>((new std::string("editor_draw_drag_margin"))->c_str())
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::make_current)>((new std::string("make_current"))->c_str())
			.fun<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_current)>((new std::string("is_current"))->c_str())
			.fun<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_target_position)>((new std::string("get_target_position"))->c_str())
			.fun<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_screen_center_position)>((new std::string("get_screen_center_position"))->c_str())
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::force_update_scroll)>((new std::string("force_update_scroll"))->c_str())
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::reset_smoothing)>((new std::string("reset_smoothing"))->c_str())
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::align)>((new std::string("align"))->c_str());
	qjs::Value _AnchorMode = context->newObject();
	_AnchorMode[(new std::string("ANCHOR_MODE_FIXED_TOP_LEFT"))->c_str()] = Camera2D::AnchorMode::ANCHOR_MODE_FIXED_TOP_LEFT;
	_AnchorMode[(new std::string("ANCHOR_MODE_DRAG_CENTER"))->c_str()] = Camera2D::AnchorMode::ANCHOR_MODE_DRAG_CENTER;
	_module.add("AnchorMode", std::move(_AnchorMode));
	qjs::Value _Camera2DProcessCallback = context->newObject();
	_Camera2DProcessCallback[(new std::string("CAMERA2D_PROCESS_PHYSICS"))->c_str()] = Camera2D::Camera2DProcessCallback::CAMERA2D_PROCESS_PHYSICS;
	_Camera2DProcessCallback[(new std::string("CAMERA2D_PROCESS_IDLE"))->c_str()] = Camera2D::Camera2DProcessCallback::CAMERA2D_PROCESS_IDLE;
	_module.add("Camera2DProcessCallback", std::move(_Camera2DProcessCallback));
}