/**************************************************************************/
/*  physics_direct_space_state2d_extension.hpp                            */
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

#ifndef GODOT_CPP_PHYSICS_DIRECT_SPACE_STATE2D_EXTENSION_HPP
#define GODOT_CPP_PHYSICS_DIRECT_SPACE_STATE2D_EXTENSION_HPP

#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_server2d_extension_ray_result.hpp>
#include <godot_cpp/classes/physics_server2d_extension_shape_rest_info.hpp>
#include <godot_cpp/classes/physics_server2d_extension_shape_result.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class RID;
struct Transform2D;
struct Vector2;

class PhysicsDirectSpaceState2DExtension : public PhysicsDirectSpaceState2D {
	GDEXTENSION_CLASS(PhysicsDirectSpaceState2DExtension, PhysicsDirectSpaceState2D)

public:
	bool is_body_excluded_from_query(const RID &body) const;
	virtual bool _intersect_ray(const Vector2 &from, const Vector2 &to, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, bool hit_from_inside, PhysicsServer2DExtensionRayResult *result);
	virtual int32_t _intersect_point(const Vector2 &position, uint64_t canvas_instance_id, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer2DExtensionShapeResult *results, int32_t max_results);
	virtual int32_t _intersect_shape(const RID &shape_rid, const Transform2D &transform, const Vector2 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer2DExtensionShapeResult *result, int32_t max_results);
	virtual bool _cast_motion(const RID &shape_rid, const Transform2D &transform, const Vector2 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, float *closest_safe, float *closest_unsafe);
	virtual bool _collide_shape(const RID &shape_rid, const Transform2D &transform, const Vector2 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, void *results, int32_t max_results, int32_t *result_count);
	virtual bool _rest_info(const RID &shape_rid, const Transform2D &transform, const Vector2 &motion, double margin, uint32_t collision_mask, bool collide_with_bodies, bool collide_with_areas, PhysicsServer2DExtensionShapeRestInfo *rest_info);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		PhysicsDirectSpaceState2D::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_intersect_ray), decltype(&T::_intersect_ray)>) {
			BIND_VIRTUAL_METHOD(T, _intersect_ray);
		}
		if constexpr (!std::is_same_v<decltype(&B::_intersect_point), decltype(&T::_intersect_point)>) {
			BIND_VIRTUAL_METHOD(T, _intersect_point);
		}
		if constexpr (!std::is_same_v<decltype(&B::_intersect_shape), decltype(&T::_intersect_shape)>) {
			BIND_VIRTUAL_METHOD(T, _intersect_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_cast_motion), decltype(&T::_cast_motion)>) {
			BIND_VIRTUAL_METHOD(T, _cast_motion);
		}
		if constexpr (!std::is_same_v<decltype(&B::_collide_shape), decltype(&T::_collide_shape)>) {
			BIND_VIRTUAL_METHOD(T, _collide_shape);
		}
		if constexpr (!std::is_same_v<decltype(&B::_rest_info), decltype(&T::_rest_info)>) {
			BIND_VIRTUAL_METHOD(T, _rest_info);
		}
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_PHYSICS_DIRECT_SPACE_STATE2D_EXTENSION_HPP