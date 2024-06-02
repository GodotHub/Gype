/**************************************************************************/
/*  window.hpp                                                            */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_WINDOW_HPP
#define GODOT_CPP_WINDOW_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Font;
class Node;
class StyleBox;
class Texture2D;
class Theme;

class Window : public Viewport {
	GDEXTENSION_CLASS(Window, Viewport)

public:
	enum Mode {
		MODE_WINDOWED = 0,
		MODE_MINIMIZED = 1,
		MODE_MAXIMIZED = 2,
		MODE_FULLSCREEN = 3,
		MODE_EXCLUSIVE_FULLSCREEN = 4,
	};

	enum Flags {
		FLAG_RESIZE_DISABLED = 0,
		FLAG_BORDERLESS = 1,
		FLAG_ALWAYS_ON_TOP = 2,
		FLAG_TRANSPARENT = 3,
		FLAG_NO_FOCUS = 4,
		FLAG_POPUP = 5,
		FLAG_EXTEND_TO_TITLE = 6,
		FLAG_MOUSE_PASSTHROUGH = 7,
		FLAG_MAX = 8,
	};

	enum ContentScaleMode {
		CONTENT_SCALE_MODE_DISABLED = 0,
		CONTENT_SCALE_MODE_CANVAS_ITEMS = 1,
		CONTENT_SCALE_MODE_VIEWPORT = 2,
	};

	enum ContentScaleAspect {
		CONTENT_SCALE_ASPECT_IGNORE = 0,
		CONTENT_SCALE_ASPECT_KEEP = 1,
		CONTENT_SCALE_ASPECT_KEEP_WIDTH = 2,
		CONTENT_SCALE_ASPECT_KEEP_HEIGHT = 3,
		CONTENT_SCALE_ASPECT_EXPAND = 4,
	};

	enum ContentScaleStretch {
		CONTENT_SCALE_STRETCH_FRACTIONAL = 0,
		CONTENT_SCALE_STRETCH_INTEGER = 1,
	};

	enum LayoutDirection {
		LAYOUT_DIRECTION_INHERITED = 0,
		LAYOUT_DIRECTION_LOCALE = 1,
		LAYOUT_DIRECTION_LTR = 2,
		LAYOUT_DIRECTION_RTL = 3,
	};

	enum WindowInitialPosition {
		WINDOW_INITIAL_POSITION_ABSOLUTE = 0,
		WINDOW_INITIAL_POSITION_CENTER_PRIMARY_SCREEN = 1,
		WINDOW_INITIAL_POSITION_CENTER_MAIN_WINDOW_SCREEN = 2,
		WINDOW_INITIAL_POSITION_CENTER_OTHER_SCREEN = 3,
		WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_MOUSE_FOCUS = 4,
		WINDOW_INITIAL_POSITION_CENTER_SCREEN_WITH_KEYBOARD_FOCUS = 5,
	};

	static const int NOTIFICATION_VISIBILITY_CHANGED = 30;
	static const int NOTIFICATION_THEME_CHANGED = 32;

