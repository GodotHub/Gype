#include "register/register_builtin_classes.h"
#include "register/utils.h"

using namespace godot;

void register_builtin_classes_Vector4() {
	_Variant.class_<Vector4>("Vector4")
            .constructor<>()
            .constructor<const Vector4 &>("Vector4_1")
            .constructor<const Vector4i &>("Vector4_2")
            .constructor<real_t,real_t,real_t,real_t>("Vector4_3")

			.fun<static_cast<Vector4::Axis(Vector4::*)()const>(&Vector4::min_axis_index)>("min_axis_index")
			.fun<static_cast<Vector4::Axis(Vector4::*)()const>(&Vector4::max_axis_index)>("max_axis_index")
			.fun<static_cast<real_t(Vector4::*)()const>(&Vector4::length)>("length")
			.fun<static_cast<real_t(Vector4::*)()const>(&Vector4::length_squared)>("length_squared")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::abs)>("abs")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::sign)>("sign")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::floor)>("floor")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::ceil)>("ceil")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::round)>("round")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &,real_t)const>(&Vector4::lerp)>("lerp")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &,const Vector4 &,const Vector4 &,real_t)const>(&Vector4::cubic_interpolate)>("cubic_interpolate")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &,const Vector4 &,const Vector4 &,real_t,const real_t&,const real_t&,const real_t&)const>(&Vector4::cubic_interpolate_in_time)>("cubic_interpolate_in_time")
			.fun<static_cast<Vector4(Vector4::*)(real_t)const>(&Vector4::posmod)>("posmod")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &)const>(&Vector4::posmodv)>("posmodv")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &)const>(&Vector4::snapped)>("snapped")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &,const Vector4 &)const>(&Vector4::clamp)>("clamp")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::normalized)>("normalized")
			.fun<static_cast<bool(Vector4::*)()const>(&Vector4::is_normalized)>("is_normalized")
			.fun<static_cast<Vector4(Vector4::*)(const Vector4 &)const>(&Vector4::direction_to)>("direction_to")
			.fun<static_cast<real_t(Vector4::*)(const Vector4 &)const>(&Vector4::distance_to)>("distance_to")
			.fun<static_cast<real_t(Vector4::*)(const Vector4 &)const>(&Vector4::distance_squared_to)>("distance_squared_to")
			.fun<static_cast<real_t(Vector4::*)(const Vector4 &)const>(&Vector4::dot)>("dot")
			.fun<static_cast<Vector4(Vector4::*)()const>(&Vector4::inverse)>("inverse")
			.fun<static_cast<bool(Vector4::*)(const Vector4 &)const>(&Vector4::is_equal_approx)>("is_equal_approx")
			.fun<static_cast<bool(Vector4::*)()const>(&Vector4::is_zero_approx)>("is_zero_approx")
			.fun<static_cast<bool(Vector4::*)()const>(&Vector4::is_finite)>("is_finite");
}