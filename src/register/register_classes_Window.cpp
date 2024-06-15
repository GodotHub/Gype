#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Window() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<Window>("Window")
            .constructor<>()
            .base<Viewport>()
            .static_fun<&Window::NOTIFICATION_VISIBILITY_CHANGED>("NOTIFICATION_VISIBILITY_CHANGED")
            .static_fun<&Window::NOTIFICATION_THEME_CHANGED>("NOTIFICATION_THEME_CHANGED")
            .property<static_cast<Window::Mode(Window::*)()const>(&Window::get_mode),static_cast<void(Window::*)(Window::Mode)>(&Window::set_mode)>("mode")
            .property<static_cast<String(Window::*)()const>(&Window::get_title),static_cast<void(Window::*)(const String &)>(&Window::set_title)>("title")
            .property<static_cast<Window::WindowInitialPosition(Window::*)()const>(&Window::get_initial_position),static_cast<void(Window::*)(Window::WindowInitialPosition)>(&Window::set_initial_position)>("initial_position")
            .property<static_cast<Vector2i(Window::*)()const>(&Window::get_position),static_cast<void(Window::*)(const Vector2i &)>(&Window::set_position)>("position")
            .property<static_cast<Vector2i(Window::*)()const>(&Window::get_size),static_cast<void(Window::*)(const Vector2i &)>(&Window::set_size)>("size")
            .property<static_cast<int32_t(Window::*)()const>(&Window::get_current_screen),static_cast<void(Window::*)(int32_t)>(&Window::set_current_screen)>("current_screen")
            .property<static_cast<PackedVector2Array(Window::*)()const>(&Window::get_mouse_passthrough_polygon),static_cast<void(Window::*)(const PackedVector2Array &)>(&Window::set_mouse_passthrough_polygon)>("mouse_passthrough_polygon")
            .property<static_cast<bool(Window::*)()const>(&Window::is_visible),static_cast<void(Window::*)(bool)>(&Window::set_visible)>("visible")
            .property<static_cast<bool(Window::*)()const>(&Window::is_wrapping_controls),static_cast<void(Window::*)(bool)>(&Window::set_wrap_controls)>("wrap_controls")
            .property<static_cast<bool(Window::*)()const>(&Window::is_transient),static_cast<void(Window::*)(bool)>(&Window::set_transient)>("transient")
            .property<static_cast<bool(Window::*)()const>(&Window::is_transient_to_focused),static_cast<void(Window::*)(bool)>(&Window::set_transient_to_focused)>("transient_to_focused")
            .property<static_cast<bool(Window::*)()const>(&Window::is_exclusive),static_cast<void(Window::*)(bool)>(&Window::set_exclusive)>("exclusive")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("unresizable")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("borderless")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("always_on_top")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("transparent")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("unfocusable")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("popup_window")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("extend_to_title")
            .property<static_cast<bool(Window::*)(Window::Flags)const>(&Window::get_flag),static_cast<void(Window::*)(Window::Flags,bool)>(&Window::set_flag)>("mouse_passthrough")
            .property<static_cast<bool(Window::*)()const>(&Window::get_force_native),static_cast<void(Window::*)(bool)>(&Window::set_force_native)>("force_native")
            .property<static_cast<Vector2i(Window::*)()const>(&Window::get_min_size),static_cast<void(Window::*)(const Vector2i &)>(&Window::set_min_size)>("min_size")
            .property<static_cast<Vector2i(Window::*)()const>(&Window::get_max_size),static_cast<void(Window::*)(const Vector2i &)>(&Window::set_max_size)>("max_size")
            .property<static_cast<bool(Window::*)()const>(&Window::get_keep_title_visible),static_cast<void(Window::*)(bool)>(&Window::set_keep_title_visible)>("keep_title_visible")
            .property<static_cast<Vector2i(Window::*)()const>(&Window::get_content_scale_size),static_cast<void(Window::*)(const Vector2i &)>(&Window::set_content_scale_size)>("content_scale_size")
            .property<static_cast<Window::ContentScaleMode(Window::*)()const>(&Window::get_content_scale_mode),static_cast<void(Window::*)(Window::ContentScaleMode)>(&Window::set_content_scale_mode)>("content_scale_mode")
            .property<static_cast<Window::ContentScaleAspect(Window::*)()const>(&Window::get_content_scale_aspect),static_cast<void(Window::*)(Window::ContentScaleAspect)>(&Window::set_content_scale_aspect)>("content_scale_aspect")
            .property<static_cast<Window::ContentScaleStretch(Window::*)()const>(&Window::get_content_scale_stretch),static_cast<void(Window::*)(Window::ContentScaleStretch)>(&Window::set_content_scale_stretch)>("content_scale_stretch")
            .property<static_cast<double(Window::*)()const>(&Window::get_content_scale_factor),static_cast<void(Window::*)(double)>(&Window::set_content_scale_factor)>("content_scale_factor")
            .property<static_cast<bool(Window::*)()const>(&Window::is_auto_translating),static_cast<void(Window::*)(bool)>(&Window::set_auto_translate)>("auto_translate")
            .property<static_cast<Ref<Theme>(Window::*)()const>(&Window::get_theme),static_cast<void(Window::*)(const Ref<Theme> &)>(&Window::set_theme)>("theme")
            .property<static_cast<StringName(Window::*)()const>(&Window::get_theme_type_variation),static_cast<void(Window::*)(const StringName &)>(&Window::set_theme_type_variation)>("theme_type_variation")
            .fun<static_cast<Vector2(Window::*)()const>(&Window::_get_contents_minimum_size)>("_get_contents_minimum_size")
            .fun<static_cast<int32_t(Window::*)()const>(&Window::get_window_id)>("get_window_id")
            .fun<static_cast<void(Window::*)()>(&Window::move_to_center)>("move_to_center")
            .fun<static_cast<void(Window::*)()>(&Window::reset_size)>("reset_size")
            .fun<static_cast<Vector2i(Window::*)()const>(&Window::get_position_with_decorations)>("get_position_with_decorations")
            .fun<static_cast<Vector2i(Window::*)()const>(&Window::get_size_with_decorations)>("get_size_with_decorations")
            .fun<static_cast<bool(Window::*)()const>(&Window::is_maximize_allowed)>("is_maximize_allowed")
            .fun<static_cast<void(Window::*)()>(&Window::request_attention)>("request_attention")
            .fun<static_cast<void(Window::*)()>(&Window::move_to_foreground)>("move_to_foreground")
            .fun<static_cast<void(Window::*)()>(&Window::hide)>("hide")
            .fun<static_cast<void(Window::*)()>(&Window::show)>("show")
            .fun<static_cast<void(Window::*)(bool)>(&Window::set_unparent_when_invisible)>("set_unparent_when_invisible")
            .fun<static_cast<bool(Window::*)()const>(&Window::can_draw)>("can_draw")
            .fun<static_cast<bool(Window::*)()const>(&Window::has_focus)>("has_focus")
            .fun<static_cast<void(Window::*)()>(&Window::grab_focus)>("grab_focus")
            .fun<static_cast<void(Window::*)(bool)>(&Window::set_ime_active)>("set_ime_active")
            .fun<static_cast<void(Window::*)(const Vector2i &)>(&Window::set_ime_position)>("set_ime_position")
            .fun<static_cast<bool(Window::*)()const>(&Window::is_embedded)>("is_embedded")
            .fun<static_cast<Vector2(Window::*)()const>(&Window::get_contents_minimum_size)>("get_contents_minimum_size")
            .fun<static_cast<void(Window::*)(bool)>(&Window::set_use_font_oversampling)>("set_use_font_oversampling")
            .fun<static_cast<bool(Window::*)()const>(&Window::is_using_font_oversampling)>("is_using_font_oversampling")
            .fun<static_cast<void(Window::*)()>(&Window::child_controls_changed)>("child_controls_changed")
            .fun<static_cast<void(Window::*)()>(&Window::begin_bulk_theme_override)>("begin_bulk_theme_override")
            .fun<static_cast<void(Window::*)()>(&Window::end_bulk_theme_override)>("end_bulk_theme_override")
            .fun<static_cast<void(Window::*)(const StringName &,const Ref<Texture2D> &)>(&Window::add_theme_icon_override)>("add_theme_icon_override")
            .fun<static_cast<void(Window::*)(const StringName &,const Ref<StyleBox> &)>(&Window::add_theme_stylebox_override)>("add_theme_stylebox_override")
            .fun<static_cast<void(Window::*)(const StringName &,const Ref<Font> &)>(&Window::add_theme_font_override)>("add_theme_font_override")
            .fun<static_cast<void(Window::*)(const StringName &,int32_t)>(&Window::add_theme_font_size_override)>("add_theme_font_size_override")
            .fun<static_cast<void(Window::*)(const StringName &,const Color &)>(&Window::add_theme_color_override)>("add_theme_color_override")
            .fun<static_cast<void(Window::*)(const StringName &,int32_t)>(&Window::add_theme_constant_override)>("add_theme_constant_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_icon_override)>("remove_theme_icon_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_stylebox_override)>("remove_theme_stylebox_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_font_override)>("remove_theme_font_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_font_size_override)>("remove_theme_font_size_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_color_override)>("remove_theme_color_override")
            .fun<static_cast<void(Window::*)(const StringName &)>(&Window::remove_theme_constant_override)>("remove_theme_constant_override")
            .fun<static_cast<Ref<Texture2D>(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_icon)>("get_theme_icon")
            .fun<static_cast<Ref<StyleBox>(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_stylebox)>("get_theme_stylebox")
            .fun<static_cast<Ref<Font>(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_font)>("get_theme_font")
            .fun<static_cast<int32_t(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_font_size)>("get_theme_font_size")
            .fun<static_cast<Color(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_color)>("get_theme_color")
            .fun<static_cast<int32_t(Window::*)(const StringName &,const StringName &)const>(&Window::get_theme_constant)>("get_theme_constant")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_icon_override)>("has_theme_icon_override")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_stylebox_override)>("has_theme_stylebox_override")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_font_override)>("has_theme_font_override")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_font_size_override)>("has_theme_font_size_override")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_color_override)>("has_theme_color_override")
            .fun<static_cast<bool(Window::*)(const StringName &)const>(&Window::has_theme_constant_override)>("has_theme_constant_override")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_icon)>("has_theme_icon")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_stylebox)>("has_theme_stylebox")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_font)>("has_theme_font")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_font_size)>("has_theme_font_size")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_color)>("has_theme_color")
            .fun<static_cast<bool(Window::*)(const StringName &,const StringName &)const>(&Window::has_theme_constant)>("has_theme_constant")
            .fun<static_cast<double(Window::*)()const>(&Window::get_theme_default_base_scale)>("get_theme_default_base_scale")
            .fun<static_cast<Ref<Font>(Window::*)()const>(&Window::get_theme_default_font)>("get_theme_default_font")
            .fun<static_cast<int32_t(Window::*)()const>(&Window::get_theme_default_font_size)>("get_theme_default_font_size")
            .fun<static_cast<void(Window::*)(Window::LayoutDirection)>(&Window::set_layout_direction)>("set_layout_direction")
            .fun<static_cast<Window::LayoutDirection(Window::*)()const>(&Window::get_layout_direction)>("get_layout_direction")
            .fun<static_cast<bool(Window::*)()const>(&Window::is_layout_rtl)>("is_layout_rtl")
            .fun<static_cast<void(Window::*)(const Rect2i &)>(&Window::popup)>("popup")
            .fun<static_cast<void(Window::*)(const Rect2i &)>(&Window::popup_on_parent)>("popup_on_parent")
            .fun<static_cast<void(Window::*)(const Vector2i &)>(&Window::popup_centered)>("popup_centered")
            .fun<static_cast<void(Window::*)(double)>(&Window::popup_centered_ratio)>("popup_centered_ratio")
            .fun<static_cast<void(Window::*)(const Vector2i &,double)>(&Window::popup_centered_clamped)>("popup_centered_clamped")
            .fun<static_cast<void(Window::*)(Node *,const Rect2i &)>(&Window::popup_exclusive)>("popup_exclusive")
            .fun<static_cast<void(Window::*)(Node *,const Rect2i &)>(&Window::popup_exclusive_on_parent)>("popup_exclusive_on_parent")
            .fun<static_cast<void(Window::*)(Node *,const Vector2i &)>(&Window::popup_exclusive_centered)>("popup_exclusive_centered")
            .fun<static_cast<void(Window::*)(Node *,double)>(&Window::popup_exclusive_centered_ratio)>("popup_exclusive_centered_ratio")
            .fun<static_cast<void(Window::*)(Node *,const Vector2i &,double)>(&Window::popup_exclusive_centered_clamped)>("popup_exclusive_centered_clamped")
