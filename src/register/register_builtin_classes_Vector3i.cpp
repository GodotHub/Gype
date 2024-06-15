
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/variant/vector3i.hpp>
#include <stdint.h>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Vector3i() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<Vector3i>("Vector3i")
			.constructor<>()
			.constructor<const Vector3i &>("Vector3i_1")
			.constructor<const Vector3 &>("Vector3i_2")
			.constructor<int64_t, int64_t, int64_t>("Vector3i_3")

			.fun<static_cast<Vector3i::Axis (Vector3i::*)() const>(&Vector3i::min_axis_index)>("min_axis_index")
			.fun<static_cast<Vector3i::Axis (Vector3i::*)() const>(&Vector3i::max_axis_index)>("max_axis_index")
			.fun<static_cast<double (Vector3i::*)(const Vector3i &) const>(&Vector3i::distance_to)>("distance_to")
			.fun<static_cast<int64_t (Vector3i::*)(const Vector3i &) const>(&Vector3i::distance_squared_to)>("distance_squared_to")
			.fun<static_cast<double (Vector3i::*)() const>(&Vector3i::length)>("length")
			.fun<static_cast<int64_t (Vector3i::*)() const>(&Vector3i::length_squared)>("length_squared")
			.fun<static_cast<Vector3i (Vector3i::*)() const>(&Vector3i::sign)>("sign")
			.fun<static_cast<Vector3i (Vector3i::*)() const>(&Vector3i::abs)>("abs")
			.fun<static_cast<Vector3i (Vector3i::*)(const Vector3i &, const Vector3i &) const>(&Vector3i::clamp)>("clamp")
			.fun<static_cast<Vector3i (Vector3i::*)(int32_t, int32_t) const>(&Vector3i::clampi)>("clampi")
			.fun<static_cast<Vector3i (Vector3i::*)(const Vector3i &) const>(&Vector3i::snapped)>("snapped")
			.fun<static_cast<Vector3i (Vector3i::*)(int32_t) const>(&Vector3i::snappedi)>("snappedi")
			.fun<static_cast<Vector3i (Vector3i::*)(const Vector3i &) const>(&Vector3i::min)>("min")
			.fun<static_cast<Vector3i (Vector3i::*)(int32_t) const>(&Vector3i::mini)>("mini")
			.fun<static_cast<Vector3i (Vector3i::*)(const Vector3i &) const>(&Vector3i::max)>("max")
			.fun<static_cast<Vector3i (Vector3i::*)(int32_t) const>(&Vector3i::maxi)>("maxi");
}