/**************************************************************************/
/*  multi_mesh.hpp                                                        */
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

#ifndef GODOT_CPP_MULTI_MESH_HPP
#define GODOT_CPP_MULTI_MESH_HPP

#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/transform3d.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Mesh;

class MultiMesh : public Resource {
	GDEXTENSION_CLASS(MultiMesh, Resource)

public:

	enum TransformFormat {
		TRANSFORM_2D = 0,
		TRANSFORM_3D = 1,
	};

	void set_mesh(const Ref<Mesh> &mesh);
	Ref<Mesh> get_mesh() const;
	void set_use_colors(bool enable);
	bool is_using_colors() const;
	void set_use_custom_data(bool enable);
	bool is_using_custom_data() const;
	void set_transform_format(MultiMesh::TransformFormat format);
	MultiMesh::TransformFormat get_transform_format() const;
	void set_instance_count(int32_t count);
	int32_t get_instance_count() const;
	void set_visible_instance_count(int32_t count);
	int32_t get_visible_instance_count() const;
	void set_instance_transform(int32_t instance, const Transform3D &transform);
	void set_instance_transform_2d(int32_t instance, const Transform2D &transform);
	Transform3D get_instance_transform(int32_t instance) const;
	Transform2D get_instance_transform_2d(int32_t instance) const;
	void set_instance_color(int32_t instance, const Color &color);
	Color get_instance_color(int32_t instance) const;
	void set_instance_custom_data(int32_t instance, const Color &custom_data);
	Color get_instance_custom_data(int32_t instance) const;
	void set_custom_aabb(const AABB &aabb);
	AABB get_custom_aabb() const;
	AABB get_aabb() const;
	PackedFloat32Array get_buffer() const;
	void set_buffer(const PackedFloat32Array &buffer);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(MultiMesh::TransformFormat);

#endif // ! GODOT_CPP_MULTI_MESH_HPP