;    qjs::Value _Mode = context->newObject();
    _Mode["MODE_WINDOWED"] = Window::Mode::MODE_WINDOWED;
    _Mode["MODE_MINIMIZED"] = Window::Mode::MODE_MINIMIZED;
    _Mode["MODE_MAXIMIZED"] = Window::Mode::MODE_MAXIMIZED;
    _Mode["MODE_FULLSCREEN"] = Window::Mode::MODE_FULLSCREEN;
    _Mode["MODE_EXCLUSIVE_FULLSCREEN"] = Window::Mode::MODE_EXCLUSIVE_FULLSCREEN;
    _module.add("Mode", std::move(_Mode));
    qjs::Value _Flags = context->newObject();
    _Flags["FLAG_RESIZE_DISABLED"] = Window::Flags::FLAG_RESIZE_DISABLED;
    _Flags["FLAG_BORDERLESS"] = Window::Flags::FLAG_BORDERLESS;
    _Flags["FLAG_ALWAYS_ON_TOP"] = Window::Flags::FLAG_ALWAYS_ON_TOP;
    _Flags["FLAG_TRANSPARENT"] = Window::Flags::FLAG_TRANSPARENT;
    _Flags["FLAG_NO_FOCUS"] = Window::Flags::FLAG_NO_FOCUS;
    _Flags["FLAG_POPUP"] = Window::Flags::FLAG_POPUP;
    _Flags["FLAG_EXTEND_TO_TITLE"] = Window::Flags::FLAG_EXTEND_TO_TITLE;
    _Flags["FLAG_MOUSE_PASSTHROUGH"] = Window::Flags::FLAG_MOUSE_PASSTHROUGH;
    _Flags["FLAG_MAX"] = Window::Flags::FLAG_MAX;
    _module.add("Flags", std::move(_Flags));
    qjs::Value _ContentScaleMode = context->newObject();
    _ContentScaleMode["CONTENT_SCALE_MODE_DISABLED"] = Window::ContentScaleMode::CONTENT_SCALE_MODE_DISABLED;
    _ContentScaleMode["CONTENT_SCALE_MODE_CANVAS_ITEMS"] = Window::ContentScaleMode::CONTENT_SCALE_MODE_CANVAS_ITEMS;
    _ContentScaleMode["CONTENT_SCALE_MODE_VIEWPORT"] = Window::ContentScaleMode::CONTENT_SCALE_MODE_VIEWPORT;
    _module.add("ContentScaleMode", std::move(_ContentScaleMode));
    qjs::Value _ContentScaleAspect = context->newObject();
    _ContentScaleAspect["CONTENT_SCALE_ASPECT_IGNORE"] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_IGNORE;
    _ContentScaleAspect["CONTENT_SCALE_ASPECT_KEEP"] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP;
    _ContentScaleAspect["CONTENT_SCALE_ASPECT_KEEP_WIDTH"] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP_WIDTH;
    _ContentScaleAspect["CONTENT_SCALE_ASPECT_KEEP_HEIGHT"] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_KEEP_HEIGHT;
    _ContentScaleAspect["CONTENT_SCALE_ASPECT_EXPAND"] = Window::ContentScaleAspect::CONTENT_SCALE_ASPECT_EXPAND;
    _module.add("ContentScaleAspect", std::move(_ContentScaleAspect));
    qjs::Value _ContentScaleStretch = context->newObject();
    _ContentScaleStretch["CONTENT_SCALE_STRETCH_FRACTIONAL"] = Window::ContentScaleStretch::CONTENT_SCALE_STRETCH_FRACTIONAL;
    _ContentScaleStretch["CONTENT_SCALE_STRETCH_INTEGER"] = Window::ContentScaleStretch::CONTENT_SCALE_STRETCH_INTEGER;
    _module.add("ContentScaleStretch", std::move(_ContentScaleStretch));
    qjs::Value _LayoutDirection = context->newObject();
    _LayoutDirection["LAYOUT_DIRECTION_INHERITED"] = Window::LayoutDirection::LAYOUT_DIRECTION_INHERITED;
    _LayoutDirection["LAYOUT_DIRECTION_LOCALE"] = Window::LayoutDirection::LAYOUT_DIRECTION_LOCALE;
    _LayoutDirection["LAYOUT_DIRECTION_LTR"] = Window::LayoutDirection::LAYOUT_DIRECTION_LTR;
    _LayoutDirection["LAYOUT_DIRECTION_RTL"] = Window::LayoutDirection::LAYOUT_DIRECTION_RTL;
    _module.add("LayoutDirection", std::move(_LayoutDirection));
    qjs::Value _WindowInitialPosition = context->newObject();
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_ABSOLUTE"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_ABSOLUTE;
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN;
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN;
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN;
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS;
    _WindowInitialPosition["WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS"] = Window::WindowInitialPosition::WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS;
    _module.add("WindowInitialPosition", std::move(_WindowInitialPosition));
}