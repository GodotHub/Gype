/**************************************************************************/
/*  a_star_grid2d.hpp                                                     */
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

#ifndef GODOT_CPP_A_STAR_GRID2D_HPP
#define GODOT_CPP_A_STAR_GRID2D_HPP

#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class AStarGrid2D : public RefCounted {
	GDEXTENSION_CLASS(AStarGrid2D, RefCounted)

public:

	enum Heuristic {
		HEURISTIC_EUCLIDEAN = 0,
		HEURISTIC_MANHATTAN = 1,
		HEURISTIC_OCTILE = 2,
		HEURISTIC_CHEBYSHEV = 3,
		HEURISTIC_MAX = 4,
	};

	enum DiagonalMode {
		DIAGONAL_MODE_ALWAYS = 0,
		DIAGONAL_MODE_NEVER = 1,
		DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE = 2,
		DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES = 3,
		DIAGONAL_MODE_MAX = 4,
	};

	enum CellShape {
		CELL_SHAPE_SQUARE = 0,
		CELL_SHAPE_ISOMETRIC_RIGHT = 1,
		CELL_SHAPE_ISOMETRIC_DOWN = 2,
		CELL_SHAPE_MAX = 3,
	};

	void set_region(const Rect2i &region);
	Rect2i get_region() const;
	void set_size(const Vector2i &size);
	Vector2i get_size() const;
	void set_offset(const Vector2 &offset);
	Vector2 get_offset() const;
	void set_cell_size(const Vector2 &cell_size);
	Vector2 get_cell_size() const;
	void set_cell_shape(AStarGrid2D::CellShape cell_shape);
	AStarGrid2D::CellShape get_cell_shape() const;
	bool is_in_bounds(int32_t x, int32_t y) const;
	bool is_in_boundsv(const Vector2i &id) const;
	bool is_dirty() const;
	void update();
	void set_jumping_enabled(bool enabled);
	bool is_jumping_enabled() const;
	void set_diagonal_mode(AStarGrid2D::DiagonalMode mode);
	AStarGrid2D::DiagonalMode get_diagonal_mode() const;
	void set_default_compute_heuristic(AStarGrid2D::Heuristic heuristic);
	AStarGrid2D::Heuristic get_default_compute_heuristic() const;
	void set_default_estimate_heuristic(AStarGrid2D::Heuristic heuristic);
	AStarGrid2D::Heuristic get_default_estimate_heuristic() const;
	void set_point_solid(const Vector2i &id, bool solid = true);
	bool is_point_solid(const Vector2i &id) const;
	void set_point_weight_scale(const Vector2i &id, double weight_scale);
	double get_point_weight_scale(const Vector2i &id) const;
	void fill_solid_region(const Rect2i &region, bool solid = true);
	void fill_weight_scale_region(const Rect2i &region, double weight_scale);
	void clear();
	Vector2 get_point_position(const Vector2i &id) const;
	PackedVector2Array get_point_path(const Vector2i &from_id, const Vector2i &to_id, bool allow_partial_path = false);
	TypedArray<Vector2i> get_id_path(const Vector2i &from_id, const Vector2i &to_id, bool allow_partial_path = false);
	virtual double _estimate_cost(const Vector2i &from_id, const Vector2i &to_id) const;
	virtual double _compute_cost(const Vector2i &from_id, const Vector2i &to_id) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_estimate_cost),decltype(&T::_estimate_cost)>) {
			BIND_VIRTUAL_METHOD(T, _estimate_cost);
		}
		if constexpr (!std::is_same_v<decltype(&B::_compute_cost),decltype(&T::_compute_cost)>) {
			BIND_VIRTUAL_METHOD(T, _compute_cost);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AStarGrid2D::Heuristic);
VARIANT_ENUM_CAST(AStarGrid2D::DiagonalMode);
VARIANT_ENUM_CAST(AStarGrid2D::CellShape);

#endif // ! GODOT_CPP_A_STAR_GRID2D_HPP