#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "register/register_builtin_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_builtin_classes_Rect2() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<Rect2>("Rect2")
			.constructor<>()
			.constructor<const Rect2 &>("Rect2_1")
			.constructor<const Rect2i &>("Rect2_2")
			.constructor<const Vector2 &, const Vector2 &>("Rect2_3")
			.constructor<real_t, real_t, real_t, real_t>("Rect2_4")

			.fun<static_cast<Vector2 (Rect2::*)() const>(&Rect2::get_center)>("get_center")
			.fun<static_cast<real_t (Rect2::*)() const>(&Rect2::get_area)>("get_area")
			.fun<static_cast<bool (Rect2::*)() const>(&Rect2::has_area)>("has_area")
			.fun<static_cast<bool (Rect2::*)(const Vector2 &) const>(&Rect2::has_point)>("has_point")
			.fun<static_cast<bool (Rect2::*)(const Rect2 &) const>(&Rect2::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool (Rect2::*)() const>(&Rect2::is_finite)>("is_finite")
			.fun<static_cast<bool (Rect2::*)(const Rect2 &, bool) const>(&Rect2::intersects)>("intersects")
			.fun<static_cast<bool (Rect2::*)(const Rect2 &) const>(&Rect2::encloses)>("encloses")
			.fun<static_cast<Rect2 (Rect2::*)(const Rect2 &) const>(&Rect2::intersection)>("intersection")
			.fun<static_cast<Rect2 (Rect2::*)(const Rect2 &) const>(&Rect2::merge)>("merge")
			.fun<static_cast<Rect2 (Rect2::*)(const Vector2 &) const>(&Rect2::expand)>("expand")
			.fun<static_cast<Rect2 (Rect2::*)(real_t) const>(&Rect2::grow)>("grow")
			.fun<static_cast<Rect2 (Rect2::*)(Side p_side, real_t) const>(&Rect2::grow_side)>("grow_side")
			.fun<static_cast<Rect2 (Rect2::*)(real_t, real_t, real_t, real_t) const>(&Rect2::grow_individual)>("grow_individual")
			.fun<static_cast<Rect2 (Rect2::*)() const>(&Rect2::abs)>("abs");
}