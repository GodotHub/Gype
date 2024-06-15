#include <godot_cpp/classes/xrvrs.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rid.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_XRVRS() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<XRVRS>("XRVRS")
            .constructor<>()
            .base<Object>()
            .property<static_cast<double(XRVRS::*)()const>(&XRVRS::get_vrs_min_radius),static_cast<void(XRVRS::*)(double)>(&XRVRS::set_vrs_min_radius)>("vrs_min_radius")
            .property<static_cast<double(XRVRS::*)()const>(&XRVRS::get_vrs_strength),static_cast<void(XRVRS::*)(double)>(&XRVRS::set_vrs_strength)>("vrs_strength")
            .fun<static_cast<RID(XRVRS::*)(const Vector2 &,const PackedVector2Array &)>(&XRVRS::make_vrs_texture)>("make_vrs_texture")
;}