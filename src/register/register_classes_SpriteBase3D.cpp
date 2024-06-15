#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SpriteBase3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<SpriteBase3D>("SpriteBase3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .property<static_cast<bool(SpriteBase3D::*)()const>(&SpriteBase3D::is_centered),static_cast<void(SpriteBase3D::*)(bool)>(&SpriteBase3D::set_centered)>("centered")
            .property<static_cast<Vector2(SpriteBase3D::*)()const>(&SpriteBase3D::get_offset),static_cast<void(SpriteBase3D::*)(const Vector2 &)>(&SpriteBase3D::set_offset)>("offset")
            .property<static_cast<bool(SpriteBase3D::*)()const>(&SpriteBase3D::is_flipped_h),static_cast<void(SpriteBase3D::*)(bool)>(&SpriteBase3D::set_flip_h)>("flip_h")
            .property<static_cast<bool(SpriteBase3D::*)()const>(&SpriteBase3D::is_flipped_v),static_cast<void(SpriteBase3D::*)(bool)>(&SpriteBase3D::set_flip_v)>("flip_v")
            .property<static_cast<Color(SpriteBase3D::*)()const>(&SpriteBase3D::get_modulate),static_cast<void(SpriteBase3D::*)(const Color &)>(&SpriteBase3D::set_modulate)>("modulate")
            .property<static_cast<double(SpriteBase3D::*)()const>(&SpriteBase3D::get_pixel_size),static_cast<void(SpriteBase3D::*)(double)>(&SpriteBase3D::set_pixel_size)>("pixel_size")
            .property<static_cast<Vector3::Axis(SpriteBase3D::*)()const>(&SpriteBase3D::get_axis),static_cast<void(SpriteBase3D::*)(Vector3::Axis)>(&SpriteBase3D::set_axis)>("axis")
            .property<static_cast<BaseMaterial3D::BillboardMode(SpriteBase3D::*)()const>(&SpriteBase3D::get_billboard_mode),static_cast<void(SpriteBase3D::*)(BaseMaterial3D::BillboardMode)>(&SpriteBase3D::set_billboard_mode)>("billboard")
            .property<static_cast<bool(SpriteBase3D::*)(SpriteBase3D::DrawFlags)const>(&SpriteBase3D::get_draw_flag),static_cast<void(SpriteBase3D::*)(SpriteBase3D::DrawFlags,bool)>(&SpriteBase3D::set_draw_flag)>("transparent")
            .property<static_cast<bool(SpriteBase3D::*)(SpriteBase3D::DrawFlags)const>(&SpriteBase3D::get_draw_flag),static_cast<void(SpriteBase3D::*)(SpriteBase3D::DrawFlags,bool)>(&SpriteBase3D::set_draw_flag)>("shaded")
            .property<static_cast<bool(SpriteBase3D::*)(SpriteBase3D::DrawFlags)const>(&SpriteBase3D::get_draw_flag),static_cast<void(SpriteBase3D::*)(SpriteBase3D::DrawFlags,bool)>(&SpriteBase3D::set_draw_flag)>("double_sided")
            .property<static_cast<bool(SpriteBase3D::*)(SpriteBase3D::DrawFlags)const>(&SpriteBase3D::get_draw_flag),static_cast<void(SpriteBase3D::*)(SpriteBase3D::DrawFlags,bool)>(&SpriteBase3D::set_draw_flag)>("no_depth_test")
            .property<static_cast<bool(SpriteBase3D::*)(SpriteBase3D::DrawFlags)const>(&SpriteBase3D::get_draw_flag),static_cast<void(SpriteBase3D::*)(SpriteBase3D::DrawFlags,bool)>(&SpriteBase3D::set_draw_flag)>("fixed_size")
            .property<static_cast<SpriteBase3D::AlphaCutMode(SpriteBase3D::*)()const>(&SpriteBase3D::get_alpha_cut_mode),static_cast<void(SpriteBase3D::*)(SpriteBase3D::AlphaCutMode)>(&SpriteBase3D::set_alpha_cut_mode)>("alpha_cut")
            .property<static_cast<double(SpriteBase3D::*)()const>(&SpriteBase3D::get_alpha_scissor_threshold),static_cast<void(SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_scissor_threshold)>("alpha_scissor_threshold")
            .property<static_cast<double(SpriteBase3D::*)()const>(&SpriteBase3D::get_alpha_hash_scale),static_cast<void(SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_hash_scale)>("alpha_hash_scale")
            .property<static_cast<BaseMaterial3D::AlphaAntiAliasing(SpriteBase3D::*)()const>(&SpriteBase3D::get_alpha_antialiasing),static_cast<void(SpriteBase3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&SpriteBase3D::set_alpha_antialiasing)>("alpha_antialiasing_mode")
            .property<static_cast<double(SpriteBase3D::*)()const>(&SpriteBase3D::get_alpha_antialiasing_edge),static_cast<void(SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_antialiasing_edge)>("alpha_antialiasing_edge")
            .property<static_cast<BaseMaterial3D::TextureFilter(SpriteBase3D::*)()const>(&SpriteBase3D::get_texture_filter),static_cast<void(SpriteBase3D::*)(BaseMaterial3D::TextureFilter)>(&SpriteBase3D::set_texture_filter)>("texture_filter")
            .property<static_cast<int32_t(SpriteBase3D::*)()const>(&SpriteBase3D::get_render_priority),static_cast<void(SpriteBase3D::*)(int32_t)>(&SpriteBase3D::set_render_priority)>("render_priority")
            .fun<static_cast<Rect2(SpriteBase3D::*)()const>(&SpriteBase3D::get_item_rect)>("get_item_rect")
            .fun<static_cast<Ref<TriangleMesh>(SpriteBase3D::*)()const>(&SpriteBase3D::generate_triangle_mesh)>("generate_triangle_mesh")
;    qjs::Value _DrawFlags = context->newObject();
    _DrawFlags["FLAG_TRANSPARENT"] = SpriteBase3D::DrawFlags::FLAG_TRANSPARENT;
    _DrawFlags["FLAG_SHADED"] = SpriteBase3D::DrawFlags::FLAG_SHADED;
    _DrawFlags["FLAG_DOUBLE_SIDED"] = SpriteBase3D::DrawFlags::FLAG_DOUBLE_SIDED;
    _DrawFlags["FLAG_DISABLE_DEPTH_TEST"] = SpriteBase3D::DrawFlags::FLAG_DISABLE_DEPTH_TEST;
    _DrawFlags["FLAG_FIXED_SIZE"] = SpriteBase3D::DrawFlags::FLAG_FIXED_SIZE;
    _DrawFlags["FLAG_MAX"] = SpriteBase3D::DrawFlags::FLAG_MAX;
    _module.add("DrawFlags", std::move(_DrawFlags));
    qjs::Value _AlphaCutMode = context->newObject();
    _AlphaCutMode["ALPHA_CUT_DISABLED"] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_DISABLED;
    _AlphaCutMode["ALPHA_CUT_DISCARD"] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_DISCARD;
    _AlphaCutMode["ALPHA_CUT_OPAQUE_PREPASS"] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_OPAQUE_PREPASS;
    _AlphaCutMode["ALPHA_CUT_HASH"] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_HASH;
    _module.add("AlphaCutMode", std::move(_AlphaCutMode));
}