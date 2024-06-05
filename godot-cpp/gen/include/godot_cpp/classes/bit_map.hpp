/**************************************************************************/
/*  bit_map.hpp                                                           */
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

#ifndef GODOT_CPP_BIT_MAP_HPP
#define GODOT_CPP_BIT_MAP_HPP

#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Image;
struct Rect2i;

class BitMap : public Resource {
	GDEXTENSION_CLASS(BitMap, Resource)

public:

	void create(const Vector2i &size);
	void create_from_image_alpha(const Ref<Image> &image, double threshold = 0.1);
	void set_bitv(const Vector2i &position, bool bit);
	void set_bit(int32_t x, int32_t y, bool bit);
	bool get_bitv(const Vector2i &position) const;
	bool get_bit(int32_t x, int32_t y) const;
	void set_bit_rect(const Rect2i &rect, bool bit);
	int32_t get_true_bit_count() const;
	Vector2i get_size() const;
	void resize(const Vector2i &new_size);
	void grow_mask(int32_t pixels, const Rect2i &rect);
	Ref<Image> convert_to_image() const;
	TypedArray<PackedVector2Array> opaque_to_polygons(const Rect2i &rect, double epsilon = 2.0) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_BIT_MAP_HPP