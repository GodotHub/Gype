/**************************************************************************/
/*  popup_menu.hpp                                                        */
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

#ifndef GODOT_CPP_POPUP_MENU_HPP
#define GODOT_CPP_POPUP_MENU_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/native_menu.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class InputEvent;
class Shortcut;
class Texture2D;

class PopupMenu : public Popup {
	GDEXTENSION_CLASS(PopupMenu, Popup)

public:

	bool activate_item_by_event(const Ref<InputEvent> &event, bool for_global_only = false);
	void set_prefer_native_menu(bool enabled);
	bool is_prefer_native_menu() const;
	void add_item(const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_icon_item(const Ref<Texture2D> &texture, const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_check_item(const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_icon_check_item(const Ref<Texture2D> &texture, const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_radio_check_item(const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_icon_radio_check_item(const Ref<Texture2D> &texture, const String &label, int32_t id = -1, Key accel = (Key)0);
	void add_multistate_item(const String &label, int32_t max_states, int32_t default_state = 0, int32_t id = -1, Key accel = (Key)0);
	void add_shortcut(const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false, bool allow_echo = false);
	void add_icon_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false, bool allow_echo = false);
	void add_check_shortcut(const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false);
	void add_icon_check_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false);
	void add_radio_check_shortcut(const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false);
	void add_icon_radio_check_shortcut(const Ref<Texture2D> &texture, const Ref<Shortcut> &shortcut, int32_t id = -1, bool global = false);
	void add_submenu_item(const String &label, const String &submenu, int32_t id = -1);
	void add_submenu_node_item(const String &label, PopupMenu *submenu, int32_t id = -1);
	void set_item_text(int32_t index, const String &text);
	void set_item_text_direction(int32_t index, Control::TextDirection direction);
	void set_item_language(int32_t index, const String &language);
	void set_item_icon(int32_t index, const Ref<Texture2D> &icon);
	void set_item_icon_max_width(int32_t index, int32_t width);
	void set_item_icon_modulate(int32_t index, const Color &modulate);
	void set_item_checked(int32_t index, bool checked);
	void set_item_id(int32_t index, int32_t id);
	void set_item_accelerator(int32_t index, Key accel);
	void set_item_metadata(int32_t index, const Variant &metadata);
	void set_item_disabled(int32_t index, bool disabled);
	void set_item_submenu(int32_t index, const String &submenu);
	void set_item_submenu_node(int32_t index, PopupMenu *submenu);
	void set_item_as_separator(int32_t index, bool enable);
	void set_item_as_checkable(int32_t index, bool enable);
	void set_item_as_radio_checkable(int32_t index, bool enable);
	void set_item_tooltip(int32_t index, const String &tooltip);
	void set_item_shortcut(int32_t index, const Ref<Shortcut> &shortcut, bool global = false);
	void set_item_indent(int32_t index, int32_t indent);
	void set_item_multistate(int32_t index, int32_t state);
	void set_item_multistate_max(int32_t index, int32_t max_states);
	void set_item_shortcut_disabled(int32_t index, bool disabled);
	void toggle_item_checked(int32_t index);
	void toggle_item_multistate(int32_t index);
	String get_item_text(int32_t index) const;
	Control::TextDirection get_item_text_direction(int32_t index) const;
	String get_item_language(int32_t index) const;
	Ref<Texture2D> get_item_icon(int32_t index) const;
	int32_t get_item_icon_max_width(int32_t index) const;
	Color get_item_icon_modulate(int32_t index) const;
	bool is_item_checked(int32_t index) const;
	int32_t get_item_id(int32_t index) const;
	int32_t get_item_index(int32_t id) const;
	Key get_item_accelerator(int32_t index) const;
	Variant get_item_metadata(int32_t index) const;
	bool is_item_disabled(int32_t index) const;
	String get_item_submenu(int32_t index) const;
	PopupMenu *get_item_submenu_node(int32_t index) const;
	bool is_item_separator(int32_t index) const;
	bool is_item_checkable(int32_t index) const;
	bool is_item_radio_checkable(int32_t index) const;
	bool is_item_shortcut_disabled(int32_t index) const;
	String get_item_tooltip(int32_t index) const;
	Ref<Shortcut> get_item_shortcut(int32_t index) const;
	int32_t get_item_indent(int32_t index) const;
	int32_t get_item_multistate_max(int32_t index) const;
	int32_t get_item_multistate(int32_t index) const;
	void set_focused_item(int32_t index);
	int32_t get_focused_item() const;
	void set_item_count(int32_t count);
	int32_t get_item_count() const;
	void scroll_to_item(int32_t index);
	void remove_item(int32_t index);
	void add_separator(const String &label = String(), int32_t id = -1);
	void clear(bool free_submenus = false);
	void set_hide_on_item_selection(bool enable);
	bool is_hide_on_item_selection() const;
	void set_hide_on_checkable_item_selection(bool enable);
	bool is_hide_on_checkable_item_selection() const;
	void set_hide_on_state_item_selection(bool enable);
	bool is_hide_on_state_item_selection() const;
	void set_submenu_popup_delay(double seconds);
	double get_submenu_popup_delay() const;
	void set_allow_search(bool allow);
	bool get_allow_search() const;
	bool is_system_menu() const;
	void set_system_menu(NativeMenu::SystemMenus system_menu_id);
	NativeMenu::SystemMenus get_system_menu() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Popup::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_POPUP_MENU_HPP