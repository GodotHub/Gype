#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/curve.hpp>

using namespace godot;

void register_classes_Curve() {
    qjs::Context::Module &_module = _General;
    _module.class_<Curve>("Curve")
           .constructor<>()
           .property<Curve::get_min_value, Curve::set_min_value>("min_value")
           .property<Curve::get_max_value, Curve::set_max_value>("max_value")
           .property<Curve::get_bake_resolution, Curve::set_bake_resolution>("bake_resolution")
           .property<Curve::get_point_count, Curve::set_point_count>("point_count")
		    .fun<static_cast<int32_t(Curve::*)(const Vector2 &,double,double,Curve::TangentMode,Curve::TangentMode)>(&Curve::add_point)>("add_point")
		    .fun<static_cast<void(Curve::*)(int32_t)>(&Curve::remove_point)>("remove_point")
		    .fun<static_cast<void(Curve::*)()>(&Curve::clear_points)>("clear_points")
		    .fun<static_cast<Vector2(Curve::*)(int32_t)const>(&Curve::get_point_position)>("get_point_position")
		    .fun<static_cast<void(Curve::*)(int32_t,double)>(&Curve::set_point_value)>("set_point_value")
		    .fun<static_cast<int32_t(Curve::*)(int32_t,double)>(&Curve::set_point_offset)>("set_point_offset")
		    .fun<static_cast<double(Curve::*)(double)const>(&Curve::sample)>("sample")
		    .fun<static_cast<double(Curve::*)(double)const>(&Curve::sample_baked)>("sample_baked")
		    .fun<static_cast<double(Curve::*)(int32_t)const>(&Curve::get_point_left_tangent)>("get_point_left_tangent")
		    .fun<static_cast<double(Curve::*)(int32_t)const>(&Curve::get_point_right_tangent)>("get_point_right_tangent")
		    .fun<static_cast<Curve::TangentMode(Curve::*)(int32_t)const>(&Curve::get_point_left_mode)>("get_point_left_mode")
		    .fun<static_cast<Curve::TangentMode(Curve::*)(int32_t)const>(&Curve::get_point_right_mode)>("get_point_right_mode")
		    .fun<static_cast<void(Curve::*)(int32_t,double)>(&Curve::set_point_left_tangent)>("set_point_left_tangent")
		    .fun<static_cast<void(Curve::*)(int32_t,double)>(&Curve::set_point_right_tangent)>("set_point_right_tangent")
		    .fun<static_cast<void(Curve::*)(int32_t,Curve::TangentMode)>(&Curve::set_point_left_mode)>("set_point_left_mode")
		    .fun<static_cast<void(Curve::*)(int32_t,Curve::TangentMode)>(&Curve::set_point_right_mode)>("set_point_right_mode")
		    .fun<static_cast<void(Curve::*)()>(&Curve::clean_dupes)>("clean_dupes")
		    .fun<static_cast<void(Curve::*)()>(&Curve::bake)>("bake")
;}