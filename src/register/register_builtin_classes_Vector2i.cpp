
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Vector2i() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<Vector2i>("Vector2i")
			.constructor<>()
			.constructor<const Vector2i &>("Vector2i_1")
			.constructor<const Vector2 &>("Vector2i_2")
			.constructor<int64_t, int64_t>("Vector2i_3")

			.fun<static_cast<real_t (Vector2i::*)() const>(&Vector2i::aspect)>("aspect")
			.fun<static_cast<Vector2i::Axis (Vector2i::*)() const>(&Vector2i::max_axis_index)>("max_axis_index")
			.fun<static_cast<Vector2i::Axis (Vector2i::*)() const>(&Vector2i::min_axis_index)>("min_axis_index")
			.fun<static_cast<double (Vector2i::*)(const Vector2i &) const>(&Vector2i::distance_to)>("distance_to")
			.fun<static_cast<int64_t (Vector2i::*)(const Vector2i &) const>(&Vector2i::distance_squared_to)>("distance_squared_to")
			.fun<static_cast<double (Vector2i::*)() const>(&Vector2i::length)>("length")
			.fun<static_cast<int64_t (Vector2i::*)() const>(&Vector2i::length_squared)>("length_squared")
			.fun<static_cast<Vector2i (Vector2i::*)() const>(&Vector2i::sign)>("sign")
			.fun<static_cast<Vector2i (Vector2i::*)() const>(&Vector2i::abs)>("abs")
			.fun<static_cast<Vector2i (Vector2i::*)(const Vector2i &, const Vector2i &) const>(&Vector2i::clamp)>("clamp")
			.fun<static_cast<Vector2i (Vector2i::*)(int32_t, int32_t) const>(&Vector2i::clampi)>("clampi")
			.fun<static_cast<Vector2i (Vector2i::*)(const Vector2i &) const>(&Vector2i::snapped)>("snapped")
			.fun<static_cast<Vector2i (Vector2i::*)(int32_t) const>(&Vector2i::snappedi)>("snappedi")
			.fun<static_cast<Vector2i (Vector2i::*)(const Vector2i &) const>(&Vector2i::min)>("min")
			.fun<static_cast<Vector2i (Vector2i::*)(int32_t) const>(&Vector2i::mini)>("mini")
			.fun<static_cast<Vector2i (Vector2i::*)(const Vector2i &) const>(&Vector2i::max)>("max")
			.fun<static_cast<Vector2i (Vector2i::*)(int32_t) const>(&Vector2i::maxi)>("maxi");
}