/**************************************************************************/
/*  curve3d.hpp                                                           */
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

#ifndef GODOT_CPP_CURVE3D_HPP
#define GODOT_CPP_CURVE3D_HPP

#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Curve3D : public Resource {
	GDEXTENSION_CLASS(Curve3D, Resource)

public:

	int32_t get_point_count() const;
	void set_point_count(int32_t count);
	void add_point(const Vector3 &position, const Vector3 &in = Vector3(0, 0, 0), const Vector3 &out = Vector3(0, 0, 0), int32_t index = -1);
	void set_point_position(int32_t idx, const Vector3 &position);
	Vector3 get_point_position(int32_t idx) const;
	void set_point_tilt(int32_t idx, double tilt);
	double get_point_tilt(int32_t idx) const;
	void set_point_in(int32_t idx, const Vector3 &position);
	Vector3 get_point_in(int32_t idx) const;
	void set_point_out(int32_t idx, const Vector3 &position);
	Vector3 get_point_out(int32_t idx) const;
	void remove_point(int32_t idx);
	void clear_points();
	Vector3 sample(int32_t idx, double t) const;
	Vector3 samplef(double fofs) const;
	void set_bake_interval(double distance);
	double get_bake_interval() const;
	void set_up_vector_enabled(bool enable);
	bool is_up_vector_enabled() const;
	double get_baked_length() const;
	Vector3 sample_baked(double offset = 0.0, bool cubic = false) const;
	Transform3D sample_baked_with_rotation(double offset = 0.0, bool cubic = false, bool apply_tilt = false) const;
	Vector3 sample_baked_up_vector(double offset, bool apply_tilt = false) const;
	PackedVector3Array get_baked_points() const;
	PackedFloat32Array get_baked_tilts() const;
	PackedVector3Array get_baked_up_vectors() const;
	Vector3 get_closest_point(const Vector3 &to_point) const;
	double get_closest_offset(const Vector3 &to_point) const;
	PackedVector3Array tessellate(int32_t max_stages = 5, double tolerance_degrees = 4) const;
	PackedVector3Array tessellate_even_length(int32_t max_stages = 5, double tolerance_length = 0.2) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_CURVE3D_HPP