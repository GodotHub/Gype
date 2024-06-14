
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SpriteBase3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<SpriteBase3D>("SpriteBase3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<bool (SpriteBase3D::*)() const>(&SpriteBase3D::is_centered), static_cast<void (SpriteBase3D::*)(bool)>(&SpriteBase3D::set_centered)>((new std::string("centered"))->c_str())
			.property<static_cast<Vector2 (SpriteBase3D::*)() const>(&SpriteBase3D::get_offset), static_cast<void (SpriteBase3D::*)(const Vector2 &)>(&SpriteBase3D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)() const>(&SpriteBase3D::is_flipped_h), static_cast<void (SpriteBase3D::*)(bool)>(&SpriteBase3D::set_flip_h)>((new std::string("flip_h"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)() const>(&SpriteBase3D::is_flipped_v), static_cast<void (SpriteBase3D::*)(bool)>(&SpriteBase3D::set_flip_v)>((new std::string("flip_v"))->c_str())
			.property<static_cast<Color (SpriteBase3D::*)() const>(&SpriteBase3D::get_modulate), static_cast<void (SpriteBase3D::*)(const Color &)>(&SpriteBase3D::set_modulate)>((new std::string("modulate"))->c_str())
			.property<static_cast<double (SpriteBase3D::*)() const>(&SpriteBase3D::get_pixel_size), static_cast<void (SpriteBase3D::*)(double)>(&SpriteBase3D::set_pixel_size)>((new std::string("pixel_size"))->c_str())
			.property<static_cast<Vector3::Axis (SpriteBase3D::*)() const>(&SpriteBase3D::get_axis), static_cast<void (SpriteBase3D::*)(Vector3::Axis)>(&SpriteBase3D::set_axis)>((new std::string("axis"))->c_str())
			.property<static_cast<BaseMaterial3D::BillboardMode (SpriteBase3D::*)() const>(&SpriteBase3D::get_billboard_mode), static_cast<void (SpriteBase3D::*)(BaseMaterial3D::BillboardMode)>(&SpriteBase3D::set_billboard_mode)>((new std::string("billboard"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)(SpriteBase3D::DrawFlags) const>(&SpriteBase3D::get_draw_flag), static_cast<void (SpriteBase3D::*)(SpriteBase3D::DrawFlags, bool)>(&SpriteBase3D::set_draw_flag)>((new std::string("transparent"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)(SpriteBase3D::DrawFlags) const>(&SpriteBase3D::get_draw_flag), static_cast<void (SpriteBase3D::*)(SpriteBase3D::DrawFlags, bool)>(&SpriteBase3D::set_draw_flag)>((new std::string("shaded"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)(SpriteBase3D::DrawFlags) const>(&SpriteBase3D::get_draw_flag), static_cast<void (SpriteBase3D::*)(SpriteBase3D::DrawFlags, bool)>(&SpriteBase3D::set_draw_flag)>((new std::string("double_sided"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)(SpriteBase3D::DrawFlags) const>(&SpriteBase3D::get_draw_flag), static_cast<void (SpriteBase3D::*)(SpriteBase3D::DrawFlags, bool)>(&SpriteBase3D::set_draw_flag)>((new std::string("no_depth_test"))->c_str())
			.property<static_cast<bool (SpriteBase3D::*)(SpriteBase3D::DrawFlags) const>(&SpriteBase3D::get_draw_flag), static_cast<void (SpriteBase3D::*)(SpriteBase3D::DrawFlags, bool)>(&SpriteBase3D::set_draw_flag)>((new std::string("fixed_size"))->c_str())
			.property<static_cast<SpriteBase3D::AlphaCutMode (SpriteBase3D::*)() const>(&SpriteBase3D::get_alpha_cut_mode), static_cast<void (SpriteBase3D::*)(SpriteBase3D::AlphaCutMode)>(&SpriteBase3D::set_alpha_cut_mode)>((new std::string("alpha_cut"))->c_str())
			.property<static_cast<double (SpriteBase3D::*)() const>(&SpriteBase3D::get_alpha_scissor_threshold), static_cast<void (SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_scissor_threshold)>((new std::string("alpha_scissor_threshold"))->c_str())
			.property<static_cast<double (SpriteBase3D::*)() const>(&SpriteBase3D::get_alpha_hash_scale), static_cast<void (SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_hash_scale)>((new std::string("alpha_hash_scale"))->c_str())
			.property<static_cast<BaseMaterial3D::AlphaAntiAliasing (SpriteBase3D::*)() const>(&SpriteBase3D::get_alpha_antialiasing), static_cast<void (SpriteBase3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&SpriteBase3D::set_alpha_antialiasing)>((new std::string("alpha_antialiasing_mode"))->c_str())
			.property<static_cast<double (SpriteBase3D::*)() const>(&SpriteBase3D::get_alpha_antialiasing_edge), static_cast<void (SpriteBase3D::*)(double)>(&SpriteBase3D::set_alpha_antialiasing_edge)>((new std::string("alpha_antialiasing_edge"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureFilter (SpriteBase3D::*)() const>(&SpriteBase3D::get_texture_filter), static_cast<void (SpriteBase3D::*)(BaseMaterial3D::TextureFilter)>(&SpriteBase3D::set_texture_filter)>((new std::string("texture_filter"))->c_str())
			.property<static_cast<int32_t (SpriteBase3D::*)() const>(&SpriteBase3D::get_render_priority), static_cast<void (SpriteBase3D::*)(int32_t)>(&SpriteBase3D::set_render_priority)>((new std::string("render_priority"))->c_str())
			.fun<static_cast<Rect2 (SpriteBase3D::*)() const>(&SpriteBase3D::get_item_rect)>((new std::string("get_item_rect"))->c_str())
			.fun<static_cast<Ref<TriangleMesh> (SpriteBase3D::*)() const>(&SpriteBase3D::generate_triangle_mesh)>((new std::string("generate_triangle_mesh"))->c_str());
	qjs::Value _DrawFlags = context->newObject();
	_DrawFlags[(new std::string("FLAG_TRANSPARENT"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_TRANSPARENT;
	_DrawFlags[(new std::string("FLAG_SHADED"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_SHADED;
	_DrawFlags[(new std::string("FLAG_DOUBLE_SIDED"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_DOUBLE_SIDED;
	_DrawFlags[(new std::string("FLAG_DISABLE_DEPTH_TEST"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_DISABLE_DEPTH_TEST;
	_DrawFlags[(new std::string("FLAG_FIXED_SIZE"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_FIXED_SIZE;
	_DrawFlags[(new std::string("FLAG_MAX"))->c_str()] = SpriteBase3D::DrawFlags::FLAG_MAX;
	_module.add("DrawFlags", std::move(_DrawFlags));
	qjs::Value _AlphaCutMode = context->newObject();
	_AlphaCutMode[(new std::string("ALPHA_CUT_DISABLED"))->c_str()] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_DISABLED;
	_AlphaCutMode[(new std::string("ALPHA_CUT_DISCARD"))->c_str()] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_DISCARD;
	_AlphaCutMode[(new std::string("ALPHA_CUT_OPAQUE_PREPASS"))->c_str()] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_OPAQUE_PREPASS;
	_AlphaCutMode[(new std::string("ALPHA_CUT_HASH"))->c_str()] = SpriteBase3D::AlphaCutMode::ALPHA_CUT_HASH;
	_module.add("AlphaCutMode", std::move(_AlphaCutMode));
}