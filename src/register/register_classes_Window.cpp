
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Window() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<Window>("Window")
			.constructor<>()
			.base<Viewport>()
			.static_fun<&Window::NOTIFICATION_VISIBILITY_CHANGED>((new std::string("NOTIFICATION_VISIBILITY_CHANGED"))->c_str())
			.static_fun<&Window::NOTIFICATION_THEME_CHANGED>((new std::string("NOTIFICATION_THEME_CHANGED"))->c_str())
			.property<static_cast<Window::Mode (Window::*)() const>(&Window::get_mode), static_cast<void (Window::*)(Window::Mode)>(&Window::set_mode)>((new std::string("mode"))->c_str())
			.property<static_cast<String (Window::*)() const>(&Window::get_title), static_cast<void (Window::*)(const String &)>(&Window::set_title)>((new std::string("title"))->c_str())
			.property<static_cast<Window::WindowInitialPosition (Window::*)() const>(&Window::get_initial_position), static_cast<void (Window::*)(Window::WindowInitialPosition)>(&Window::set_initial_position)>((new std::string("initial_position"))->c_str())
			.property<static_cast<Vector2i (Window::*)() const>(&Window::get_position), static_cast<void (Window::*)(const Vector2i &)>(&Window::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<Vector2i (Window::*)() const>(&Window::get_size), static_cast<void (Window::*)(const Vector2i &)>(&Window::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<int32_t (Window::*)() const>(&Window::get_current_screen), static_cast<void (Window::*)(int32_t)>(&Window::set_current_screen)>((new std::string("current_screen"))->c_str())
			.property<static_cast<PackedVector2Array (Window::*)() const>(&Window::get_mouse_passthrough_polygon), static_cast<void (Window::*)(const PackedVector2Array &)>(&Window::set_mouse_passthrough_polygon)>((new std::string("mouse_passthrough_polygon"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_visible), static_cast<void (Window::*)(bool)>(&Window::set_visible)>((new std::string("visible"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_wrapping_controls), static_cast<void (Window::*)(bool)>(&Window::set_wrap_controls)>((new std::string("wrap_controls"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_transient), static_cast<void (Window::*)(bool)>(&Window::set_transient)>((new std::string("transient"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_transient_to_focused), static_cast<void (Window::*)(bool)>(&Window::set_transient_to_focused)>((new std::string("transient_to_focused"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_exclusive), static_cast<void (Window::*)(bool)>(&Window::set_exclusive)>((new std::string("exclusive"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("unresizable"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("borderless"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("always_on_top"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("transparent"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("unfocusable"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("popup_window"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("extend_to_title"))->c_str())
			.property<static_cast<bool (Window::*)(Window::Flags) const>(&Window::get_flag), static_cast<void (Window::*)(Window::Flags, bool)>(&Window::set_flag)>((new std::string("mouse_passthrough"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::get_force_native), static_cast<void (Window::*)(bool)>(&Window::set_force_native)>((new std::string("force_native"))->c_str())
			.property<static_cast<Vector2i (Window::*)() const>(&Window::get_min_size), static_cast<void (Window::*)(const Vector2i &)>(&Window::set_min_size)>((new std::string("min_size"))->c_str())
			.property<static_cast<Vector2i (Window::*)() const>(&Window::get_max_size), static_cast<void (Window::*)(const Vector2i &)>(&Window::set_max_size)>((new std::string("max_size"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::get_keep_title_visible), static_cast<void (Window::*)(bool)>(&Window::set_keep_title_visible)>((new std::string("keep_title_visible"))->c_str())
			.property<static_cast<Vector2i (Window::*)() const>(&Window::get_content_scale_size), static_cast<void (Window::*)(const Vector2i &)>(&Window::set_content_scale_size)>((new std::string("content_scale_size"))->c_str())
			.property<static_cast<Window::ContentScaleMode (Window::*)() const>(&Window::get_content_scale_mode), static_cast<void (Window::*)(Window::ContentScaleMode)>(&Window::set_content_scale_mode)>((new std::string("content_scale_mode"))->c_str())
			.property<static_cast<Window::ContentScaleAspect (Window::*)() const>(&Window::get_content_scale_aspect), static_cast<void (Window::*)(Window::ContentScaleAspect)>(&Window::set_content_scale_aspect)>((new std::string("content_scale_aspect"))->c_str())
			.property<static_cast<Window::ContentScaleStretch (Window::*)() const>(&Window::get_content_scale_stretch), static_cast<void (Window::*)(Window::ContentScaleStretch)>(&Window::set_content_scale_stretch)>((new std::string("content_scale_stretch"))->c_str())
			.property<static_cast<double (Window::*)() const>(&Window::get_content_scale_factor), static_cast<void (Window::*)(double)>(&Window::set_content_scale_factor)>((new std::string("content_scale_factor"))->c_str())
			.property<static_cast<bool (Window::*)() const>(&Window::is_auto_translating), static_cast<void (Window::*)(bool)>(&Window::set_auto_translate)>((new std::string("auto_translate"))->c_str())
			.property<static_cast<Ref<Theme> (Window::*)() const>(&Window::get_theme), static_cast<void (Window::*)(const Ref<Theme> &)>(&Window::set_theme)>((new std::string("theme"))->c_str())
			.property<static_cast<StringName (Window::*)() const>(&Window::get_theme_type_variation), static_cast<void (Window::*)(const StringName &)>(&Window::set_theme_type_variation)>((new std::string("theme_type_variation"))->c_str())
			.fun<static_cast<Vector2 (Window::*)() const>(&Window::_get_contents_minimum_size)>((new std::string("_get_contents_minimum_size"))->c_str())
			.fun<static_cast<int32_t (Window::*)() const>(&Window::get_window_id)>((new std::string("get_window_id"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::move_to_center)>((new std::string("move_to_center"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::reset_size)>((new std::string("reset_size"))->c_str())
			.fun<static_cast<Vector2i (Window::*)() const>(&Window::get_position_with_decorations)>((new std::string("get_position_with_decorations"))->c_str())
			.fun<static_cast<Vector2i (Window::*)() const>(&Window::get_size_with_decorations)>((new std::string("get_size_with_decorations"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::is_maximize_allowed)>((new std::string("is_maximize_allowed"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::request_attention)>((new std::string("request_attention"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::move_to_foreground)>((new std::string("move_to_foreground"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::hide)>((new std::string("hide"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::show)>((new std::string("show"))->c_str())
			.fun<static_cast<void (Window::*)(bool)>(&Window::set_unparent_when_invisible)>((new std::string("set_unparent_when_invisible"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::can_draw)>((new std::string("can_draw"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::has_focus)>((new std::string("has_focus"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::grab_focus)>((new std::string("grab_focus"))->c_str())
			.fun<static_cast<void (Window::*)(bool)>(&Window::set_ime_active)>((new std::string("set_ime_active"))->c_str())
			.fun<static_cast<void (Window::*)(const Vector2i &)>(&Window::set_ime_position)>((new std::string("set_ime_position"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::is_embedded)>((new std::string("is_embedded"))->c_str())
			.fun<static_cast<Vector2 (Window::*)() const>(&Window::get_contents_minimum_size)>((new std::string("get_contents_minimum_size"))->c_str())
			.fun<static_cast<void (Window::*)(bool)>(&Window::set_use_font_oversampling)>((new std::string("set_use_font_oversampling"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::is_using_font_oversampling)>((new std::string("is_using_font_oversampling"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::child_controls_changed)>((new std::string("child_controls_changed"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::begin_bulk_theme_override)>((new std::string("begin_bulk_theme_override"))->c_str())
			.fun<static_cast<void (Window::*)()>(&Window::end_bulk_theme_override)>((new std::string("end_bulk_theme_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, const Ref<Texture2D> &)>(&Window::add_theme_icon_override)>((new std::string("add_theme_icon_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, const Ref<StyleBox> &)>(&Window::add_theme_stylebox_override)>((new std::string("add_theme_stylebox_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, const Ref<Font> &)>(&Window::add_theme_font_override)>((new std::string("add_theme_font_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, int32_t)>(&Window::add_theme_font_size_override)>((new std::string("add_theme_font_size_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, const Color &)>(&Window::add_theme_color_override)>((new std::string("add_theme_color_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &, int32_t)>(&Window::add_theme_constant_override)>((new std::string("add_theme_constant_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_icon_override)>((new std::string("remove_theme_icon_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_stylebox_override)>((new std::string("remove_theme_stylebox_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_font_override)>((new std::string("remove_theme_font_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_font_size_override)>((new std::string("remove_theme_font_size_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_color_override)>((new std::string("remove_theme_color_override"))->c_str())
			.fun<static_cast<void (Window::*)(const StringName &)>(&Window::remove_theme_constant_override)>((new std::string("remove_theme_constant_override"))->c_str())
			.fun<static_cast<Ref<Texture2D> (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_icon)>((new std::string("get_theme_icon"))->c_str())
			.fun<static_cast<Ref<StyleBox> (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_stylebox)>((new std::string("get_theme_stylebox"))->c_str())
			.fun<static_cast<Ref<Font> (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_font)>((new std::string("get_theme_font"))->c_str())
			.fun<static_cast<int32_t (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_font_size)>((new std::string("get_theme_font_size"))->c_str())
			.fun<static_cast<Color (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_color)>((new std::string("get_theme_color"))->c_str())
			.fun<static_cast<int32_t (Window::*)(const StringName &, const StringName &) const>(&Window::get_theme_constant)>((new std::string("get_theme_constant"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_icon_override)>((new std::string("has_theme_icon_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_stylebox_override)>((new std::string("has_theme_stylebox_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_font_override)>((new std::string("has_theme_font_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_font_size_override)>((new std::string("has_theme_font_size_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_color_override)>((new std::string("has_theme_color_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &) const>(&Window::has_theme_constant_override)>((new std::string("has_theme_constant_override"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_icon)>((new std::string("has_theme_icon"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_stylebox)>((new std::string("has_theme_stylebox"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_font)>((new std::string("has_theme_font"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_font_size)>((new std::string("has_theme_font_size"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_color)>((new std::string("has_theme_color"))->c_str())
			.fun<static_cast<bool (Window::*)(const StringName &, const StringName &) const>(&Window::has_theme_constant)>((new std::string("has_theme_constant"))->c_str())
			.fun<static_cast<double (Window::*)() const>(&Window::get_theme_default_base_scale)>((new std::string("get_theme_default_base_scale"))->c_str())
			.fun<static_cast<Ref<Font> (Window::*)() const>(&Window::get_theme_default_font)>((new std::string("get_theme_default_font"))->c_str())
			.fun<static_cast<int32_t (Window::*)() const>(&Window::get_theme_default_font_size)>((new std::string("get_theme_default_font_size"))->c_str())
			.fun<static_cast<void (Window::*)(Window::LayoutDirection)>(&Window::set_layout_direction)>((new std::string("set_layout_direction"))->c_str())
			.fun<static_cast<Window::LayoutDirection (Window::*)() const>(&Window::get_layout_direction)>((new std::string("get_layout_direction"))->c_str())
			.fun<static_cast<bool (Window::*)() const>(&Window::is_layout_rtl)>((new std::string("is_layout_rtl"))->c_str())
			.fun<static_cast<void (Window::*)(const Rect2i &)>(&Window::popup)>((new std::string("popup"))->c_str())
			.fun<static_cast<void (Window::*)(const Rect2i &)>(&Window::popup_on_parent)>((new std::string("popup_on_parent"))->c_str())
			.fun<static_cast<void (Window::*)(const Vector2i &)>(&Window::popup_centered)>((new std::string("popup_centered"))->c_str())
			.fun<static_cast<void (Window::*)(double)>(&Window::popup_centered_ratio)>((new std::string("popup_centered_ratio"))->c_str())
			.fun<static_cast<void (Window::*)(const Vector2i &, double)>(&Window::popup_centered_clamped)>((new std::string("popup_centered_clamped"))->c_str())
			.fun<static_cast<void (Window::*)(Node *, const Rect2i &)>(&Window::popup_exclusive)>((new std::string("popup_exclusive"))->c_str())
			.fun<static_cast<void (Window::*)(Node *, const Rect2i &)>(&Window::popup_exclusive_on_parent)>((new std::string("popup_exclusive_on_parent"))->c_str())
			.fun<static_cast<void (Window::*)(Node *, const Vector2i &)>(&Window::popup_exclusive_centered)>((new std::string("popup_exclusive_centered"))->c_str())
			.fun<static_cast<void (Window::*)(Node *, double)>(&Window::popup_exclusive_centered_ratio)>((new std::string("popup_exclusive_centered_ratio"))->c_str())
			.fun<static_cast<void (Window::*)(Node *, const Vector2i &, double)>(&Window::popup_exclusive_centered_clamped)>((new std::string("popup_exclusive_centered_clamped"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("MODE_WINDOWED"))->c_str()] = Window::Mode::MODE_WINDOWED;
	_Mode[(new std::string("MODE_MINIMIZED"))->c_str()] = Window::Mode::MODE_MINIMIZED;
	_Mode[(new std::string("MODE_MAXIMIZED"))->c_str()] = Window::Mode::MODE_MAXIMIZED;
	_Mode[(new std::string("MODE_FULLSCREEN"))->c_str()] = Window::Mode::MODE_FULLSCREEN;
	_Mode[(new std::string("MODE_EXCLUSIVE_FULLSCREEN"))->c_str()] = Window::Mode::MODE_EXCLUSIVE_FULLSCREEN;
	_module.add("Mode", std::move(_Mode));
	qjs::Value _Flags = context->newObject();
	_Flags[(new std::string("FLAG_RESIZE_DISABLED"))->c_str()] = Window::Flags::FLAG_RESIZE_DISABLED;
	_Flags[(new std::string("FLAG_BORDERLESS"))->c_str()] = Window::Flags::FLAG_BORDERLESS;
	_Flags[(new std::string("FLAG_ALWAYS_ON_TOP"))->c_str()] = Window::Flags::FLAG_ALWAYS_ON_TOP;
	_Flags[(new std::string("FLAG_TRANSPARENT"))->c_str()] = Window::Flags::FLAG_TRANSPARENT;
	_Flags[(new std::string("FLAG_NO_FOCUS"))->c_str()] = Window::Flags::FLAG_NO_FOCUS;
	_Flags[(new std::string("FLAG_POPUP"))->c_str()] = Window::Flags::FLAG_POPUP;
	_Flags[(new std::string("FLAG_EXTEND_TO_TITLE"))->c_str()] = Window::Flags::FLAG_EXTEND_TO_TITLE;
	_Flags[(new std::string("FLAG_MOUSE_PASSTHROUGH"))->c_str()] = Window::Flags::FLAG_MOUSE_PASSTHROUGH;
	_Flags[(new std::string("FLAG_MAX"))->c_str()] = Window::Flags::FLAG_MAX;
	_module.add("Flags", std::move(_Flags));
	qjs::Value _ContentScaleMode = context->newObject();
	_ContentScaleMode[(new std::string("CONTENT_SCALE_MODE_DISABLED"))->c_str()] = Window::ContentScaleMode::CONTENT_SCALE_MODE_DISABLED;
	_ContentScaleMode[(new std::string("CONTENT_SCALE_MODE_CANVAS_ITEMS"))->c_str()] = Window::ContentScaleMode::CONTENT_SCALE_MODE_CANVAS_ITEMS;
	_ContentScaleMode[(new std::string("CONTENT_SCALE_MODE_VIEWPORT"))->c_str()] = Window::ContentScaleMode::CONTENT_SCALE_MODE_VIEWPORT;
	_module.add("ContentScaleMode", std::move(_ContentScaleMode));
	qjs::Value _ContentScaleAspect = context->newObject();
	_ContentScaleAspect[(new std::string("CONTENT_SCALE_ASPECT_IGNORE"))->c_str()] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_IGNORE;
	_ContentScaleAspect[(new std::string("CONTENT_SCALE_ASPECT_KEEP"))->c_str()] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP;
	_ContentScaleAspect[(new std::string("CONTENT_SCALE_ASPECT_KEEP_WIDTH"))->c_str()] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP_WIDTH;
	_ContentScaleAspect[(new std::string("CONTENT_SCALE_ASPECT_KEEP_HEIGHT"))->c_str()] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP_HEIGHT;
	_ContentScaleAspect[(new std::string("CONTENT_SCALE_ASPECT_EXPAND"))->c_str()] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_EXPAND;
	_module.add("ContentScaleAspect", std::move(_ContentScaleAspect));
	qjs::Value _ContentScaleStretch = context->newObject();
	_ContentScaleStretch[(new std::string("CONTENT_SCALE_STRETCH_FRACTIONAL"))->c_str()] = Window::ContentScaleStretch::CONTENT_SCALE_STRETCH_FRACTIONAL;
	_ContentScaleStretch[(new std::string("CONTENT_SCALE_STRETCH_INTEGER"))->c_str()] = Window::ContentScaleStretch::CONTENT_SCALE_STRETCH_INTEGER;
	_module.add("ContentScaleStretch", std::move(_ContentScaleStretch));
	qjs::Value _LayoutDirection = context->newObject();
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_INHERITED"))->c_str()] = Window::LayoutDirection::LAYOUT_DIRECTION_INHERITED;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_LOCALE"))->c_str()] = Window::LayoutDirection::LAYOUT_DIRECTION_LOCALE;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_LTR"))->c_str()] = Window::LayoutDirection::LAYOUT_DIRECTION_LTR;
	_LayoutDirection[(new std::string("LAYOUT_DIRECTION_RTL"))->c_str()] = Window::LayoutDirection::LAYOUT_DIRECTION_RTL;
	_module.add("LayoutDirection", std::move(_LayoutDirection));
	qjs::Value _WindowInitialPosition = context->newObject();
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_ABSOLUTE"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_ABSOLUTE;
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN;
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN;
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN;
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS;
	_WindowInitialPosition[(new std::string("WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS"))->c_str()] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS;
	_module.add("WindowInitialPosition", std::move(_WindowInitialPosition));
}