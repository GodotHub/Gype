/**************************************************************************/
/*  texture2d.hpp                                                         */
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

#ifndef GODOT_CPP_TEXTURE2D_HPP
#define GODOT_CPP_TEXTURE2D_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Image;
class RID;
struct Rect2;
class Resource;

class Texture2D : public Texture {
	GDEXTENSION_CLASS(Texture2D, Texture)

public:

	int32_t get_width() const;
	int32_t get_height() const;
	Vector2 get_size() const;
	bool has_alpha() const;
	void draw(const RID &canvas_item, const Vector2 &position, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false) const;
	void draw_rect(const RID &canvas_item, const Rect2 &rect, bool tile, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false) const;
	void draw_rect_region(const RID &canvas_item, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate = Color(1, 1, 1, 1), bool transpose = false, bool clip_uv = true) const;
	Ref<Image> get_image() const;
	Ref<Resource> create_placeholder() const;
	virtual int32_t _get_width() const;
	virtual int32_t _get_height() const;
	virtual bool _is_pixel_opaque(int32_t x, int32_t y) const;
	virtual bool _has_alpha() const;
	virtual void _draw(const RID &to_canvas_item, const Vector2 &pos, const Color &modulate, bool transpose) const;
	virtual void _draw_rect(const RID &to_canvas_item, const Rect2 &rect, bool tile, const Color &modulate, bool transpose) const;
	virtual void _draw_rect_region(const RID &to_canvas_item, const Rect2 &rect, const Rect2 &src_rect, const Color &modulate, bool transpose, bool clip_uv) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Texture::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_get_width),decltype(&T::_get_width)>) {
			BIND_VIRTUAL_METHOD(T, _get_width);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_height),decltype(&T::_get_height)>) {
			BIND_VIRTUAL_METHOD(T, _get_height);
		}
		if constexpr (!std::is_same_v<decltype(&B::_is_pixel_opaque),decltype(&T::_is_pixel_opaque)>) {
			BIND_VIRTUAL_METHOD(T, _is_pixel_opaque);
		}
		if constexpr (!std::is_same_v<decltype(&B::_has_alpha),decltype(&T::_has_alpha)>) {
			BIND_VIRTUAL_METHOD(T, _has_alpha);
		}
		if constexpr (!std::is_same_v<decltype(&B::_draw),decltype(&T::_draw)>) {
			BIND_VIRTUAL_METHOD(T, _draw);
		}
		if constexpr (!std::is_same_v<decltype(&B::_draw_rect),decltype(&T::_draw_rect)>) {
			BIND_VIRTUAL_METHOD(T, _draw_rect);
		}
		if constexpr (!std::is_same_v<decltype(&B::_draw_rect_region),decltype(&T::_draw_rect_region)>) {
			BIND_VIRTUAL_METHOD(T, _draw_rect_region);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_TEXTURE2D_HPP