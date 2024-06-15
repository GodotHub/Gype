#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Control() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Control>("Control")
            .constructor<>()
            .base<CanvasItem>()
            .static_fun<&Control::NOTIFICATION_RESIZED>("NOTIFICATION_RESIZED")
            .static_fun<&Control::NOTIFICATION_MOUSE_ENTER>("NOTIFICATION_MOUSE_ENTER")
            .static_fun<&Control::NOTIFICATION_MOUSE_EXIT>("NOTIFICATION_MOUSE_EXIT")
            .static_fun<&Control::NOTIFICATION_MOUSE_ENTER_SELF>("NOTIFICATION_MOUSE_ENTER_SELF")
            .static_fun<&Control::NOTIFICATION_MOUSE_EXIT_SELF>("NOTIFICATION_MOUSE_EXIT_SELF")
            .static_fun<&Control::NOTIFICATION_FOCUS_ENTER>("NOTIFICATION_FOCUS_ENTER")
            .static_fun<&Control::NOTIFICATION_FOCUS_EXIT>("NOTIFICATION_FOCUS_EXIT")
            .static_fun<&Control::NOTIFICATION_THEME_CHANGED>("NOTIFICATION_THEME_CHANGED")
            .static_fun<&Control::NOTIFICATION_SCROLL_BEGIN>("NOTIFICATION_SCROLL_BEGIN")
            .static_fun<&Control::NOTIFICATION_SCROLL_END>("NOTIFICATION_SCROLL_END")
            .static_fun<&Control::NOTIFICATION_LAYOUT_DIRECTION_CHANGED>("NOTIFICATION_LAYOUT_DIRECTION_CHANGED")
            .property<static_cast<bool(Control::*)()>(&Control::is_clipping_contents),static_cast<void(Control::*)(bool)>(&Control::set_clip_contents)>("clip_contents")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_custom_minimum_size),static_cast<void(Control::*)(const Vector2 &)>(&Control::set_custom_minimum_size)>("custom_minimum_size")
            .property<static_cast<Control::LayoutDirection(Control::*)()const>(&Control::get_layout_direction),static_cast<void(Control::*)(Control::LayoutDirection)>(&Control::set_layout_direction)>("layout_direction")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_anchor)>("anchor_left")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_anchor)>("anchor_top")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_anchor)>("anchor_right")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_anchor)>("anchor_bottom")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_offset),static_cast<void(Control::*)(Side,double)>(&Control::set_offset)>("offset_left")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_offset),static_cast<void(Control::*)(Side,double)>(&Control::set_offset)>("offset_top")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_offset),static_cast<void(Control::*)(Side,double)>(&Control::set_offset)>("offset_right")
            .property<static_cast<double(Control::*)(Side)const>(&Control::get_offset),static_cast<void(Control::*)(Side,double)>(&Control::set_offset)>("offset_bottom")
            .property<static_cast<Control::GrowDirection(Control::*)()const>(&Control::get_h_grow_direction),static_cast<void(Control::*)(Control::GrowDirection)>(&Control::set_h_grow_direction)>("grow_horizontal")
            .property<static_cast<Control::GrowDirection(Control::*)()const>(&Control::get_v_grow_direction),static_cast<void(Control::*)(Control::GrowDirection)>(&Control::set_v_grow_direction)>("grow_vertical")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_size)>("size")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_position)>("position")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_global_position)>("global_position")
            .property<static_cast<double(Control::*)()const>(&Control::get_rotation),static_cast<void(Control::*)(double)>(&Control::set_rotation)>("rotation")
            .property<static_cast<double(Control::*)()const>(&Control::get_rotation_degrees),static_cast<void(Control::*)(double)>(&Control::set_rotation_degrees)>("rotation_degrees")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_scale),static_cast<void(Control::*)(const Vector2 &)>(&Control::set_scale)>("scale")
            .property<static_cast<Vector2(Control::*)()const>(&Control::get_pivot_offset),static_cast<void(Control::*)(const Vector2 &)>(&Control::set_pivot_offset)>("pivot_offset")
            .property<static_cast<BitField<Control::SizeFlags>(Control::*)()const>(&Control::get_h_size_flags),static_cast<void(Control::*)(BitField<Control::SizeFlags>)>(&Control::set_h_size_flags)>("size_flags_horizontal")
            .property<static_cast<BitField<Control::SizeFlags>(Control::*)()const>(&Control::get_v_size_flags),static_cast<void(Control::*)(BitField<Control::SizeFlags>)>(&Control::set_v_size_flags)>("size_flags_vertical")
            .property<static_cast<double(Control::*)()const>(&Control::get_stretch_ratio),static_cast<void(Control::*)(double)>(&Control::set_stretch_ratio)>("size_flags_stretch_ratio")
            .property<static_cast<bool(Control::*)()const>(&Control::is_localizing_numeral_system),static_cast<void(Control::*)(bool)>(&Control::set_localize_numeral_system)>("localize_numeral_system")
            .property<static_cast<bool(Control::*)()const>(&Control::is_auto_translating),static_cast<void(Control::*)(bool)>(&Control::set_auto_translate)>("auto_translate")
            .property<static_cast<String(Control::*)()const>(&Control::get_tooltip_text),static_cast<void(Control::*)(const String &)>(&Control::set_tooltip_text)>("tooltip_text")
            .property<static_cast<NodePath(Control::*)(Side)const>(&Control::get_focus_neighbor),static_cast<void(Control::*)(Side,const NodePath &)>(&Control::set_focus_neighbor)>("focus_neighbor_left")
            .property<static_cast<NodePath(Control::*)(Side)const>(&Control::get_focus_neighbor),static_cast<void(Control::*)(Side,const NodePath &)>(&Control::set_focus_neighbor)>("focus_neighbor_top")
            .property<static_cast<NodePath(Control::*)(Side)const>(&Control::get_focus_neighbor),static_cast<void(Control::*)(Side,const NodePath &)>(&Control::set_focus_neighbor)>("focus_neighbor_right")
            .property<static_cast<NodePath(Control::*)(Side)const>(&Control::get_focus_neighbor),static_cast<void(Control::*)(Side,const NodePath &)>(&Control::set_focus_neighbor)>("focus_neighbor_bottom")
            .property<static_cast<NodePath(Control::*)()const>(&Control::get_focus_next),static_cast<void(Control::*)(const NodePath &)>(&Control::set_focus_next)>("focus_next")
            .property<static_cast<NodePath(Control::*)()const>(&Control::get_focus_previous),static_cast<void(Control::*)(const NodePath &)>(&Control::set_focus_previous)>("focus_previous")
            .property<static_cast<Control::FocusMode(Control::*)()const>(&Control::get_focus_mode),static_cast<void(Control::*)(Control::FocusMode)>(&Control::set_focus_mode)>("focus_mode")
            .property<static_cast<Control::MouseFilter(Control::*)()const>(&Control::get_mouse_filter),static_cast<void(Control::*)(Control::MouseFilter)>(&Control::set_mouse_filter)>("mouse_filter")
            .property<static_cast<bool(Control::*)()const>(&Control::is_force_pass_scroll_events),static_cast<void(Control::*)(bool)>(&Control::set_force_pass_scroll_events)>("mouse_force_pass_scroll_events")
            .property<static_cast<Control::CursorShape(Control::*)()const>(&Control::get_default_cursor_shape),static_cast<void(Control::*)(Control::CursorShape)>(&Control::set_default_cursor_shape)>("mouse_default_cursor_shape")
            .property<static_cast<Node *(Control::*)()const>(&Control::get_shortcut_context),static_cast<void(Control::*)(Node *)>(&Control::set_shortcut_context)>("shortcut_context")
            .property<static_cast<Ref<Theme>(Control::*)()const>(&Control::get_theme),static_cast<void(Control::*)(const Ref<Theme> &)>(&Control::set_theme)>("theme")
            .property<static_cast<StringName(Control::*)()const>(&Control::get_theme_type_variation),static_cast<void(Control::*)(const StringName &)>(&Control::set_theme_type_variation)>("theme_type_variation")
            .fun<static_cast<bool(Control::*)(const Vector2 &)const>(&Control::_has_point)>("_has_point")
            .fun<static_cast<TypedArray<Vector3i>(Control::*)(const Array &,const String &)const>(&Control::_structured_text_parser)>("_structured_text_parser")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::_get_minimum_size)>("_get_minimum_size")
            .fun<static_cast<String(Control::*)(const Vector2 &)const>(&Control::_get_tooltip)>("_get_tooltip")
            .fun<static_cast<Variant(Control::*)(const Vector2 &)>(&Control::_get_drag_data)>("_get_drag_data")
            .fun<static_cast<bool(Control::*)(const Vector2 &,const Variant &)const>(&Control::_can_drop_data)>("_can_drop_data")
            .fun<static_cast<void(Control::*)(const Vector2 &,const Variant &)>(&Control::_drop_data)>("_drop_data")
            .fun<static_cast<Object *(Control::*)(const String &)const>(&Control::_make_custom_tooltip)>("_make_custom_tooltip")
            .fun<static_cast<void(Control::*)(const Ref<InputEvent> &)>(&Control::_gui_input)>("_gui_input")
            .fun<static_cast<void(Control::*)()>(&Control::accept_event)>("accept_event")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_minimum_size)>("get_minimum_size")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_combined_minimum_size)>("get_combined_minimum_size")
            .fun<static_cast<void(Control::*)(Control::LayoutPreset,bool)>(&Control::set_anchors_preset)>("set_anchors_preset")
            .fun<static_cast<void(Control::*)(Control::LayoutPreset,Control::LayoutPresetMode,int32_t)>(&Control::set_offsets_preset)>("set_offsets_preset")
            .fun<static_cast<void(Control::*)(Control::LayoutPreset,Control::LayoutPresetMode,int32_t)>(&Control::set_anchors_and_offsets_preset)>("set_anchors_and_offsets_preset")
            .fun<static_cast<void(Control::*)(Side,double,bool,bool)>(&Control::set_anchor)>("set_anchor")
            .fun<static_cast<void(Control::*)(Side,double,double,bool)>(&Control::set_anchor_and_offset)>("set_anchor_and_offset")
            .fun<static_cast<void(Control::*)(const Vector2 &)>(&Control::set_begin)>("set_begin")
            .fun<static_cast<void(Control::*)(const Vector2 &)>(&Control::set_end)>("set_end")
            .fun<static_cast<void(Control::*)(const Vector2 &,bool)>(&Control::set_position)>("set_position")
            .fun<static_cast<void(Control::*)(const Vector2 &,bool)>(&Control::set_size)>("set_size")
            .fun<static_cast<void(Control::*)()>(&Control::reset_size)>("reset_size")
            .fun<static_cast<void(Control::*)(const Vector2 &,bool)>(&Control::set_global_position)>("set_global_position")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_begin)>("get_begin")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_end)>("get_end")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_parent_area_size)>("get_parent_area_size")
            .fun<static_cast<Vector2(Control::*)()const>(&Control::get_screen_position)>("get_screen_position")
            .fun<static_cast<Rect2(Control::*)()const>(&Control::get_rect)>("get_rect")
            .fun<static_cast<Rect2(Control::*)()const>(&Control::get_global_rect)>("get_global_rect")
            .fun<static_cast<bool(Control::*)()const>(&Control::has_focus)>("has_focus")
            .fun<static_cast<void(Control::*)()>(&Control::grab_focus)>("grab_focus")
            .fun<static_cast<void(Control::*)()>(&Control::release_focus)>("release_focus")
            .fun<static_cast<Control *(Control::*)()const>(&Control::find_prev_valid_focus)>("find_prev_valid_focus")
            .fun<static_cast<Control *(Control::*)()const>(&Control::find_next_valid_focus)>("find_next_valid_focus")
            .fun<static_cast<Control *(Control::*)(Side)const>(&Control::find_valid_focus_neighbor)>("find_valid_focus_neighbor")
            .fun<static_cast<void(Control::*)()>(&Control::begin_bulk_theme_override)>("begin_bulk_theme_override")
            .fun<static_cast<void(Control::*)()>(&Control::end_bulk_theme_override)>("end_bulk_theme_override")
            .fun<static_cast<void(Control::*)(const StringName &,const Ref<Texture2D> &)>(&Control::add_theme_icon_override)>("add_theme_icon_override")
            .fun<static_cast<void(Control::*)(const StringName &,const Ref<StyleBox> &)>(&Control::add_theme_stylebox_override)>("add_theme_stylebox_override")
            .fun<static_cast<void(Control::*)(const StringName &,const Ref<Font> &)>(&Control::add_theme_font_override)>("add_theme_font_override")
            .fun<static_cast<void(Control::*)(const StringName &,int32_t)>(&Control::add_theme_font_size_override)>("add_theme_font_size_override")
            .fun<static_cast<void(Control::*)(const StringName &,const Color &)>(&Control::add_theme_color_override)>("add_theme_color_override")
            .fun<static_cast<void(Control::*)(const StringName &,int32_t)>(&Control::add_theme_constant_override)>("add_theme_constant_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_icon_override)>("remove_theme_icon_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_stylebox_override)>("remove_theme_stylebox_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_font_override)>("remove_theme_font_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_font_size_override)>("remove_theme_font_size_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_color_override)>("remove_theme_color_override")
            .fun<static_cast<void(Control::*)(const StringName &)>(&Control::remove_theme_constant_override)>("remove_theme_constant_override")
            .fun<static_cast<Ref<Texture2D>(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_icon)>("get_theme_icon")
            .fun<static_cast<Ref<StyleBox>(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_stylebox)>("get_theme_stylebox")
            .fun<static_cast<Ref<Font>(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_font)>("get_theme_font")
            .fun<static_cast<int32_t(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_font_size)>("get_theme_font_size")
            .fun<static_cast<Color(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_color)>("get_theme_color")
            .fun<static_cast<int32_t(Control::*)(const StringName &,const StringName &)const>(&Control::get_theme_constant)>("get_theme_constant")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_icon_override)>("has_theme_icon_override")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_stylebox_override)>("has_theme_stylebox_override")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_font_override)>("has_theme_font_override")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_font_size_override)>("has_theme_font_size_override")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_color_override)>("has_theme_color_override")
            .fun<static_cast<bool(Control::*)(const StringName &)const>(&Control::has_theme_constant_override)>("has_theme_constant_override")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_icon)>("has_theme_icon")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_stylebox)>("has_theme_stylebox")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_font)>("has_theme_font")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_font_size)>("has_theme_font_size")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_color)>("has_theme_color")
            .fun<static_cast<bool(Control::*)(const StringName &,const StringName &)const>(&Control::has_theme_constant)>("has_theme_constant")
            .fun<static_cast<double(Control::*)()const>(&Control::get_theme_default_base_scale)>("get_theme_default_base_scale")
            .fun<static_cast<Ref<Font>(Control::*)()const>(&Control::get_theme_default_font)>("get_theme_default_font")
            .fun<static_cast<int32_t(Control::*)()const>(&Control::get_theme_default_font_size)>("get_theme_default_font_size")
            .fun<static_cast<Control *(Control::*)()const>(&Control::get_parent_control)>("get_parent_control")
            .fun<static_cast<String(Control::*)(const Vector2 &)const>(&Control::get_tooltip)>("get_tooltip")
            .fun<static_cast<Control::CursorShape(Control::*)(const Vector2 &)const>(&Control::get_cursor_shape)>("get_cursor_shape")
            .fun<static_cast<void(Control::*)(const Variant &,Control *)>(&Control::force_drag)>("force_drag")
            .fun<static_cast<void(Control::*)()>(&Control::grab_click_focus)>("grab_click_focus")
            .fun<static_cast<void(Control::*)(const Callable &,const Callable &,const Callable &)>(&Control::set_drag_forwarding)>("set_drag_forwarding")
            .fun<static_cast<void(Control::*)(Control *)>(&Control::set_drag_preview)>("set_drag_preview")
            .fun<static_cast<bool(Control::*)()const>(&Control::is_drag_successful)>("is_drag_successful")
            .fun<static_cast<void(Control::*)(const Vector2 &)>(&Control::warp_mouse)>("warp_mouse")
            .fun<static_cast<void(Control::*)()>(&Control::update_minimum_size)>("update_minimum_size")
            .fun<static_cast<bool(Control::*)()const>(&Control::is_layout_rtl)>("is_layout_rtl")
