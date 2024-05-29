/**************************************************************************/
/*  label.hpp                                                             */
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

#ifndef GODOT_CPP_LABEL_HPP
#define GODOT_CPP_LABEL_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_server.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class LabelSettings;

class Label : public Control {
	GDEXTENSION_CLASS(Label, Control)

public:

	void set_horizontal_alignment(HorizontalAlignment alignment);
	HorizontalAlignment get_horizontal_alignment() const;
	void set_vertical_alignment(VerticalAlignment alignment);
	VerticalAlignment get_vertical_alignment() const;
	void set_text(const String &text);
	String get_text() const;
	void set_label_settings(const Ref<LabelSettings> &settings);
	Ref<LabelSettings> get_label_settings() const;
	void set_text_direction(Control::TextDirection direction);
	Control::TextDirection get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_autowrap_mode(TextServer::AutowrapMode autowrap_mode);
	TextServer::AutowrapMode get_autowrap_mode() const;
	void set_justification_flags(BitField<TextServer::JustificationFlag> justification_flags);
	BitField<TextServer::JustificationFlag> get_justification_flags() const;
	void set_clip_text(bool enable);
	bool is_clipping_text() const;
	void set_tab_stops(const PackedFloat32Array &tab_stops);
	PackedFloat32Array get_tab_stops() const;
	void set_text_overrun_behavior(TextServer::OverrunBehavior overrun_behavior);
	TextServer::OverrunBehavior get_text_overrun_behavior() const;
	void set_uppercase(bool enable);
	bool is_uppercase() const;
	int32_t get_line_height(int32_t line = -1) const;
	int32_t get_line_count() const;
	int32_t get_visible_line_count() const;
	int32_t get_total_character_count() const;
	void set_visible_characters(int32_t amount);
	int32_t get_visible_characters() const;
	TextServer::VisibleCharactersBehavior get_visible_characters_behavior() const;
	void set_visible_characters_behavior(TextServer::VisibleCharactersBehavior behavior);
	void set_visible_ratio(double ratio);
	double get_visible_ratio() const;
	void set_lines_skipped(int32_t lines_skipped);
	int32_t get_lines_skipped() const;
	void set_max_lines_visible(int32_t lines_visible);
	int32_t get_max_lines_visible() const;
	void set_structured_text_bidi_override(TextServer::StructuredTextParser parser);
	TextServer::StructuredTextParser get_structured_text_bidi_override() const;
	void set_structured_text_bidi_override_options(const Array &args);
	Array get_structured_text_bidi_override_options() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Control::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_LABEL_HPP