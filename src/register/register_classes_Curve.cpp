#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Curve() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Curve>("Curve")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<double(Curve::*)()const>(&Curve::get_min_value),static_cast<void(Curve::*)(double)>(&Curve::set_min_value)>("min_value")
            .property<static_cast<double(Curve::*)()const>(&Curve::get_max_value),static_cast<void(Curve::*)(double)>(&Curve::set_max_value)>("max_value")
            .property<static_cast<int32_t(Curve::*)()const>(&Curve::get_bake_resolution),static_cast<void(Curve::*)(int32_t)>(&Curve::set_bake_resolution)>("bake_resolution")
            .property<static_cast<int32_t(Curve::*)()const>(&Curve::get_point_count),static_cast<void(Curve::*)(int32_t)>(&Curve::set_point_count)>("point_count")
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
;    qjs::Value _TangentMode = context->newObject();
    _TangentMode["TANGENT_FREE"] = Curve::TangentMode::TANGENT_FREE;
    _TangentMode["TANGENT_LINEAR"] = Curve::TangentMode::TANGENT_LINEAR;
    _TangentMode["TANGENT_MODE_COUNT"] = Curve::TangentMode::TANGENT_MODE_COUNT;
    _module.add("TangentMode", std::move(_TangentMode));
}