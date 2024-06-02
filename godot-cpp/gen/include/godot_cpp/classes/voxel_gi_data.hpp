/**************************************************************************/
/*  voxel_gi_data.hpp                                                     */
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

#ifndef GODOT_CPP_VOXEL_GI_DATA_HPP
#define GODOT_CPP_VOXEL_GI_DATA_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class VoxelGIData : public Resource {
	GDEXTENSION_CLASS(VoxelGIData, Resource)

public:
	void allocate(const Transform3D &to_cell_xform, const AABB &aabb, const Vector3 &octree_size, const PackedByteArray &octree_cells, const PackedByteArray &data_cells, const PackedByteArray &distance_field, const PackedInt32Array &level_counts);
	AABB get_bounds() const;
	Vector3 get_octree_size() const;
	Transform3D get_to_cell_xform() const;
	PackedByteArray get_octree_cells() const;
	PackedByteArray get_data_cells() const;
	PackedInt32Array get_level_counts() const;
	void set_dynamic_range(double dynamic_range);
	double get_dynamic_range() const;
	void set_energy(double energy);
	double get_energy() const;
	void set_bias(double bias);
	double get_bias() const;
	void set_normal_bias(double bias);
	double get_normal_bias() const;
	void set_propagation(double propagation);
	double get_propagation() const;
	void set_interior(bool interior);
	bool is_interior() const;
	void set_use_two_bounces(bool enable);
	bool is_using_two_bounces() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_VOXEL_GI_DATA_HPP