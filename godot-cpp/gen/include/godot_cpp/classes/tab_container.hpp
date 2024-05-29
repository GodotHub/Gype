/**************************************************************************/
/*  tab_container.hpp                                                     */
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

#ifndef GODOT_CPP_TAB_CONTAINER_HPP
#define GODOT_CPP_TAB_CONTAINER_HPP

#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Node;
class Popup;
class Texture2D;
struct Vector2;

class TabContainer : public Container {
	GDEXTENSION_CLASS(TabContainer, Container)

public:

	int32_t get_tab_count() const;
	void set_current_tab(int32_t tab_idx);
	int32_t get_current_tab() const;
	int32_t get_previous_tab() const;
	bool select_previous_available();
	bool select_next_available();
	Control *get_current_tab_control() const;
	TabBar *get_tab_bar() const;
	Control *get_tab_control(int32_t tab_idx) const;
	void set_tab_alignment(TabBar::AlignmentMode alignment);
	TabBar::AlignmentMode get_tab_alignment() const;
	void set_clip_tabs(bool clip_tabs);
	bool get_clip_tabs() const;
	void set_tabs_visible(bool visible);
	bool are_tabs_visible() const;
	void set_all_tabs_in_front(bool is_front);
	bool is_all_tabs_in_front() const;
	void set_tab_title(int32_t tab_idx, const String &title);
	String get_tab_title(int32_t tab_idx) const;
	void set_tab_icon(int32_t tab_idx, const Ref<Texture2D> &icon);
	Ref<Texture2D> get_tab_icon(int32_t tab_idx) const;
	void set_tab_disabled(int32_t tab_idx, bool disabled);
	bool is_tab_disabled(int32_t tab_idx) const;
	void set_tab_hidden(int32_t tab_idx, bool hidden);
	bool is_tab_hidden(int32_t tab_idx) const;
	void set_tab_metadata(int32_t tab_idx, const Variant &metadata);
	Variant get_tab_metadata(int32_t tab_idx) const;
	void set_tab_button_icon(int32_t tab_idx, const Ref<Texture2D> &icon);
	Ref<Texture2D> get_tab_button_icon(int32_t tab_idx) const;
	int32_t get_tab_idx_at_point(const Vector2 &point) const;
	int32_t get_tab_idx_from_control(Control *control) const;
	void set_popup(Node *popup);
	Popup *get_popup() const;
	void set_drag_to_rearrange_enabled(bool enabled);
	bool get_drag_to_rearrange_enabled() const;
	void set_tabs_rearrange_group(int32_t group_id);
	int32_t get_tabs_rearrange_group() const;
	void set_use_hidden_tabs_for_min_size(bool enabled);
	bool get_use_hidden_tabs_for_min_size() const;
	void set_tab_focus_mode(Control::FocusMode focus_mode);
	Control::FocusMode get_tab_focus_mode() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Container::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_TAB_CONTAINER_HPP