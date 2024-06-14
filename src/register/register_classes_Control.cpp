
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Control() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Control>("Control")
			.constructor<>()
			.base<CanvasItem>()
			.static_fun<&Control::NOTIFICATION_RESIZED>((new std::string("NOTIFICATION_RESIZED"))->c_str())
			.static_fun<&Control::NOTIFICATION_MOUSE_ENTER>((new std::string("NOTIFICATION_MOUSE_ENTER"))->c_str())
			.static_fun<&Control::NOTIFICATION_MOUSE_EXIT>((new std::string("NOTIFICATION_MOUSE_EXIT"))->c_str())
			.static_fun<&Control::NOTIFICATION_MOUSE_ENTER_SELF>((new std::string("NOTIFICATION_MOUSE_ENTER_SELF"))->c_str())
			.static_fun<&Control::NOTIFICATION_MOUSE_EXIT_SELF>((new std::string("NOTIFICATION_MOUSE_EXIT_SELF"))->c_str())
			.static_fun<&Control::NOTIFICATION_FOCUS_ENTER>((new std::string("NOTIFICATION_FOCUS_ENTER"))->c_str())
			.static_fun<&Control::NOTIFICATION_FOCUS_EXIT>((new std::string("NOTIFICATION_FOCUS_EXIT"))->c_str())
			.static_fun<&Control::NOTIFICATION_THEME_CHANGED>((new std::string("NOTIFICATION_THEME_CHANGED"))->c_str())
			.static_fun<&Control::NOTIFICATION_SCROLL_BEGIN>((new std::string("NOTIFICATION_SCROLL_BEGIN"))->c_str())
			.static_fun<&Control::NOTIFICATION_SCROLL_END>((new std::string("NOTIFICATION_SCROLL_END"))->c_str())
			.static_fun<&Control::NOTIFICATION_LAYOUT_DIRECTION_CHANGED>((new std::string("NOTIFICATION_LAYOUT_DIRECTION_CHANGED"))->c_str())
			.property<static_cast<bool (Control::*)()>(&Control::is_clipping_contents), static_cast<void (Control::*)(bool)>(&Control::set_clip_contents)>((new std::string("clip_contents"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_custom_minimum_size), static_cast<void (Control::*)(const Vector2 &)>(&Control::set_custom_minimum_size)>((new std::string("custom_minimum_size"))->c_str())
			.property<static_cast<Control::LayoutDirection (Control::*)() const>(&Control::get_layout_direction), static_cast<void (Control::*)(Control::LayoutDirection)>(&Control::set_layout_direction)>((new std::string("layout_direction"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_anchor)>((new std::string("anchor_left"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_anchor)>((new std::string("anchor_top"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_anchor)>((new std::string("anchor_right"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_anchor)>((new std::string("anchor_bottom"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_offset), static_cast<void (Control::*)(Side, double)>(&Control::set_offset)>((new std::string("offset_left"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_offset), static_cast<void (Control::*)(Side, double)>(&Control::set_offset)>((new std::string("offset_top"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_offset), static_cast<void (Control::*)(Side, double)>(&Control::set_offset)>((new std::string("offset_right"))->c_str())
			.property<static_cast<double (Control::*)(Side) const>(&Control::get_offset), static_cast<void (Control::*)(Side, double)>(&Control::set_offset)>((new std::string("offset_bottom"))->c_str())
			.property<static_cast<Control::GrowDirection (Control::*)() const>(&Control::get_h_grow_direction), static_cast<void (Control::*)(Control::GrowDirection)>(&Control::set_h_grow_direction)>((new std::string("grow_horizontal"))->c_str())
			.property<static_cast<Control::GrowDirection (Control::*)() const>(&Control::get_v_grow_direction), static_cast<void (Control::*)(Control::GrowDirection)>(&Control::set_v_grow_direction)>((new std::string("grow_vertical"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_size)>((new std::string("size"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_position)>((new std::string("position"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_global_position)>((new std::string("global_position"))->c_str())
			.property<static_cast<double (Control::*)() const>(&Control::get_rotation), static_cast<void (Control::*)(double)>(&Control::set_rotation)>((new std::string("rotation"))->c_str())
			.property<static_cast<double (Control::*)() const>(&Control::get_rotation_degrees), static_cast<void (Control::*)(double)>(&Control::set_rotation_degrees)>((new std::string("rotation_degrees"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_scale), static_cast<void (Control::*)(const Vector2 &)>(&Control::set_scale)>((new std::string("scale"))->c_str())
			.property<static_cast<Vector2 (Control::*)() const>(&Control::get_pivot_offset), static_cast<void (Control::*)(const Vector2 &)>(&Control::set_pivot_offset)>((new std::string("pivot_offset"))->c_str())
			.property<static_cast<BitField<Control::SizeFlags> (Control::*)() const>(&Control::get_h_size_flags), static_cast<void (Control::*)(BitField<Control::SizeFlags>)>(&Control::set_h_size_flags)>((new std::string("size_flags_horizontal"))->c_str())
			.property<static_cast<BitField<Control::SizeFlags> (Control::*)() const>(&Control::get_v_size_flags), static_cast<void (Control::*)(BitField<Control::SizeFlags>)>(&Control::set_v_size_flags)>((new std::string("size_flags_vertical"))->c_str())
			.property<static_cast<double (Control::*)() const>(&Control::get_stretch_ratio), static_cast<void (Control::*)(double)>(&Control::set_stretch_ratio)>((new std::string("size_flags_stretch_ratio"))->c_str())
			.property<static_cast<bool (Control::*)() const>(&Control::is_localizing_numeral_system), static_cast<void (Control::*)(bool)>(&Control::set_localize_numeral_system)>((new std::string("localize_numeral_system"))->c_str())
			.property<static_cast<bool (Control::*)() const>(&Control::is_auto_translating), static_cast<void (Control::*)(bool)>(&Control::set_auto_translate)>((new std::string("auto_translate"))->c_str())
			.property<static_cast<String (Control::*)() const>(&Control::get_tooltip_text), static_cast<void (Control::*)(const String &)>(&Control::set_tooltip_text)>((new std::string("tooltip_text"))->c_str())
			.property<static_cast<NodePath (Control::*)(Side) const>(&Control::get_focus_neighbor), static_cast<void (Control::*)(Side, const NodePath &)>(&Control::set_focus_neighbor)>((new std::string("focus_neighbor_left"))->c_str())
			.property<static_cast<NodePath (Control::*)(Side) const>(&Control::get_focus_neighbor), static_cast<void (Control::*)(Side, const NodePath &)>(&Control::set_focus_neighbor)>((new std::string("focus_neighbor_top"))->c_str())
			.property<static_cast<NodePath (Control::*)(Side) const>(&Control::get_focus_neighbor), static_cast<void (Control::*)(Side, const NodePath &)>(&Control::set_focus_neighbor)>((new std::string("focus_neighbor_right"))->c_str())
			.property<static_cast<NodePath (Control::*)(Side) const>(&Control::get_focus_neighbor), static_cast<void (Control::*)(Side, const NodePath &)>(&Control::set_focus_neighbor)>((new std::string("focus_neighbor_bottom"))->c_str())
			.property<static_cast<NodePath (Control::*)() const>(&Control::get_focus_next), static_cast<void (Control::*)(const NodePath &)>(&Control::set_focus_next)>((new std::string("focus_next"))->c_str())
			.property<static_cast<NodePath (Control::*)() const>(&Control::get_focus_previous), static_cast<void (Control::*)(const NodePath &)>(&Control::set_focus_previous)>((new std::string("focus_previous"))->c_str())
			.property<static_cast<Control::FocusMode (Control::*)() const>(&Control::get_focus_mode), static_cast<void (Control::*)(Control::FocusMode)>(&Control::set_focus_mode)>((new std::string("focus_mode"))->c_str())
			.property<static_cast<Control::MouseFilter (Control::*)() const>(&Control::get_mouse_filter), static_cast<void (Control::*)(Control::MouseFilter)>(&Control::set_mouse_filter)>((new std::string("mouse_filter"))->c_str())
			.property<static_cast<bool (Control::*)() const>(&Control::is_force_pass_scroll_events), static_cast<void (Control::*)(bool)>(&Control::set_force_pass_scroll_events)>((new std::string("mouse_force_pass_scroll_events"))->c_str())
			.property<static_cast<Control::CursorShape (Control::*)() const>(&Control::get_default_cursor_shape), static_cast<void (Control::*)(Control::CursorShape)>(&Control::set_default_cursor_shape)>((new std::string("mouse_default_cursor_shape"))->c_str())
			.property<static_cast<Node *(Control::*)() const>(&Control::get_shortcut_context), static_cast<void (Control::*)(Node *)>(&Control::set_shortcut_context)>((new std::string("shortcut_context"))->c_str())
			.property<static_cast<Ref<Theme> (Control::*)() const>(&Control::get_theme), static_cast<void (Control::*)(const Ref<Theme> &)>(&Control::set_theme)>((new std::string("theme"))->c_str())
			.property<static_cast<StringName (Control::*)() const>(&Control::get_theme_type_variation), static_cast<void (Control::*)(const StringName &)>(&Control::set_theme_type_variation)>((new std::string("theme_type_variation"))->c_str())
			.fun<static_cast<bool (Control::*)(const Vector2 &) const>(&Control::_has_point)>((new std::string("_has_point"))->c_str())
			.fun<static_cast<TypedArray<Vector3i> (Control::*)(const Array &, const String &) const>(&Control::_structured_text_parser)>((new std::string("_structured_text_parser"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::_get_minimum_size)>((new std::string("_get_minimum_size"))->c_str())
			.fun<static_cast<String (Control::*)(const Vector2 &) const>(&Control::_get_tooltip)>((new std::string("_get_tooltip"))->c_str())
			.fun<static_cast<Variant (Control::*)(const Vector2 &)>(&Control::_get_drag_data)>((new std::string("_get_drag_data"))->c_str())
			.fun<static_cast<bool (Control::*)(const Vector2 &, const Variant &) const>(&Control::_can_drop_data)>((new std::string("_can_drop_data"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &, const Variant &)>(&Control::_drop_data)>((new std::string("_drop_data"))->c_str())
			.fun<static_cast<Object *(Control::*)(const String &) const>(&Control::_make_custom_tooltip)>((new std::string("_make_custom_tooltip"))->c_str())
			.fun<static_cast<void (Control::*)(const Ref<InputEvent> &)>(&Control::_gui_input)>((new std::string("_gui_input"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::accept_event)>((new std::string("accept_event"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_minimum_size)>((new std::string("get_minimum_size"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_combined_minimum_size)>((new std::string("get_combined_minimum_size"))->c_str())
			.fun<static_cast<void (Control::*)(Control::LayoutPreset, bool)>(&Control::set_anchors_preset)>((new std::string("set_anchors_preset"))->c_str())
			.fun<static_cast<void (Control::*)(Control::LayoutPreset, Control::LayoutPresetMode, int32_t)>(&Control::set_offsets_preset)>((new std::string("set_offsets_preset"))->c_str())
			.fun<static_cast<void (Control::*)(Control::LayoutPreset, Control::LayoutPresetMode, int32_t)>(&Control::set_anchors_and_offsets_preset)>((new std::string("set_anchors_and_offsets_preset"))->c_str())
			.fun<static_cast<void (Control::*)(Side, double, bool, bool)>(&Control::set_anchor)>((new std::string("set_anchor"))->c_str())
			.fun<static_cast<void (Control::*)(Side, double, double, bool)>(&Control::set_anchor_and_offset)>((new std::string("set_anchor_and_offset"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &)>(&Control::set_begin)>((new std::string("set_begin"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &)>(&Control::set_end)>((new std::string("set_end"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &, bool)>(&Control::set_position)>((new std::string("set_position"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &, bool)>(&Control::set_size)>((new std::string("set_size"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::reset_size)>((new std::string("reset_size"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &, bool)>(&Control::set_global_position)>((new std::string("set_global_position"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_begin)>((new std::string("get_begin"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_end)>((new std::string("get_end"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_parent_area_size)>((new std::string("get_parent_area_size"))->c_str())
			.fun<static_cast<Vector2 (Control::*)() const>(&Control::get_screen_position)>((new std::string("get_screen_position"))->c_str())
			.fun<static_cast<Rect2 (Control::*)() const>(&Control::get_rect)>((new std::string("get_rect"))->c_str())
			.fun<static_cast<Rect2 (Control::*)() const>(&Control::get_global_rect)>((new std::string("get_global_rect"))->c_str())
			.fun<static_cast<bool (Control::*)() const>(&Control::has_focus)>((new std::string("has_focus"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::grab_focus)>((new std::string("grab_focus"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::release_focus)>((new std::string("release_focus"))->c_str())
			.fun<static_cast<Control *(Control::*)() const>(&Control::find_prev_valid_focus)>((new std::string("find_prev_valid_focus"))->c_str())
			.fun<static_cast<Control *(Control::*)() const>(&Control::find_next_valid_focus)>((new std::string("find_next_valid_focus"))->c_str())
			.fun<static_cast<Control *(Control::*)(Side) const>(&Control::find_valid_focus_neighbor)>((new std::string("find_valid_focus_neighbor"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::begin_bulk_theme_override)>((new std::string("begin_bulk_theme_override"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::end_bulk_theme_override)>((new std::string("end_bulk_theme_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, const Ref<Texture2D> &)>(&Control::add_theme_icon_override)>((new std::string("add_theme_icon_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, const Ref<StyleBox> &)>(&Control::add_theme_stylebox_override)>((new std::string("add_theme_stylebox_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, const Ref<Font> &)>(&Control::add_theme_font_override)>((new std::string("add_theme_font_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, int32_t)>(&Control::add_theme_font_size_override)>((new std::string("add_theme_font_size_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, const Color &)>(&Control::add_theme_color_override)>((new std::string("add_theme_color_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &, int32_t)>(&Control::add_theme_constant_override)>((new std::string("add_theme_constant_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_icon_override)>((new std::string("remove_theme_icon_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_stylebox_override)>((new std::string("remove_theme_stylebox_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_font_override)>((new std::string("remove_theme_font_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_font_size_override)>((new std::string("remove_theme_font_size_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_color_override)>((new std::string("remove_theme_color_override"))->c_str())
			.fun<static_cast<void (Control::*)(const StringName &)>(&Control::remove_theme_constant_override)>((new std::string("remove_theme_constant_override"))->c_str())
			.fun<static_cast<Ref<Texture2D> (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_icon)>((new std::string("get_theme_icon"))->c_str())
			.fun<static_cast<Ref<StyleBox> (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_stylebox)>((new std::string("get_theme_stylebox"))->c_str())
			.fun<static_cast<Ref<Font> (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_font)>((new std::string("get_theme_font"))->c_str())
			.fun<static_cast<int32_t (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_font_size)>((new std::string("get_theme_font_size"))->c_str())
			.fun<static_cast<Color (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_color)>((new std::string("get_theme_color"))->c_str())
			.fun<static_cast<int32_t (Control::*)(const StringName &, const StringName &) const>(&Control::get_theme_constant)>((new std::string("get_theme_constant"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_icon_override)>((new std::string("has_theme_icon_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_stylebox_override)>((new std::string("has_theme_stylebox_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_font_override)>((new std::string("has_theme_font_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_font_size_override)>((new std::string("has_theme_font_size_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_color_override)>((new std::string("has_theme_color_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &) const>(&Control::has_theme_constant_override)>((new std::string("has_theme_constant_override"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_icon)>((new std::string("has_theme_icon"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_stylebox)>((new std::string("has_theme_stylebox"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_font)>((new std::string("has_theme_font"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_font_size)>((new std::string("has_theme_font_size"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_color)>((new std::string("has_theme_color"))->c_str())
			.fun<static_cast<bool (Control::*)(const StringName &, const StringName &) const>(&Control::has_theme_constant)>((new std::string("has_theme_constant"))->c_str())
			.fun<static_cast<double (Control::*)() const>(&Control::get_theme_default_base_scale)>((new std::string("get_theme_default_base_scale"))->c_str())
			.fun<static_cast<Ref<Font> (Control::*)() const>(&Control::get_theme_default_font)>((new std::string("get_theme_default_font"))->c_str())
			.fun<static_cast<int32_t (Control::*)() const>(&Control::get_theme_default_font_size)>((new std::string("get_theme_default_font_size"))->c_str())
			.fun<static_cast<Control *(Control::*)() const>(&Control::get_parent_control)>((new std::string("get_parent_control"))->c_str())
			.fun<static_cast<String (Control::*)(const Vector2 &) const>(&Control::get_tooltip)>((new std::string("get_tooltip"))->c_str())
			.fun<static_cast<Control::CursorShape (Control::*)(const Vector2 &) const>(&Control::get_cursor_shape)>((new std::string("get_cursor_shape"))->c_str())
			.fun<static_cast<void (Control::*)(const Variant &, Control *)>(&Control::force_drag)>((new std::string("force_drag"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::grab_click_focus)>((new std::string("grab_click_focus"))->c_str())
			.fun<static_cast<void (Control::*)(const Callable &, const Callable &, const Callable &)>(&Control::set_drag_forwarding)>((new std::string("set_drag_forwarding"))->c_str())
			.fun<static_cast<void (Control::*)(Control *)>(&Control::set_drag_preview)>((new std::string("set_drag_preview"))->c_str())
			.fun<static_cast<bool (Control::*)() const>(&Control::is_drag_successful)>((new std::string("is_drag_successful"))->c_str())
			.fun<static_cast<void (Control::*)(const Vector2 &)>(&Control::warp_mouse)>((new std::string("warp_mouse"))->c_str())
			.fun<static_cast<void (Control::*)()>(&Control::update_minimum_size)>((new std::string("update_minimum_size"))->c_str())
			.fun<static_cast<bool (Control::*)() const>(&Control::is_layout_rtl)>((new std::string("is_layout_rtl"))->c_str());
	qjs::Value _FocusMode = context->newObject();
	_FocusMode[(new std::string("FOCUS_NONE"))->c_str()] = Control::FocusMode::FOCUS_NONE;
	_FocusMode[(new std::string("FOCUS_CLICK"))->c_str()] = Control::FocusMode::FOCUS_CLICK;
	_FocusMode[(new std::string("FOCUS_ALL"))->c_str()] = Control::FocusMode::FOCUS_ALL;
	_module.add("FocusMode", std::move(_FocusMode));
	qjs::Value _CursorShape = context->newObject();
	_CursorShape[(new std::string("CURSOR_ARROW"))->c_str()] = Control::CursorShape::CURSOR_ARROW;
	_CursorShape[(new std::string("CURSOR_IBEAM"))->c_str()] = Control::CursorShape::CURSOR_IBEAM;
	_CursorShape[(new std::string("CURSOR_POINTING_HAND"))->c_str()] = Control::CursorShape::CURSOR_POINTING_HAND;
	_CursorShape[(new std::string("CURSOR_CROSS"))->c_str()] = Control::CursorShape::CURSOR_CROSS;
	_CursorShape[(new std::string("CURSOR_WAIT"))->c_str()] = Control::CursorShape::CURSOR_WAIT;
	_CursorShape[(new std::string("CURSOR_BUSY"))->c_str()] = Control::CursorShape::CURSOR_BUSY;
	_CursorShape[(new std::string("CURSOR_DRAG"))->c_str()] = Control::CursorShape::CURSOR_DRAG;
	_CursorShape[(new std::string("CURSOR_CAN_DROP"))->c_str()] = Control::CursorShape::CURSOR_CAN_DROP;
	_CursorShape[(new std::string("CURSOR_FORBIDDEN"))->c_str()] = Control::CursorShape::CURSOR_FORBIDDEN;
	_CursorShape[(new std::string("CURSOR_VSIZE"))->c_str()] = Control::CursorShape::CURSOR_VSIZE;
	_CursorShape[(new std::string("CURSOR_HSIZE"))->c_str()] = Control::CursorShape::CURSOR_HSIZE;
	_CursorShape[(new std::string("CURSOR_BDIAGSIZE"))->c_str()] = Control::CursorShape::CURSOR_BDIAGSIZE;
	_CursorShape[(new std::string("CURSOR_FDIAGSIZE"))->c_str()] = Control::CursorShape::CURSOR_FDIAGSIZE;
	_CursorShape[(new std::string("CURSOR_MOVE"))->c_str()] = Control::CursorShape::CURSOR_MOVE;
	_CursorShape[(new std::string("CURSOR_VSPLIT"))->c_str()] = Control::CursorShape::CURSOR_VSPLIT;
	_CursorShape[(new std::string("CURSOR_HSPLIT"))->c_str()] = Control::CursorShape::CURSOR_HSPLIT;
	_CursorShape[(new std::string("CURSOR_HELP"))->c_str()] = Control::CursorShape::CURSOR_HELP;
	_module.add("CursorShape", std::move(_CursorShape));
	qjs::Value _LayoutPreset = context->newObject();
	_LayoutPreset[(new std::string("PRESET_TOP_LEFT"))->c_str()] = Control::LayoutPreset::PRESET_TOP_LEFT;
	_LayoutPreset[(new std::string("PRESET_TOP_RIGHT"))->c_str()] = Control::LayoutPreset::PRESET_TOP_RIGHT;
	_LayoutPreset[(new std::string("PRESET_BOTTOM_LEFT"))->c_str()] = Control::LayoutPreset::PRESET_BOTTOM_LEFT;
	_LayoutPreset[(new std::string("PRESET_BOTTOM_RIGHT"))->c_str()] = Control::LayoutPreset::PRESET_BOTTOM_RIGHT;
	_LayoutPreset[(new std::string("PRESET_CENTER_LEFT"))->c_str()] = Control::LayoutPreset::PRESET_CENTER_LEFT;
	_LayoutPreset[(new std::string("PRESET_CENTER_TOP"))->c_str()] = Control::LayoutPreset::PRESET_CENTER_TOP;
	_LayoutPreset[(new std::string("PRESET_CENTER_RIGHT"))->c_str()] = Control::LayoutPreset::PRESET_CENTER_RIGHT;
	_LayoutPreset[(new std::string("PRESET_CENTER_BOTTOM"))->c_str()] = Control::LayoutPreset::PRESET_CENTER_BOTTOM;
	_LayoutPreset[(new std::string("PRESET_CENTER"))->c_str()] = Control::LayoutPreset::PRESET_CENTER;
	_LayoutPreset[(new std::string("PRESET_LEFT_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_LEFT_WIDE;
	_LayoutPreset[(new std::string("PRESET_TOP_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_TOP_WIDE;
	_LayoutPreset[(new std::string("PRESET_RIGHT_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_RIGHT_WIDE;
	_LayoutPreset[(new std::string("PRESET_BOTTOM_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_BOTTOM_WIDE;
	_LayoutPreset[(new std::string("PRESET_VCENTER_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_VCENTER_WIDE;
	_LayoutPreset[(new std::string("PRESET_HCENTER_WIDE"))->c_str()] = Control::LayoutPreset::PRESET_HCENTER_WIDE;
	_LayoutPreset[(new std::string("PRESET_FULL_RECT"))->c_str()] = Control::LayoutPreset::PRESET_FULL_RECT;
	_module.add("LayoutPreset", std::move(_LayoutPreset));
	qjs::Value _LayoutPresetMode = context->newObject();
	_LayoutPresetMode[(new std::string("PRESET_MODE_MINSIZE"))->c_str()] = Control::LayoutPresetMode::PRESET_MODE_MINSIZE;
	_LayoutPresetMode[(new std::string("PRESET_MODE_KEEP_WIDTH"))->c_str()] = Control::LayoutPresetMode::PRESET_MODE_KEEP_WIDTH;
	_LayoutPresetMode[(new std::string("PRESET_MODE_KEEP_HEIGHT"))->c_str()] = Control::LayoutPresetMode::PRESET_MODE_KEEP_HEIGHT;
	_LayoutPresetMode[(new std::string("PRESET_MODE_KEEP_SIZE"))->c_str()] = Control::LayoutPresetMode::PRESET_MODE_KEEP_SIZE;
	_module.add("LayoutPresetMode", std::move(_LayoutPresetMode));
	qjs::Value _SizeFlags = context->newObject();
	_SizeFlags[(new std::string("SIZE_SHRINK_BEGIN"))->c_str()] = Control::SizeFlags::SIZE_SHRINK_BEGIN;
	_SizeFlags[(new std::string("SIZE_FILL"))->c_str()] = Control::SizeFlags::SIZE_FILL;
	_SizeFlags[(new std::string("SIZE_EXPAND"))->c_str()] = Control::SizeFlags::SIZE_EXPAND;
	_SizeFlags[(new std::string("SIZE_EXPAND_FILL"))->c_str()] = Control::SizeFlags::SIZE_EXPAND_FILL;
	_SizeFlags[(new std::string("SIZE_SHRINK_CENTER"))->c_str()] = Control::SizeFlags::SIZE_SHRINK_CENTER;
	_SizeFlags[(new std::string("SIZE_SHRINK_END"))->c_str()] = Control::SizeFlags::SIZE_SHRINK_END;
	_module.add("SizeFlags", std::move(_SizeFlags));
	qjs::Value _MouseFilter = context->newObject();
	_MouseFilter[(new std::string("MOUSE_FILTER_STOP"))->c_str()] = Control::MouseFilter::MOUSE_FILTER_STOP;
	_MouseFilter[(new std::string("MOUSE_FILTER_PASS"))->c_str()] = Control::MouseFilter::MOUSE_FILTER_PASS;
	_MouseFilter[(new std::string("MOUSE_FILTER_IGNORE"))->c_str()] = Control::MouseFilter::MOUSE_FILTER_IGNORE;
	_module.add("MouseFilter", std::move(_MouseFilter));
	qjs::Value _GrowDirection = context->newObject();
	_GrowDirection[(new std::string("GROW_DIRECTION_BEGIN"))->c_str()] = Control::GrowDirection::GROW_DIRECTION_BEGIN;
	_GrowDirection[(new std::string("GROW_DIRECTION_END"))->c_str()] = Control::GrowDirection::GROW_DIRECTION_END;
	_GrowDirection[(new std::string("GROW_DIRECTION_BOTH"))->c_str()] = Control::GrowDirection::GROW_DIRECTION_BOTH;
	_module.add("GrowDirection", std::move(_GrowDirection));
	qjs::Value _Anchor = context->newObject();
	_Anchor[(new std::string("ANCHOR_BEGIN"))->c_str()] = Control::Anchor::ANCHOR_BEGIN;
	_Anchor[(new std::string("ANCHOR_END"))->c_str()] = Control::Anchor::ANCHOR_END;
	_module.add("Anchor", std::move(_Anchor));
	qjs::Value _LayoutDirection = context->newObject();
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_INHERITED"))->c_str()] = Control::LayoutDirection::LAYOUT_DIRECTION_INHERITED;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_LOCALE"))->c_str()] = Control::LayoutDirection::LAYOUT_DIRECTION_LOCALE;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_LTR"))->c_str()] = Control::LayoutDirection::LAYOUT_DIRECTION_LTR;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_RTL"))->c_str()] = Control::LayoutDirection::LAYOUT_DIRECTION_RTL;
	_module.add("LayoutDirection", std::move(_LayoutDirection));
	qjs::Value _TextDirection = context->newObject();
	_TextDirection[(new std::string("TEXT_DIRECTION_INHERITED"))->c_str()] = Control::TextDirection::TEXT_DIRECTION_INHERITED;
	_TextDirection[(new std::string("TEXT_DIRECTION_AUTO"))->c_str()] = Control::TextDirection::TEXT_DIRECTION_AUTO;
	_TextDirection[(new std::string("TEXT_DIRECTION_LTR"))->c_str()] = Control::TextDirection::TEXT_DIRECTION_LTR;
	_TextDirection[(new std::string("TEXT_DIRECTION_RTL"))->c_str()] = Control::TextDirection::TEXT_DIRECTION_RTL;
	_module.add("TextDirection", std::move(_TextDirection));
}