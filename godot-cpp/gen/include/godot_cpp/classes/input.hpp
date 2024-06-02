/**************************************************************************/
/*  input.hpp                                                             */
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

#ifndef GODOT_CPP_INPUT_HPP
#define GODOT_CPP_INPUT_HPP

#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class InputEvent;
class Resource;
class StringName;

class Input : public Object {
	GDEXTENSION_CLASS(Input, Object)

public:
	enum MouseMode {
		MOUSE_MODE_VISIBLE = 0,
		MOUSE_MODE_HIDDEN = 1,
		MOUSE_MODE_CAPTURED = 2,
		MOUSE_MODE_CONFINED = 3,
		MOUSE_MODE_CONFINED_HIDDEN = 4,
	};

	enum CursorShape {
		CURSOR_ARROW = 0,
		CURSOR_IBEAM = 1,
		CURSOR_POINTING_HAND = 2,
		CURSOR_CROSS = 3,
		CURSOR_WAIT = 4,
		CURSOR_BUSY = 5,
		CURSOR_DRAG = 6,
		CURSOR_CAN_DROP = 7,
		CURSOR_FORBIDDEN = 8,
		CURSOR_VSIZE = 9,
		CURSOR_HSIZE = 10,
		CURSOR_BDIAGSIZE = 11,
		CURSOR_FDIAGSIZE = 12,
		CURSOR_MOVE = 13,
		CURSOR_VSPLIT = 14,
		CURSOR_HSPLIT = 15,
		CURSOR_HELP = 16,
	};

	static Input *get_singleton();

	bool is_anything_pressed() const;
	bool is_key_pressed(Key keycode) const;
	bool is_physical_key_pressed(Key keycode) const;
	bool is_key_label_pressed(Key keycode) const;
	bool is_mouse_button_pressed(MouseButton button) const;
	bool is_joy_button_pressed(int32_t device, JoyButton button) const;
	bool is_action_pressed(const StringName &action, bool exact_match = false) const;
	bool is_action_just_pressed(const StringName &action, bool exact_match = false) const;
	bool is_action_just_released(const StringName &action, bool exact_match = false) const;
	double get_action_strength(const StringName &action, bool exact_match = false) const;
	double get_action_raw_strength(const StringName &action, bool exact_match = false) const;
	double get_axis(const StringName &negative_action, const StringName &positive_action) const;
	Vector2 get_vector(const StringName &negative_x, const StringName &positive_x, const StringName &negative_y, const StringName &positive_y, double deadzone = -1.0) const;
	void add_joy_mapping(const String &mapping, bool update_existing = false);
	void remove_joy_mapping(const String &guid);
	bool is_joy_known(int32_t device);
	double get_joy_axis(int32_t device, JoyAxis axis) const;
	String get_joy_name(int32_t device);
	String get_joy_guid(int32_t device) const;
	Dictionary get_joy_info(int32_t device) const;
	bool should_ignore_device(int32_t vendor_id, int32_t product_id) const;
	TypedArray<int> get_connected_joypads();
	Vector2 get_joy_vibration_strength(int32_t device);
	double get_joy_vibration_duration(int32_t device);
	void start_joy_vibration(int32_t device, double weak_magnitude, double strong_magnitude, double duration = 0);
	void stop_joy_vibration(int32_t device);
	void vibrate_handheld(int32_t duration_ms = 500);
	Vector3 get_gravity() const;
	Vector3 get_accelerometer() const;
	Vector3 get_magnetometer() const;
	Vector3 get_gyroscope() const;
	void set_gravity(const Vector3 &value);
	void set_accelerometer(const Vector3 &value);
	void set_magnetometer(const Vector3 &value);
	void set_gyroscope(const Vector3 &value);
	Vector2 get_last_mouse_velocity();
	BitField<MouseButtonMask> get_mouse_button_mask() const;
	void set_mouse_mode(Input::MouseMode mode);
	Input::MouseMode get_mouse_mode() const;
	void warp_mouse(const Vector2 &position);
	void action_press(const StringName &action, double strength = 1.0);
	void action_release(const StringName &action);
	void set_default_cursor_shape(Input::CursorShape shape = (Input::CursorShape)0);
	Input::CursorShape get_current_cursor_shape() const;
	void set_custom_mouse_cursor(const Ref<Resource> &image, Input::CursorShape shape = (Input::CursorShape)0, const Vector2 &hotspot = Vector2(0, 0));
	void parse_input_event(const Ref<InputEvent> &event);
	void set_use_accumulated_input(bool enable);
	bool is_using_accumulated_input();
	void flush_buffered_events();

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(Input::MouseMode);
VARIANT_ENUM_CAST(Input::CursorShape);

#endif // ! GODOT_CPP_INPUT_HPP