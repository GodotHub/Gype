
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/label3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Label3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Label3D>("Label3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_pixel_size), static_cast<void (Label3D::*)(double)>(&Label3D::set_pixel_size)>((new std::string("pixel_size"))->c_str())
			.property<static_cast<Vector2 (Label3D::*)() const>(&Label3D::get_offset), static_cast<void (Label3D::*)(const Vector2 &)>(&Label3D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<BaseMaterial3D::BillboardMode (Label3D::*)() const>(&Label3D::get_billboard_mode), static_cast<void (Label3D::*)(BaseMaterial3D::BillboardMode)>(&Label3D::set_billboard_mode)>((new std::string("billboard"))->c_str())
			.property<static_cast<bool (Label3D::*)(Label3D::DrawFlags) const>(&Label3D::get_draw_flag), static_cast<void (Label3D::*)(Label3D::DrawFlags, bool)>(&Label3D::set_draw_flag)>((new std::string("shaded"))->c_str())
			.property<static_cast<bool (Label3D::*)(Label3D::DrawFlags) const>(&Label3D::get_draw_flag), static_cast<void (Label3D::*)(Label3D::DrawFlags, bool)>(&Label3D::set_draw_flag)>((new std::string("double_sided"))->c_str())
			.property<static_cast<bool (Label3D::*)(Label3D::DrawFlags) const>(&Label3D::get_draw_flag), static_cast<void (Label3D::*)(Label3D::DrawFlags, bool)>(&Label3D::set_draw_flag)>((new std::string("no_depth_test"))->c_str())
			.property<static_cast<bool (Label3D::*)(Label3D::DrawFlags) const>(&Label3D::get_draw_flag), static_cast<void (Label3D::*)(Label3D::DrawFlags, bool)>(&Label3D::set_draw_flag)>((new std::string("fixed_size"))->c_str())
			.property<static_cast<Label3D::AlphaCutMode (Label3D::*)() const>(&Label3D::get_alpha_cut_mode), static_cast<void (Label3D::*)(Label3D::AlphaCutMode)>(&Label3D::set_alpha_cut_mode)>((new std::string("alpha_cut"))->c_str())
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_alpha_scissor_threshold), static_cast<void (Label3D::*)(double)>(&Label3D::set_alpha_scissor_threshold)>((new std::string("alpha_scissor_threshold"))->c_str())
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_alpha_hash_scale), static_cast<void (Label3D::*)(double)>(&Label3D::set_alpha_hash_scale)>((new std::string("alpha_hash_scale"))->c_str())
			.property<static_cast<BaseMaterial3D::AlphaAntiAliasing (Label3D::*)() const>(&Label3D::get_alpha_antialiasing), static_cast<void (Label3D::*)(BaseMaterial3D::AlphaAntiAliasing)>(&Label3D::set_alpha_antialiasing)>((new std::string("alpha_antialiasing_mode"))->c_str())
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_alpha_antialiasing_edge), static_cast<void (Label3D::*)(double)>(&Label3D::set_alpha_antialiasing_edge)>((new std::string("alpha_antialiasing_edge"))->c_str())
			.property<static_cast<BaseMaterial3D::TextureFilter (Label3D::*)() const>(&Label3D::get_texture_filter), static_cast<void (Label3D::*)(BaseMaterial3D::TextureFilter)>(&Label3D::set_texture_filter)>((new std::string("texture_filter"))->c_str())
			.property<static_cast<int32_t (Label3D::*)() const>(&Label3D::get_render_priority), static_cast<void (Label3D::*)(int32_t)>(&Label3D::set_render_priority)>((new std::string("render_priority"))->c_str())
			.property<static_cast<int32_t (Label3D::*)() const>(&Label3D::get_outline_render_priority), static_cast<void (Label3D::*)(int32_t)>(&Label3D::set_outline_render_priority)>((new std::string("outline_render_priority"))->c_str())
			.property<static_cast<Color (Label3D::*)() const>(&Label3D::get_modulate), static_cast<void (Label3D::*)(const Color &)>(&Label3D::set_modulate)>((new std::string("modulate"))->c_str())
			.property<static_cast<Color (Label3D::*)() const>(&Label3D::get_outline_modulate), static_cast<void (Label3D::*)(const Color &)>(&Label3D::set_outline_modulate)>((new std::string("outline_modulate"))->c_str())
			.property<static_cast<String (Label3D::*)() const>(&Label3D::get_text), static_cast<void (Label3D::*)(const String &)>(&Label3D::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<Ref<Font> (Label3D::*)() const>(&Label3D::get_font), static_cast<void (Label3D::*)(const Ref<Font> &)>(&Label3D::set_font)>((new std::string("font"))->c_str())
			.property<static_cast<int32_t (Label3D::*)() const>(&Label3D::get_font_size), static_cast<void (Label3D::*)(int32_t)>(&Label3D::set_font_size)>((new std::string("font_size"))->c_str())
			.property<static_cast<int32_t (Label3D::*)() const>(&Label3D::get_outline_size), static_cast<void (Label3D::*)(int32_t)>(&Label3D::set_outline_size)>((new std::string("outline_size"))->c_str())
			.property<static_cast<HorizontalAlignment (Label3D::*)() const>(&Label3D::get_horizontal_alignment), static_cast<void (Label3D::*)(HorizontalAlignment)>(&Label3D::set_horizontal_alignment)>((new std::string("horizontal_alignment"))->c_str())
			.property<static_cast<VerticalAlignment (Label3D::*)() const>(&Label3D::get_vertical_alignment), static_cast<void (Label3D::*)(VerticalAlignment)>(&Label3D::set_vertical_alignment)>((new std::string("vertical_alignment"))->c_str())
			.property<static_cast<bool (Label3D::*)() const>(&Label3D::is_uppercase), static_cast<void (Label3D::*)(bool)>(&Label3D::set_uppercase)>((new std::string("uppercase"))->c_str())
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_line_spacing), static_cast<void (Label3D::*)(double)>(&Label3D::set_line_spacing)>((new std::string("line_spacing"))->c_str())
			.property<static_cast<TextServer::AutowrapMode (Label3D::*)() const>(&Label3D::get_autowrap_mode), static_cast<void (Label3D::*)(TextServer::AutowrapMode)>(&Label3D::set_autowrap_mode)>((new std::string("autowrap_mode"))->c_str())
			.property<static_cast<BitField<TextServer::JustificationFlag> (Label3D::*)() const>(&Label3D::get_justification_flags), static_cast<void (Label3D::*)(BitField<TextServer::JustificationFlag>)>(&Label3D::set_justification_flags)>((new std::string("justification_flags"))->c_str())
			.property<static_cast<double (Label3D::*)() const>(&Label3D::get_width), static_cast<void (Label3D::*)(double)>(&Label3D::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<TextServer::Direction (Label3D::*)() const>(&Label3D::get_text_direction), static_cast<void (Label3D::*)(TextServer::Direction)>(&Label3D::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (Label3D::*)() const>(&Label3D::get_language), static_cast<void (Label3D::*)(const String &)>(&Label3D::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (Label3D::*)() const>(&Label3D::get_structured_text_bidi_override), static_cast<void (Label3D::*)(TextServer::StructuredTextParser)>(&Label3D::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (Label3D::*)() const>(&Label3D::get_structured_text_bidi_override_options), static_cast<void (Label3D::*)(const Array &)>(&Label3D::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str())
			.fun<static_cast<Ref<TriangleMesh> (Label3D::*)() const>(&Label3D::generate_triangle_mesh)>((new std::string("generate_triangle_mesh"))->c_str());
	qjs::Value _DrawFlags = context->newObject();
	_DrawFlags[(new std::string("FLAG_SHADED"))->c_str()] = Label3D::DrawFlags::FLAG_SHADED;
	_DrawFlags[(new std::string("FLAG_DOUBLE_SIDED"))->c_str()] = Label3D::DrawFlags::FLAG_DOUBLE_SIDED;
	_DrawFlags[(new std::string("FLAG_DISABLE_DEPTH_TEST"))->c_str()] = Label3D::DrawFlags::FLAG_DISABLE_DEPTH_TEST;
	_DrawFlags[(new std::string("FLAG_FIXED_SIZE"))->c_str()] = Label3D::DrawFlags::FLAG_FIXED_SIZE;
	_DrawFlags[(new std::string("FLAG_MAX"))->c_str()] = Label3D::DrawFlags::FLAG_MAX;
	_module.add("DrawFlags", std::move(_DrawFlags));
	qjs::Value _AlphaCutMode = context->newObject();
	_AlphaCutMode[(new std::string("ALPHA_CUT_DISABLED"))->c_str()] = Label3D::AlphaCutMode::ALPHA_CUT_DISABLED;
	_AlphaCutMode[(new std::string("ALPHA_CUT_DISCARD"))->c_str()] = Label3D::AlphaCutMode::ALPHA_CUT_DISCARD;
	_AlphaCutMode[(new std::string("ALPHA_CUT_OPAQUE_PREPASS"))->c_str()] = Label3D::AlphaCutMode::ALPHA_CUT_OPAQUE_PREPASS;
	_AlphaCutMode[(new std::string("ALPHA_CUT_HASH"))->c_str()] = Label3D::AlphaCutMode::ALPHA_CUT_HASH;
	_module.add("AlphaCutMode", std::move(_AlphaCutMode));
}