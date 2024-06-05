/**************************************************************************/
/*  navigation_link2d.hpp                                                 */
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

#ifndef GODOT_CPP_NAVIGATION_LINK2D_HPP
#define GODOT_CPP_NAVIGATION_LINK2D_HPP

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class NavigationLink2D : public Node2D {
	GDEXTENSION_CLASS(NavigationLink2D, Node2D)

public:

	RID get_rid() const;
	void set_enabled(bool enabled);
	bool is_enabled() const;
	void set_bidirectional(bool bidirectional);
	bool is_bidirectional() const;
	void set_navigation_layers(uint32_t navigation_layers);
	uint32_t get_navigation_layers() const;
	void set_navigation_layer_value(int32_t layer_number, bool value);
	bool get_navigation_layer_value(int32_t layer_number) const;
	void set_start_position(const Vector2 &position);
	Vector2 get_start_position() const;
	void set_end_position(const Vector2 &position);
	Vector2 get_end_position() const;
	void set_global_start_position(const Vector2 &position);
	Vector2 get_global_start_position() const;
	void set_global_end_position(const Vector2 &position);
	Vector2 get_global_end_position() const;
	void set_enter_cost(double enter_cost);
	double get_enter_cost() const;
	void set_travel_cost(double travel_cost);
	double get_travel_cost() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node2D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_NAVIGATION_LINK2D_HPP