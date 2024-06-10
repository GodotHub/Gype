
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Rect2i() {
	get_Variant_module().class_<Rect2i>("Rect2i").constructor<>().constructor<const Rect2i &>("Rect2i_1").constructor<const Rect2 &>("Rect2i_2").constructor<const Vector2i &, const Vector2i &>("Rect2i_3").constructor<int64_t, int64_t, int64_t, int64_t>("Rect2i_4")

			.fun<static_cast<Vector2i (Rect2i::*)() const>(&Rect2i::get_center)>("get_center")
			.fun<static_cast<int (Rect2i::*)() const>(&Rect2i::get_area)>("get_area")
			.fun<static_cast<bool (Rect2i::*)() const>(&Rect2i::has_area)>("has_area")
			.fun<static_cast<bool (Rect2i::*)(const Vector2i &) const>(&Rect2i::has_point)>("has_point")
			.fun<static_cast<bool (Rect2i::*)(const Rect2i &) const>(&Rect2i::intersects)>("intersects")
			.fun<static_cast<bool (Rect2i::*)(const Rect2i &) const>(&Rect2i::encloses)>("encloses")
			.fun<static_cast<Rect2i (Rect2i::*)(const Rect2i &) const>(&Rect2i::intersection)>("intersection")
			.fun<static_cast<Rect2i (Rect2i::*)(const Rect2i &) const>(&Rect2i::merge)>("merge")
			.fun<static_cast<Rect2i (Rect2i::*)(const Vector2i &) const>(&Rect2i::expand)>("expand")
			.fun<static_cast<Rect2i (Rect2i::*)(int) const>(&Rect2i::grow)>("grow")
			.fun<static_cast<Rect2i (Rect2i::*)(Side, int) const>(&Rect2i::grow_side)>("grow_side")
			.fun<static_cast<Rect2i (Rect2i::*)(int, int, int, int) const>(&Rect2i::grow_individual)>("grow_individual")
			.fun<static_cast<Rect2i (Rect2i::*)() const>(&Rect2i::abs)>("abs");
}