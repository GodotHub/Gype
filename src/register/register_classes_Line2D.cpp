#include <godot_cpp/classes/line2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Line2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Line2D>("Line2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<PackedVector2Array(Line2D::*)()const>(&Line2D::get_points),static_cast<void(Line2D::*)(const PackedVector2Array &)>(&Line2D::set_points)>("points")
            .property<static_cast<bool(Line2D::*)()const>(&Line2D::is_closed),static_cast<void(Line2D::*)(bool)>(&Line2D::set_closed)>("closed")
            .property<static_cast<double(Line2D::*)()const>(&Line2D::get_width),static_cast<void(Line2D::*)(double)>(&Line2D::set_width)>("width")
            .property<static_cast<Ref<Curve>(Line2D::*)()const>(&Line2D::get_curve),static_cast<void(Line2D::*)(const Ref<Curve> &)>(&Line2D::set_curve)>("width_curve")
            .property<static_cast<Color(Line2D::*)()const>(&Line2D::get_default_color),static_cast<void(Line2D::*)(const Color &)>(&Line2D::set_default_color)>("default_color")
            .property<static_cast<Ref<Gradient>(Line2D::*)()const>(&Line2D::get_gradient),static_cast<void(Line2D::*)(const Ref<Gradient> &)>(&Line2D::set_gradient)>("gradient")
            .property<static_cast<Ref<Texture2D>(Line2D::*)()const>(&Line2D::get_texture),static_cast<void(Line2D::*)(const Ref<Texture2D> &)>(&Line2D::set_texture)>("texture")
            .property<static_cast<Line2D::LineTextureMode(Line2D::*)()const>(&Line2D::get_texture_mode),static_cast<void(Line2D::*)(Line2D::LineTextureMode)>(&Line2D::set_texture_mode)>("texture_mode")
            .property<static_cast<Line2D::LineJointMode(Line2D::*)()const>(&Line2D::get_joint_mode),static_cast<void(Line2D::*)(Line2D::LineJointMode)>(&Line2D::set_joint_mode)>("joint_mode")
            .property<static_cast<Line2D::LineCapMode(Line2D::*)()const>(&Line2D::get_begin_cap_mode),static_cast<void(Line2D::*)(Line2D::LineCapMode)>(&Line2D::set_begin_cap_mode)>("begin_cap_mode")
            .property<static_cast<Line2D::LineCapMode(Line2D::*)()const>(&Line2D::get_end_cap_mode),static_cast<void(Line2D::*)(Line2D::LineCapMode)>(&Line2D::set_end_cap_mode)>("end_cap_mode")
            .property<static_cast<double(Line2D::*)()const>(&Line2D::get_sharp_limit),static_cast<void(Line2D::*)(double)>(&Line2D::set_sharp_limit)>("sharp_limit")
            .property<static_cast<int32_t(Line2D::*)()const>(&Line2D::get_round_precision),static_cast<void(Line2D::*)(int32_t)>(&Line2D::set_round_precision)>("round_precision")
            .property<static_cast<bool(Line2D::*)()const>(&Line2D::get_antialiased),static_cast<void(Line2D::*)(bool)>(&Line2D::set_antialiased)>("antialiased")
            .fun<static_cast<void(Line2D::*)(int32_t,const Vector2 &)>(&Line2D::set_point_position)>("set_point_position")
            .fun<static_cast<Vector2(Line2D::*)(int32_t)const>(&Line2D::get_point_position)>("get_point_position")
            .fun<static_cast<int32_t(Line2D::*)()const>(&Line2D::get_point_count)>("get_point_count")
            .fun<static_cast<void(Line2D::*)(const Vector2 &,int32_t)>(&Line2D::add_point)>("add_point")
            .fun<static_cast<void(Line2D::*)(int32_t)>(&Line2D::remove_point)>("remove_point")
            .fun<static_cast<void(Line2D::*)()>(&Line2D::clear_points)>("clear_points")
;    qjs::Value _LineJointMode = context->newObject();
    _LineJointMode["LINE_JOINT_SHARP"] = Line2D::LineJointMode::LINE_JOINT_SHARP;
    _LineJointMode["LINE_JOINT_BEVEL"] = Line2D::LineJointMode::LINE_JOINT_BEVEL;
    _LineJointMode["LINE_JOINT_ROUND"] = Line2D::LineJointMode::LINE_JOINT_ROUND;
    _module.add("LineJointMode", std::move(_LineJointMode));
    qjs::Value _LineCapMode = context->newObject();
    _LineCapMode["LINE_CAP_NONE"] = Line2D::LineCapMode::LINE_CAP_NONE;
    _LineCapMode["LINE_CAP_BOX"] = Line2D::LineCapMode::LINE_CAP_BOX;
    _LineCapMode["LINE_CAP_ROUND"] = Line2D::LineCapMode::LINE_CAP_ROUND;
    _module.add("LineCapMode", std::move(_LineCapMode));
    qjs::Value _LineTextureMode = context->newObject();
    _LineTextureMode["LINE_TEXTURE_NONE"] = Line2D::LineTextureMode::LINE_TEXTURE_NONE;
    _LineTextureMode["LINE_TEXTURE_TILE"] = Line2D::LineTextureMode::LINE_TEXTURE_TILE;
    _LineTextureMode["LINE_TEXTURE_STRETCH"] = Line2D::LineTextureMode::LINE_TEXTURE_STRETCH;
    _module.add("LineTextureMode", std::move(_LineTextureMode));
}