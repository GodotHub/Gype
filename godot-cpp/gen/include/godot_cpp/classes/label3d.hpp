/**************************************************************************/
/*  label3d.hpp                                                           */
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

#ifndef GODOT_CPP_LABEL3D_HPP
#define GODOT_CPP_LABEL3D_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Font;
class TriangleMesh;

class Label3D : public GeometryInstance3D {
	GDEXTENSION_CLASS(Label3D, GeometryInstance3D)

public:

	enum DrawFlags {
		FLAG_SHADED = 0,
		FLAG_DOUBLE_SIDED = 1,
		FLAG_DISABLE_DEPTH_TEST = 2,
		FLAG_FIXED_SIZE = 3,
		FLAG_MAX = 4,
	};

	enum AlphaCutMode {
		ALPHA_CUT_DISABLED = 0,
		ALPHA_CUT_DISCARD = 1,
		ALPHA_CUT_OPAQUE_PREPASS = 2,
		ALPHA_CUT_HASH = 3,
	};

	void set_horizontal_alignment(HorizontalAlignment alignment);
	HorizontalAlignment get_horizontal_alignment() const;
	void set_vertical_alignment(VerticalAlignment alignment);
	VerticalAlignment get_vertical_alignment() const;
	void set_modulate(const Color &modulate);
	Color get_modulate() const;
	void set_outline_modulate(const Color &modulate);
	Color get_outline_modulate() const;
	void set_text(const String &text);
	String get_text() const;
	void set_text_direction(TextServer::Direction direction);
	TextServer::Direction get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_structured_text_bidi_override(TextServer::StructuredTextParser parser);
	TextServer::StructuredTextParser get_structured_text_bidi_override() const;
	void set_structured_text_bidi_override_options(const Array &args);
	Array get_structured_text_bidi_override_options() const;
	void set_uppercase(bool enable);
	bool is_uppercase() const;
	void set_render_priority(int32_t priority);
	int32_t get_render_priority() const;
	void set_outline_render_priority(int32_t priority);
	int32_t get_outline_render_priority() const;
	void set_font(const Ref<Font> &font);
	Ref<Font> get_font() const;
	void set_font_size(int32_t size);
	int32_t get_font_size() const;
	void set_outline_size(int32_t outline_size);
	int32_t get_outline_size() const;
	void set_line_spacing(double line_spacing);
	double get_line_spacing() const;
	void set_autowrap_mode(TextServer::AutowrapMode autowrap_mode);
	TextServer::AutowrapMode get_autowrap_mode() const;
	void set_justification_flags(BitField<TextServer::JustificationFlag> justification_flags);
	BitField<TextServer::JustificationFlag> get_justification_flags() const;
	void set_width(double width);
	double get_width() const;
	void set_pixel_size(double pixel_size);
	double get_pixel_size() const;
	void set_offset(const Vector2 &offset);
	Vector2 get_offset() const;
	void set_draw_flag(Label3D::DrawFlags flag, bool enabled);
	bool get_draw_flag(Label3D::DrawFlags flag) const;
	void set_billboard_mode(BaseMaterial3D::BillboardMode mode);
	BaseMaterial3D::BillboardMode get_billboard_mode() const;
	void set_alpha_cut_mode(Label3D::AlphaCutMode mode);
	Label3D::AlphaCutMode get_alpha_cut_mode() const;
	void set_alpha_scissor_threshold(double threshold);
	double get_alpha_scissor_threshold() const;
	void set_alpha_hash_scale(double threshold);
	double get_alpha_hash_scale() const;
	void set_alpha_antialiasing(BaseMaterial3D::AlphaAntiAliasing alpha_aa);
	BaseMaterial3D::AlphaAntiAliasing get_alpha_antialiasing() const;
	void set_alpha_antialiasing_edge(double edge);
	double get_alpha_antialiasing_edge() const;
	void set_texture_filter(BaseMaterial3D::TextureFilter mode);
	BaseMaterial3D::TextureFilter get_texture_filter() const;
	Ref<TriangleMesh> generate_triangle_mesh() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		GeometryInstance3D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(Label3D::DrawFlags);
VARIANT_ENUM_CAST(Label3D::AlphaCutMode);

#endif // ! GODOT_CPP_LABEL3D_HPP