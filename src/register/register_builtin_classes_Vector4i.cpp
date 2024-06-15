
#include <godot_cpp/variant/vector4.hpp>
#include <godot_cpp/variant/vector4i.hpp>
#include <stdint.h>

#include "qjspp.hpp"
#include "register/register_builtin_classes.h"

using namespace godot;

void register_builtin_classes_Vector4i() {
	qjs::Context::Module &_Variant = get_Variant_module();
	_Variant.class_<Vector4i>("Vector4i")
			.constructor<>()
			.constructor<const Vector4i &>("Vector4i_1")
			.constructor<const Vector4 &>("Vector4i_2")
			.constructor<int64_t, int64_t, int64_t, int64_t>("Vector4i_3")

			.fun<static_cast<Vector4i::Axis (Vector4i::*)() const>(&Vector4i::min_axis_index)>("min_axis_index")
			.fun<static_cast<Vector4i::Axis (Vector4i::*)() const>(&Vector4i::max_axis_index)>("max_axis_index")
			.fun<static_cast<double (Vector4i::*)() const>(&Vector4i::length)>("length")
			.fun<static_cast<int64_t (Vector4i::*)() const>(&Vector4i::length_squared)>("length_squared")
			.fun<static_cast<Vector4i (Vector4i::*)() const>(&Vector4i::sign)>("sign")
			.fun<static_cast<Vector4i (Vector4i::*)() const>(&Vector4i::abs)>("abs")
			.fun<static_cast<Vector4i (Vector4i::*)(const Vector4i &, const Vector4i &) const>(&Vector4i::clamp)>("clamp")
			.fun<static_cast<Vector4i (Vector4i::*)(int32_t, int32_t) const>(&Vector4i::clampi)>("clampi")
			.fun<static_cast<Vector4i (Vector4i::*)(const Vector4i &) const>(&Vector4i::snapped)>("snapped")
			.fun<static_cast<Vector4i (Vector4i::*)(int32_t) const>(&Vector4i::snappedi)>("snappedi")
			.fun<static_cast<Vector4i (Vector4i::*)(const Vector4i &) const>(&Vector4i::min)>("min")
			.fun<static_cast<Vector4i (Vector4i::*)(int32_t) const>(&Vector4i::mini)>("mini")
			.fun<static_cast<Vector4i (Vector4i::*)(const Vector4i &) const>(&Vector4i::max)>("max")
			.fun<static_cast<Vector4i (Vector4i::*)(int32_t) const>(&Vector4i::maxi)>("maxi")
			.fun<static_cast<double (Vector4i::*)(const Vector4i &) const>(&Vector4i::distance_to)>("distance_to")
			.fun<static_cast<int64_t (Vector4i::*)(const Vector4i &) const>(&Vector4i::distance_squared_to)>("distance_squared_to");
}