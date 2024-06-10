#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Camera2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Camera2D>("Camera2D")
			.constructor<>()
			.property<&Camera2D::get_offset, &Camera2D::set_offset>("offset")
			.property<&Camera2D::get_anchor_mode, &Camera2D::set_anchor_mode>("anchor_mode")
			.property<&Camera2D::is_ignoring_rotation, &Camera2D::set_ignore_rotation>("ignore_rotation")
			.property<&Camera2D::is_enabled, &Camera2D::set_enabled>("enabled")
			.property<&Camera2D::get_zoom, &Camera2D::set_zoom>("zoom")
			.property<&Camera2D::get_custom_viewport, &Camera2D::set_custom_viewport>("custom_viewport")
			.property<&Camera2D::get_process_callback, &Camera2D::set_process_callback>("process_callback")
			.property<&Camera2D::get_limit, &Camera2D::set_limit>("limit_left")
			.property<&Camera2D::get_limit, &Camera2D::set_limit>("limit_top")
			.property<&Camera2D::get_limit, &Camera2D::set_limit>("limit_right")
			.property<&Camera2D::get_limit, &Camera2D::set_limit>("limit_bottom")
			.property<&Camera2D::is_limit_smoothing_enabled, &Camera2D::set_limit_smoothing_enabled>("limit_smoothed")
			.property<&Camera2D::is_position_smoothing_enabled, &Camera2D::set_position_smoothing_enabled>("position_smoothing_enabled")
			.property<&Camera2D::get_position_smoothing_speed, &Camera2D::set_position_smoothing_speed>("position_smoothing_speed")
			.property<&Camera2D::is_rotation_smoothing_enabled, &Camera2D::set_rotation_smoothing_enabled>("rotation_smoothing_enabled")
			.property<&Camera2D::get_rotation_smoothing_speed, &Camera2D::set_rotation_smoothing_speed>("rotation_smoothing_speed")
			.property<&Camera2D::is_drag_horizontal_enabled, &Camera2D::set_drag_horizontal_enabled>("drag_horizontal_enabled")
			.property<&Camera2D::is_drag_vertical_enabled, &Camera2D::set_drag_vertical_enabled>("drag_vertical_enabled")
			.property<&Camera2D::get_drag_horizontal_offset, &Camera2D::set_drag_horizontal_offset>("drag_horizontal_offset")
			.property<&Camera2D::get_drag_vertical_offset, &Camera2D::set_drag_vertical_offset>("drag_vertical_offset")
			.property<&Camera2D::get_drag_margin, &Camera2D::set_drag_margin>("drag_left_margin")
			.property<&Camera2D::get_drag_margin, &Camera2D::set_drag_margin>("drag_top_margin")
			.property<&Camera2D::get_drag_margin, &Camera2D::set_drag_margin>("drag_right_margin")
			.property<&Camera2D::get_drag_margin, &Camera2D::set_drag_margin>("drag_bottom_margin")
			.property<&Camera2D::is_screen_drawing_enabled, &Camera2D::set_screen_drawing_enabled>("editor_draw_screen")
			.property<&Camera2D::is_limit_drawing_enabled, &Camera2D::set_limit_drawing_enabled>("editor_draw_limits")
			.property<&Camera2D::is_margin_drawing_enabled, &Camera2D::set_margin_drawing_enabled>("editor_draw_drag_margin")
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::make_current)>("make_current")
			.fun<static_cast<bool (Camera2D::*)() const>(&Camera2D::is_current)>("is_current")
			.fun<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_target_position)>("get_target_position")
			.fun<static_cast<Vector2 (Camera2D::*)() const>(&Camera2D::get_screen_center_position)>("get_screen_center_position")
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::force_update_scroll)>("force_update_scroll")
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::reset_smoothing)>("reset_smoothing")
			.fun<static_cast<void (Camera2D::*)()>(&Camera2D::align)>("align");
}