/**************************************************************************/
/*  navigation_polygon.hpp                                                */
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

#ifndef GODOT_CPP_NAVIGATION_POLYGON_HPP
#define GODOT_CPP_NAVIGATION_POLYGON_HPP

#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class NavigationMesh;

class NavigationPolygon : public Resource {
	GDEXTENSION_CLASS(NavigationPolygon, Resource)

public:

	enum ParsedGeometryType {
		PARSED_GEOMETRY_MESH_INSTANCES = 0,
		PARSED_GEOMETRY_STATIC_COLLIDERS = 1,
		PARSED_GEOMETRY_BOTH = 2,
		PARSED_GEOMETRY_MAX = 3,
	};

	enum SourceGeometryMode {
		SOURCE_GEOMETRY_ROOT_NODE_CHILDREN = 0,
		SOURCE_GEOMETRY_GROUPS_WITH_CHILDREN = 1,
		SOURCE_GEOMETRY_GROUPS_EXPLICIT = 2,
		SOURCE_GEOMETRY_MAX = 3,
	};

	void set_vertices(const PackedVector2Array &vertices);
	PackedVector2Array get_vertices() const;
	void add_polygon(const PackedInt32Array &polygon);
	int32_t get_polygon_count() const;
	PackedInt32Array get_polygon(int32_t idx);
	void clear_polygons();
	Ref<NavigationMesh> get_navigation_mesh();
	void add_outline(const PackedVector2Array &outline);
	void add_outline_at_index(const PackedVector2Array &outline, int32_t index);
	int32_t get_outline_count() const;
	void set_outline(int32_t idx, const PackedVector2Array &outline);
	PackedVector2Array get_outline(int32_t idx) const;
	void remove_outline(int32_t idx);
	void clear_outlines();
	void make_polygons_from_outlines();
	void set_cell_size(double cell_size);
	double get_cell_size() const;
	void set_parsed_geometry_type(NavigationPolygon::ParsedGeometryType geometry_type);
	NavigationPolygon::ParsedGeometryType get_parsed_geometry_type() const;
	void set_parsed_collision_mask(uint32_t mask);
	uint32_t get_parsed_collision_mask() const;
	void set_parsed_collision_mask_value(int32_t layer_number, bool value);
	bool get_parsed_collision_mask_value(int32_t layer_number) const;
	void set_source_geometry_mode(NavigationPolygon::SourceGeometryMode geometry_mode);
	NavigationPolygon::SourceGeometryMode get_source_geometry_mode() const;
	void set_source_geometry_group_name(const StringName &group_name);
	StringName get_source_geometry_group_name() const;
	void set_agent_radius(double agent_radius);
	double get_agent_radius() const;
	void clear();
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Resource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(NavigationPolygon::ParsedGeometryType);
VARIANT_ENUM_CAST(NavigationPolygon::SourceGeometryMode);

#endif // ! GODOT_CPP_NAVIGATION_POLYGON_HPP