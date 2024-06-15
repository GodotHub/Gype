#include <godot_cpp/classes/label3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Label3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<Label3D>("Label3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_pixel_size),static_cast<void(Label3D::*)(double)>(&Label3D::set_pixel_size)>("pixel_size")
            .property<static_cast<Vector2(Label3D::*)()const>(&Label3D::get_offset),static_cast<void(Label3D::*)(const Vector2 &)>(&Label3D::set_offset)>("offset")
            .property<static_cast<BaseMaterial3D::BillboardMode(Label3D::*)()const>(&Label3D::get_billboard_mode),static_cast<void(Label3D::*)(BaseMaterial3D::BillboardMode)>(&Label3D::set_billboard_mode)>("billboard")
            .property<static_cast<bool(Label3D::*)(Label3D::DrawFlags)const>(&Label3D::get_draw_flag),static_cast<void(Label3D::*)(Label3D::DrawFlags,bool)>(&Label3D::set_draw_flag)>("shaded")
            .property<static_cast<bool(Label3D::*)(Label3D::DrawFlags)const>(&Label3D::get_draw_flag),static_cast<void(Label3D::*)(Label3D::DrawFlags,bool)>(&Label3D::set_draw_flag)>("double_sided")
            .property<static_cast<bool(Label3D::*)(Label3D::DrawFlags)const>(&Label3D::get_draw_flag),static_cast<void(Label3D::*)(Label3D::DrawFlags,bool)>(&Label3D::set_draw_flag)>("no_depth_test")
            .property<static_cast<bool(Label3D::*)(Label3D::DrawFlags)const>(&Label3D::get_draw_flag),static_cast<void(Label3D::*)(Label3D::DrawFlags,bool)>(&Label3D::set_draw_flag)>("fixed_size")
            .property<static_cast<Label3D::AlphaCutMode(Label3D::*)()const>(&Label3D::get_alpha_cut_mode),static_cast<void(Label3D::*)(Label3D::AlphaCutMode)>(&Label3D::set_alpha_cut_mode)>("alpha_cut")
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_alpha_scissor_threshold),static_cast<void(Label3D::*)(double)>(&Label3D::set_alpha_scissor_threshold)>("alpha_scissor_threshold")
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_alpha_hash_scale),static_cast<void(Label3D::*)(double)>(&Label3D::set_alpha_hash_scale)>("alpha_hash_scale")
            .property<static_cast<BaseMaterial3D::AlphaAntiAliasing(Label3D::*)()const>(&Label3D::get_alpha_antialiasing),static_cast<void(Label3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&Label3D::set_alpha_antialiasing)>("alpha_antialiasing_mode")
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_alpha_antialiasing_edge),static_cast<void(Label3D::*)(double)>(&Label3D::set_alpha_antialiasing_edge)>("alpha_antialiasing_edge")
            .property<static_cast<BaseMaterial3D::TextureFilter(Label3D::*)()const>(&Label3D::get_texture_filter),static_cast<void(Label3D::*)(BaseMaterial3D::TextureFilter)>(&Label3D::set_texture_filter)>("texture_filter")
            .property<static_cast<int32_t(Label3D::*)()const>(&Label3D::get_render_priority),static_cast<void(Label3D::*)(int32_t)>(&Label3D::set_render_priority)>("render_priority")
            .property<static_cast<int32_t(Label3D::*)()const>(&Label3D::get_outline_render_priority),static_cast<void(Label3D::*)(int32_t)>(&Label3D::set_outline_render_priority)>("outline_render_priority")
            .property<static_cast<Color(Label3D::*)()const>(&Label3D::get_modulate),static_cast<void(Label3D::*)(const Color &)>(&Label3D::set_modulate)>("modulate")
            .property<static_cast<Color(Label3D::*)()const>(&Label3D::get_outline_modulate),static_cast<void(Label3D::*)(const Color &)>(&Label3D::set_outline_modulate)>("outline_modulate")
            .property<static_cast<String(Label3D::*)()const>(&Label3D::get_text),static_cast<void(Label3D::*)(const String &)>(&Label3D::set_text)>("text")
            .property<static_cast<Ref<Font>(Label3D::*)()const>(&Label3D::get_font),static_cast<void(Label3D::*)(const Ref<Font> &)>(&Label3D::set_font)>("font")
            .property<static_cast<int32_t(Label3D::*)()const>(&Label3D::get_font_size),static_cast<void(Label3D::*)(int32_t)>(&Label3D::set_font_size)>("font_size")
            .property<static_cast<int32_t(Label3D::*)()const>(&Label3D::get_outline_size),static_cast<void(Label3D::*)(int32_t)>(&Label3D::set_outline_size)>("outline_size")
            .property<static_cast<HorizontalAlignment(Label3D::*)()const>(&Label3D::get_horizontal_alignment),static_cast<void(Label3D::*)(HorizontalAlignment)>(&Label3D::set_horizontal_alignment)>("horizontal_alignment")
            .property<static_cast<VerticalAlignment(Label3D::*)()const>(&Label3D::get_vertical_alignment),static_cast<void(Label3D::*)(VerticalAlignment)>(&Label3D::set_vertical_alignment)>("vertical_alignment")
            .property<static_cast<bool(Label3D::*)()const>(&Label3D::is_uppercase),static_cast<void(Label3D::*)(bool)>(&Label3D::set_uppercase)>("uppercase")
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_line_spacing),static_cast<void(Label3D::*)(double)>(&Label3D::set_line_spacing)>("line_spacing")
            .property<static_cast<TextServer::AutowrapMode(Label3D::*)()const>(&Label3D::get_autowrap_mode),static_cast<void(Label3D::*)(TextServer::AutowrapMode)>(&Label3D::set_autowrap_mode)>("autowrap_mode")
            .property<static_cast<BitField<TextServer::JustificationFlag>(Label3D::*)()const>(&Label3D::get_justification_flags),static_cast<void(Label3D::*)(BitField<TextServer::JustificationFlag>)>(&Label3D::set_justification_flags)>("justification_flags")
            .property<static_cast<double(Label3D::*)()const>(&Label3D::get_width),static_cast<void(Label3D::*)(double)>(&Label3D::set_width)>("width")
            .property<static_cast<TextServer::Direction(Label3D::*)()const>(&Label3D::get_text_direction),static_cast<void(Label3D::*)(TextServer::Direction)>(&Label3D::set_text_direction)>("text_direction")
            .property<static_cast<String(Label3D::*)()const>(&Label3D::get_language),static_cast<void(Label3D::*)(const String &)>(&Label3D::set_language)>("language")
            .property<static_cast<TextServer::StructuredTextParser(Label3D::*)()const>(&Label3D::get_structured_text_bidi_override),static_cast<void(Label3D::*)(TextServer::StructuredTextParser)>(&Label3D::set_structured_text_bidi_override)>("structured_text_bidi_override")
            .property<static_cast<Array(Label3D::*)()const>(&Label3D::get_structured_text_bidi_override_options),static_cast<void(Label3D::*)(const Array &)>(&Label3D::set_structured_text_bidi_override_options)>("structured_text_bidi_override_options")
            .fun<static_cast<Ref<TriangleMesh>(Label3D::*)()const>(&Label3D::generate_triangle_mesh)>("generate_triangle_mesh")
