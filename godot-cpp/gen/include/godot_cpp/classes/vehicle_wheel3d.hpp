/**************************************************************************/
/*  vehicle_wheel3d.hpp                                                   */
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

#ifndef GODOT_CPP_VEHICLE_WHEEL3D_HPP
#define GODOT_CPP_VEHICLE_WHEEL3D_HPP

#include <godot_cpp/classes/node3d.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class VehicleWheel3D : public Node3D {
	GDEXTENSION_CLASS(VehicleWheel3D, Node3D)

public:
	void set_radius(double length);
	double get_radius() const;
	void set_suspension_rest_length(double length);
	double get_suspension_rest_length() const;
	void set_suspension_travel(double length);
	double get_suspension_travel() const;
	void set_suspension_stiffness(double length);
	double get_suspension_stiffness() const;
	void set_suspension_max_force(double length);
	double get_suspension_max_force() const;
	void set_damping_compression(double length);
	double get_damping_compression() const;
	void set_damping_relaxation(double length);
	double get_damping_relaxation() const;
	void set_use_as_traction(bool enable);
	bool is_used_as_traction() const;
	void set_use_as_steering(bool enable);
	bool is_used_as_steering() const;
	void set_friction_slip(double length);
	double get_friction_slip() const;
	bool is_in_contact() const;
	Node3D *get_contact_body() const;
	void set_roll_influence(double roll_influence);
	double get_roll_influence() const;
	double get_skidinfo() const;
	double get_rpm() const;
	void set_engine_force(double engine_force);
	double get_engine_force() const;
	void set_brake(double brake);
	double get_brake() const;
	void set_steering(double steering);
	double get_steering() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node3D::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_VEHICLE_WHEEL3D_HPP