;    qjs::Value _FocusMode = context->newObject();
    _FocusMode["FOCUS_NONE"] = Control::FocusMode::FOCUS_NONE;
    _FocusMode["FOCUS_CLICK"] = Control::FocusMode::FOCUS_CLICK;
    _FocusMode["FOCUS_ALL"] = Control::FocusMode::FOCUS_ALL;
    _module.add("FocusMode", std::move(_FocusMode));
    qjs::Value _CursorShape = context->newObject();
    _CursorShape["CURSOR_ARROW"] = Control::CursorShape::CURSOR_ARROW;
    _CursorShape["CURSOR_IBEAM"] = Control::CursorShape::CURSOR_IBEAM;
    _CursorShape["CURSOR_POINTING_HAND"] = Control::CursorShape::CURSOR_POINTING_HAND;
    _CursorShape["CURSOR_CROSS"] = Control::CursorShape::CURSOR_CROSS;
    _CursorShape["CURSOR_WAIT"] = Control::CursorShape::CURSOR_WAIT;
    _CursorShape["CURSOR_BUSY"] = Control::CursorShape::CURSOR_BUSY;
    _CursorShape["CURSOR_DRAG"] = Control::CursorShape::CURSOR_DRAG;
    _CursorShape["CURSOR_CAN_DROP"] = Control::CursorShape::CURSOR_CAN_DROP;
    _CursorShape["CURSOR_FORBIDDEN"] = Control::CursorShape::CURSOR_FORBIDDEN;
    _CursorShape["CURSOR_VSIZE"] = Control::CursorShape::CURSOR_VSIZE;
    _CursorShape["CURSOR_HSIZE"] = Control::CursorShape::CURSOR_HSIZE;
    _CursorShape["CURSOR_BDIAGSIZE"] = Control::CursorShape::CURSOR_BDIAGSIZE;
    _CursorShape["CURSOR_FDIAGSIZE"] = Control::CursorShape::CURSOR_FDIAGSIZE;
    _CursorShape["CURSOR_MOVE"] = Control::CursorShape::CURSOR_MOVE;
    _CursorShape["CURSOR_VSPLIT"] = Control::CursorShape::CURSOR_VSPLIT;
    _CursorShape["CURSOR_HSPLIT"] = Control::CursorShape::CURSOR_HSPLIT;
    _CursorShape["CURSOR_HELP"] = Control::CursorShape::CURSOR_HELP;
    _module.add("CursorShape", std::move(_CursorShape));
    qjs::Value _LayoutPreset = context->newObject();
    _LayoutPreset["PRESET_TOP_LEFT"] = Control::LayoutPreset::PRESET_TOP_LEFT;
    _LayoutPreset["PRESET_TOP_RIGHT"] = Control::LayoutPreset::PRESET_TOP_RIGHT;
    _LayoutPreset["PRESET_BOTTOM_LEFT"] = Control::LayoutPreset::PRESET_BOTTOM_LEFT;
    _LayoutPreset["PRESET_BOTTOM_RIGHT"] = Control::LayoutPreset::PRESET_BOTTOM_RIGHT;
    _LayoutPreset["PRESET_CENTER_LEFT"] = Control::LayoutPreset::PRESET_CENTER_LEFT;
    _LayoutPreset["PRESET_CENTER_TOP"] = Control::LayoutPreset::PRESET_CENTER_TOP;
    _LayoutPreset["PRESET_CENTER_RIGHT"] = Control::LayoutPreset::PRESET_CENTER_RIGHT;
    _LayoutPreset["PRESET_CENTER_BOTTOM"] = Control::LayoutPreset::PRESET_CENTER_BOTTOM;
    _LayoutPreset["PRESET_CENTER"] = Control::LayoutPreset::PRESET_CENTER;
    _LayoutPreset["PRESET_LEFT_WIDE"] = Control::LayoutPreset::PRESET_LEFT_WIDE;
    _LayoutPreset["PRESET_TOP_WIDE"] = Control::LayoutPreset::PRESET_TOP_WIDE;
    _LayoutPreset["PRESET_RIGHT_WIDE"] = Control::LayoutPreset::PRESET_RIGHT_WIDE;
    _LayoutPreset["PRESET_BOTTOM_WIDE"] = Control::LayoutPreset::PRESET_BOTTOM_WIDE;
    _LayoutPreset["PRESET_VCENTER_WIDE"] = Control::LayoutPreset::PRESET_VCENTER_WIDE;
    _LayoutPreset["PRESET_HCENTER_WIDE"] = Control::LayoutPreset::PRESET_HCENTER_WIDE;
    _LayoutPreset["PRESET_FULL_RECT"] = Control::LayoutPreset::PRESET_FULL_RECT;
    _module.add("LayoutPreset", std::move(_LayoutPreset));
    qjs::Value _LayoutPresetMode = context->newObject();
    _LayoutPresetMode["PRESET_MODE_MINSIZE"] = Control::LayoutPresetMode::PRESET_MODE_MINSIZE;
    _LayoutPresetMode["PRESET_MODE_KEEP_WIDTH"] = Control::LayoutPresetMode::PRESET_MODE_KEEP_WIDTH;
    _LayoutPresetMode["PRESET_MODE_KEEP_HEIGHT"] = Control::LayoutPresetMode::PRESET_MODE_KEEP_HEIGHT;
    _LayoutPresetMode["PRESET_MODE_KEEP_SIZE"] = Control::LayoutPresetMode::PRESET_MODE_KEEP_SIZE;
    _module.add("LayoutPresetMode", std::move(_LayoutPresetMode));
    qjs::Value _SizeFlags = context->newObject();
    _SizeFlags["SIZE_SHRINK_BEGIN"] = Control::SizeFlags::SIZE_SHRINK_BEGIN;
    _SizeFlags["SIZE_FILL"] = Control::SizeFlags::SIZE_FILL;
    _SizeFlags["SIZE_EXPAND"] = Control::SizeFlags::SIZE_EXPAND;
    _SizeFlags["SIZE_EXPAND_FILL"] = Control::SizeFlags::SIZE_EXPAND_FILL;
    _SizeFlags["SIZE_SHRINK_CENTER"] = Control::SizeFlags::SIZE_SHRINK_CENTER;
    _SizeFlags["SIZE_SHRINK_END"] = Control::SizeFlags::SIZE_SHRINK_END;
    _module.add("SizeFlags", std::move(_SizeFlags));
    qjs::Value _MouseFilter = context->newObject();
    _MouseFilter["MOUSE_FILTER_STOP"] = Control::MouseFilter::MOUSE_FILTER_STOP;
    _MouseFilter["MOUSE_FILTER_PASS"] = Control::MouseFilter::MOUSE_FILTER_PASS;
    _MouseFilter["MOUSE_FILTER_IGNORE"] = Control::MouseFilter::MOUSE_FILTER_IGNORE;
    _module.add("MouseFilter", std::move(_MouseFilter));
    qjs::Value _GrowDirection = context->newObject();
    _GrowDirection["GROW_DIRECTION_BEGIN"] = Control::GrowDirection::GROW_DIRECTION_BEGIN;
    _GrowDirection["GROW_DIRECTION_END"] = Control::GrowDirection::GROW_DIRECTION_END;
    _GrowDirection["GROW_DIRECTION_BOTH"] = Control::GrowDirection::GROW_DIRECTION_BOTH;
    _module.add("GrowDirection", std::move(_GrowDirection));
    qjs::Value _Anchor = context->newObject();
    _Anchor["ANCHOR_BEGIN"] = Control::Anchor::ANCHOR_BEGIN;
    _Anchor["ANCHOR_END"] = Control::Anchor::ANCHOR_END;
    _module.add("Anchor", std::move(_Anchor));
    qjs::Value _LayoutDirection = context->newObject();
    _LayoutDirection["LAYOUT_DIRECTION_INHERITED"] = Control::LayoutDirection::LAYOUT_DIRECTION_INHERITED;
    _LayoutDirection["LAYOUT_DIRECTION_LOCALE"] = Control::LayoutDirection::LAYOUT_DIRECTION_LOCALE;
    _LayoutDirection["LAYOUT_DIRECTION_LTR"] = Control::LayoutDirection::LAYOUT_DIRECTION_LTR;
    _LayoutDirection["LAYOUT_DIRECTION_RTL"] = Control::LayoutDirection::LAYOUT_DIRECTION_RTL;
    _module.add("LayoutDirection", std::move(_LayoutDirection));
    qjs::Value _TextDirection = context->newObject();
    _TextDirection["TEXT_DIRECTION_INHERITED"] = Control::TextDirection::TEXT_DIRECTION_INHERITED;
    _TextDirection["TEXT_DIRECTION_AUTO"] = Control::TextDirection::TEXT_DIRECTION_AUTO;
    _TextDirection["TEXT_DIRECTION_LTR"] = Control::TextDirection::TEXT_DIRECTION_LTR;
    _TextDirection["TEXT_DIRECTION_RTL"] = Control::TextDirection::TEXT_DIRECTION_RTL;
    _module.add("TextDirection", std::move(_TextDirection));
}