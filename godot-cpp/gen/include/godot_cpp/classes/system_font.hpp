/**************************************************************************/
/*  system_font.hpp                                                       */
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

#ifndef GODOT_CPP_SYSTEM_FONT_HPP
#define GODOT_CPP_SYSTEM_FONT_HPP

#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class SystemFont : public Font {
	GDEXTENSION_CLASS(SystemFont, Font)

public:

	void set_antialiasing(TextServer::FontAntialiasing antialiasing);
	TextServer::FontAntialiasing get_antialiasing() const;
	void set_disable_embedded_bitmaps(bool disable_embedded_bitmaps);
	bool get_disable_embedded_bitmaps() const;
	void set_generate_mipmaps(bool generate_mipmaps);
	bool get_generate_mipmaps() const;
	void set_allow_system_fallback(bool allow_system_fallback);
	bool is_allow_system_fallback() const;
	void set_force_autohinter(bool force_autohinter);
	bool is_force_autohinter() const;
	void set_hinting(TextServer::Hinting hinting);
	TextServer::Hinting get_hinting() const;
	void set_subpixel_positioning(TextServer::SubpixelPositioning subpixel_positioning);
	TextServer::SubpixelPositioning get_subpixel_positioning() const;
	void set_multichannel_signed_distance_field(bool msdf);
	bool is_multichannel_signed_distance_field() const;
	void set_msdf_pixel_range(int32_t msdf_pixel_range);
	int32_t get_msdf_pixel_range() const;
	void set_msdf_size(int32_t msdf_size);
	int32_t get_msdf_size() const;
	void set_oversampling(double oversampling);
	double get_oversampling() const;
	PackedStringArray get_font_names() const;
	void set_font_names(const PackedStringArray &names);
	bool get_font_italic() const;
	void set_font_italic(bool italic);
	void set_font_weight(int32_t weight);
	void set_font_stretch(int32_t stretch);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Font::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_SYSTEM_FONT_HPP