/**************************************************************************/
/*  camera2d.hpp                                                          */
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

#ifndef GODOT_CPP_CAMERA2D_HPP
#define GODOT_CPP_CAMERA2D_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Node;

class Camera2D : public Node2D {
	GDEXTENSION_CLASS(Camera2D, Node2D)

public:

	enum AnchorMode {
		ANCHOR_MODE_FIXED_TOP_LEFT = 0,
		ANCHOR_MODE_DRAG_CENTER = 1,
	};

	enum Camera2DProcessCallback {
		CAMERA2D_PROCESS_PHYSICS = 0,
		CAMERA2D_PROCESS_IDLE = 1,
	};

	void set_offset(const Vector2 &offset);
	Vector2 get_offset() const;
	void set_anchor_mode(Camera2D::AnchorMode anchor_mode);
	Camera2D::AnchorMode get_anchor_mode() const;
	void set_ignore_rotation(bool ignore);
	bool is_ignoring_rotation() const;
	void set_process_callback(Camera2D::Camera2DProcessCallback mode);
	Camera2D::Camera2DProcessCallback get_process_callback() const;
	void set_enabled(bool enabled);
	bool is_enabled() const;
	void make_current();
	bool is_current() const;
	void set_limit(Side margin, int32_t limit);
	int32_t get_limit(Side margin) const;
	void set_limit_smoothing_enabled(bool limit_smoothing_enabled);
	bool is_limit_smoothing_enabled() const;
	void set_drag_vertical_enabled(bool enabled);
	bool is_drag_vertical_enabled() const;
	void set_drag_horizontal_enabled(bool enabled);
	bool is_drag_horizontal_enabled() const;
	void set_drag_vertical_offset(double offset);
	double get_drag_vertical_offset() const;
	void set_drag_horizontal_offset(double offset);
	double get_drag_horizontal_offset() const;
	void set_drag_margin(Side margin, double drag_margin);
	double get_drag_margin(Side margin) const;
	Vector2 get_target_position() const;
	Vector2 get_screen_center_position() const;
	void set_zoom(const Vector2 &zoom);
	Vector2 get_zoom() const;
	void set_custom_viewport(Node *viewport);
	Node *get_custom_viewport() const;
	void set_position_smoothing_speed(double position_smoothing_speed);
	double get_position_smoothing_speed() const;
	void set_position_smoothing_enabled(bool position_smoothing_speed);
	bool is_position_smoothing_enabled() const;
	void set_rotation_smoothing_enabled(bool enabled);
	bool is_rotation_smoothing_enabled() const;
	void set_rotation_smoothing_speed(double speed);
	double get_rotation_smoothing_speed() const;
	void force_update_scroll();
	void reset_smoothing();
	void align();
	void set_screen_drawing_enabled(bool screen_drawing_enabled);
	bool is_screen_drawing_enabled() const;
	void set_limit_drawing_enabled(bool limit_drawing_enabled);
	bool is_limit_drawing_enabled() const;
	void set_margin_drawing_enabled(bool margin_drawing_enabled);
	bool is_margin_drawing_enabled() const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node2D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(Camera2D::AnchorMode);
VARIANT_ENUM_CAST(Camera2D::Camera2DProcessCallback);

#endif // ! GODOT_CPP_CAMERA2D_HPP