;    qjs::Value _DrawFlags = context->newObject();
    _DrawFlags["FLAG_SHADED"] = Label3D::DrawFlags::FLAG_SHADED;
    _DrawFlags["FLAG_DOUBLE_SIDED"] = Label3D::DrawFlags::FLAG_DOUBLE_SIDED;
    _DrawFlags["FLAG_DISABLE_DEPTH_TEST"] = Label3D::DrawFlags::FLAG_DISABLE_DEPTH_TEST;
    _DrawFlags["FLAG_FIXED_SIZE"] = Label3D::DrawFlags::FLAG_FIXED_SIZE;
    _DrawFlags["FLAG_MAX"] = Label3D::DrawFlags::FLAG_MAX;
    _module.add("DrawFlags", std::move(_DrawFlags));
    qjs::Value _AlphaCutMode = context->newObject();
    _AlphaCutMode["ALPHA_CUT_DISABLED"] = Label3D::AlphaCutMode::ALPHA_CUT_DISABLED;
    _AlphaCutMode["ALPHA_CUT_DISCARD"] = Label3D::AlphaCutMode::ALPHA_CUT_DISCARD;
    _AlphaCutMode["ALPHA_CUT_OPAQUE_PREPASS"] = Label3D::AlphaCutMode::ALPHA_CUT_OPAQUE_PREPASS;
    _AlphaCutMode["ALPHA_CUT_HASH"] = Label3D::AlphaCutMode::ALPHA_CUT_HASH;
    _module.add("AlphaCutMode", std::move(_AlphaCutMode));
}