	void set_title(const String &title);
	String get_title() const;
	int32_t get_window_id() const;
	void set_initial_position(Window::WindowInitialPosition initial_position);
	Window::WindowInitialPosition get_initial_position() const;
	void set_current_screen(int32_t index);
	int32_t get_current_screen() const;
	void set_position(const Vector2i &position);
	Vector2i get_position() const;
	void move_to_center();
	void set_size(const Vector2i &size);
	Vector2i get_size() const;
	void reset_size();
	Vector2i get_position_with_decorations() const;
	Vector2i get_size_with_decorations() const;
	void set_max_size(const Vector2i &max_size);
	Vector2i get_max_size() const;
	void set_min_size(const Vector2i &min_size);
	Vector2i get_min_size() const;
	void set_mode(Window::Mode mode);
	Window::Mode get_mode() const;
	void set_flag(Window::Flags flag, bool enabled);
	bool get_flag(Window::Flags flag) const;
	bool is_maximize_allowed() const;
	void request_attention();
	void move_to_foreground();
	void set_visible(bool visible);
	bool is_visible() const;
	void hide();
	void show();
	void set_transient(bool transient);
	bool is_transient() const;
	void set_exclusive(bool exclusive);
	bool is_exclusive() const;
	void set_unparent_when_invisible(bool unparent);
	bool can_draw() const;
	bool has_focus() const;
	void grab_focus();
	void set_ime_active(bool active);
	void set_ime_position(const Vector2i &position);
	bool is_embedded() const;
	Vector2 get_contents_minimum_size() const;
	void set_content_scale_size(const Vector2i &size);
	Vector2i get_content_scale_size() const;
	void set_content_scale_mode(Window::ContentScaleMode mode);
	Window::ContentScaleMode get_content_scale_mode() const;
	void set_content_scale_aspect(Window::ContentScaleAspect aspect);
	Window::ContentScaleAspect get_content_scale_aspect() const;
	void set_content_scale_stretch(Window::ContentScaleStretch stretch);
	Window::ContentScaleStretch get_content_scale_stretch() const;
	void set_keep_title_visible(bool title_visible);
	bool get_keep_title_visible() const;
	void set_content_scale_factor(double factor);
	double get_content_scale_factor() const;
	void set_use_font_oversampling(bool enable);
	bool is_using_font_oversampling() const;
	void set_mouse_passthrough_polygon(const PackedVector2Array &polygon);
	PackedVector2Array get_mouse_passthrough_polygon() const;
	void set_wrap_controls(bool enable);
	bool is_wrapping_controls() const;
	void child_controls_changed();
	void set_theme(const Ref<Theme> &theme);
	Ref<Theme> get_theme() const;
	void set_theme_type_variation(const StringName &theme_type);
	StringName get_theme_type_variation() const;
	void begin_bulk_theme_override();
	void end_bulk_theme_override();
	void add_theme_icon_override(const StringName &name, const Ref<Texture2D> &texture);
	void add_theme_stylebox_override(const StringName &name, const Ref<StyleBox> &stylebox);
	void add_theme_font_override(const StringName &name, const Ref<Font> &font);
	void add_theme_font_size_override(const StringName &name, int32_t font_size);
	void add_theme_color_override(const StringName &name, const Color &color);
	void add_theme_constant_override(const StringName &name, int32_t constant);
	void remove_theme_icon_override(const StringName &name);
	void remove_theme_stylebox_override(const StringName &name);
	void remove_theme_font_override(const StringName &name);
	void remove_theme_font_size_override(const StringName &name);
	void remove_theme_color_override(const StringName &name);
	void remove_theme_constant_override(const StringName &name);
	Ref<Texture2D> get_theme_icon(const StringName &name, const StringName &theme_type = String()) const;
	Ref<StyleBox> get_theme_stylebox(const StringName &name, const StringName &theme_type = String()) const;
	Ref<Font> get_theme_font(const StringName &name, const StringName &theme_type = String()) const;
	int32_t get_theme_font_size(const StringName &name, const StringName &theme_type = String()) const;
	Color get_theme_color(const StringName &name, const StringName &theme_type = String()) const;
	int32_t get_theme_constant(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_icon_override(const StringName &name) const;
	bool has_theme_stylebox_override(const StringName &name) const;
	bool has_theme_font_override(const StringName &name) const;
	bool has_theme_font_size_override(const StringName &name) const;
	bool has_theme_color_override(const StringName &name) const;
	bool has_theme_constant_override(const StringName &name) const;
	bool has_theme_icon(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_stylebox(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_font(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_font_size(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_color(const StringName &name, const StringName &theme_type = String()) const;
	bool has_theme_constant(const StringName &name, const StringName &theme_type = String()) const;
	double get_theme_default_base_scale() const;
	Ref<Font> get_theme_default_font() const;
	int32_t get_theme_default_font_size() const;
	void set_layout_direction(Window::LayoutDirection direction);
	Window::LayoutDirection get_layout_direction() const;
	bool is_layout_rtl() const;
	void set_auto_translate(bool enable);
	bool is_auto_translating() const;
	void popup(const Rect2i &rect = Rect2i(0, 0, 0, 0));
	void popup_on_parent(const Rect2i &parent_rect);
	void popup_centered(const Vector2i &minsize = Vector2i(0, 0));
	void popup_centered_ratio(double ratio = 0.8);
	void popup_centered_clamped(const Vector2i &minsize = Vector2i(0, 0), double fallback_ratio = 0.75);
	void popup_exclusive(Node *from_node, const Rect2i &rect = Rect2i(0, 0, 0, 0));
	void popup_exclusive_on_parent(Node *from_node, const Rect2i &parent_rect);
	void popup_exclusive_centered(Node *from_node, const Vector2i &minsize = Vector2i(0, 0));
	void popup_exclusive_centered_ratio(Node *from_node, double ratio = 0.8);
	void popup_exclusive_centered_clamped(Node *from_node, const Vector2i &minsize = Vector2i(0, 0), double fallback_ratio = 0.75);
	virtual Vector2 _get_contents_minimum_size() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Viewport::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_get_contents_minimum_size), decltype(&T::_get_contents_minimum_size)>) {
			BIND_VIRTUAL_METHOD(T, _get_contents_minimum_size);
		}
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(Window::Mode);
VARIANT_ENUM_CAST(Window::Flags);
VARIANT_ENUM_CAST(Window::ContentScaleMode);
VARIANT_ENUM_CAST(Window::ContentScaleAspect);
VARIANT_ENUM_CAST(Window::ContentScaleStretch);
VARIANT_ENUM_CAST(Window::LayoutDirection);
VARIANT_ENUM_CAST(Window::WindowInitialPosition);

#endif // ! GODOT_CPP_WINDOW_HPP