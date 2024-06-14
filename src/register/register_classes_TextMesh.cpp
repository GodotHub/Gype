
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/text_mesh.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextMesh>("TextMesh")
			.constructor<>()
			.base<PrimitiveMesh>()
			.property<static_cast<String (TextMesh::*)() const>(&TextMesh::get_text), static_cast<void (TextMesh::*)(const String &)>(&TextMesh::set_text)>((new std::string("text"))->c_str())
			.property<static_cast<Ref<Font> (TextMesh::*)() const>(&TextMesh::get_font), static_cast<void (TextMesh::*)(const Ref<Font> &)>(&TextMesh::set_font)>((new std::string("font"))->c_str())
			.property<static_cast<int32_t (TextMesh::*)() const>(&TextMesh::get_font_size), static_cast<void (TextMesh::*)(int32_t)>(&TextMesh::set_font_size)>((new std::string("font_size"))->c_str())
			.property<static_cast<HorizontalAlignment (TextMesh::*)() const>(&TextMesh::get_horizontal_alignment), static_cast<void (TextMesh::*)(HorizontalAlignment)>(&TextMesh::set_horizontal_alignment)>((new std::string("horizontal_alignment"))->c_str())
			.property<static_cast<VerticalAlignment (TextMesh::*)() const>(&TextMesh::get_vertical_alignment), static_cast<void (TextMesh::*)(VerticalAlignment)>(&TextMesh::set_vertical_alignment)>((new std::string("vertical_alignment"))->c_str())
			.property<static_cast<bool (TextMesh::*)() const>(&TextMesh::is_uppercase), static_cast<void (TextMesh::*)(bool)>(&TextMesh::set_uppercase)>((new std::string("uppercase"))->c_str())
			.property<static_cast<double (TextMesh::*)() const>(&TextMesh::get_line_spacing), static_cast<void (TextMesh::*)(double)>(&TextMesh::set_line_spacing)>((new std::string("line_spacing"))->c_str())
			.property<static_cast<TextServer::AutowrapMode (TextMesh::*)() const>(&TextMesh::get_autowrap_mode), static_cast<void (TextMesh::*)(TextServer::AutowrapMode)>(&TextMesh::set_autowrap_mode)>((new std::string("autowrap_mode"))->c_str())
			.property<static_cast<BitField<TextServer::JustificationFlag> (TextMesh::*)() const>(&TextMesh::get_justification_flags), static_cast<void (TextMesh::*)(BitField<TextServer::JustificationFlag>)>(&TextMesh::set_justification_flags)>((new std::string("justification_flags"))->c_str())
			.property<static_cast<double (TextMesh::*)() const>(&TextMesh::get_pixel_size), static_cast<void (TextMesh::*)(double)>(&TextMesh::set_pixel_size)>((new std::string("pixel_size"))->c_str())
			.property<static_cast<double (TextMesh::*)() const>(&TextMesh::get_curve_step), static_cast<void (TextMesh::*)(double)>(&TextMesh::set_curve_step)>((new std::string("curve_step"))->c_str())
			.property<static_cast<double (TextMesh::*)() const>(&TextMesh::get_depth), static_cast<void (TextMesh::*)(double)>(&TextMesh::set_depth)>((new std::string("depth"))->c_str())
			.property<static_cast<double (TextMesh::*)() const>(&TextMesh::get_width), static_cast<void (TextMesh::*)(double)>(&TextMesh::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<Vector2 (TextMesh::*)() const>(&TextMesh::get_offset), static_cast<void (TextMesh::*)(const Vector2 &)>(&TextMesh::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<TextServer::Direction (TextMesh::*)() const>(&TextMesh::get_text_direction), static_cast<void (TextMesh::*)(TextServer::Direction)>(&TextMesh::set_text_direction)>((new std::string("text_direction"))->c_str())
			.property<static_cast<String (TextMesh::*)() const>(&TextMesh::get_language), static_cast<void (TextMesh::*)(const String &)>(&TextMesh::set_language)>((new std::string("language"))->c_str())
			.property<static_cast<TextServer::StructuredTextParser (TextMesh::*)() const>(&TextMesh::get_structured_text_bidi_override), static_cast<void (TextMesh::*)(TextServer::StructuredTextParser)>(&TextMesh::set_structured_text_bidi_override)>((new std::string("structured_text_bidi_override"))->c_str())
			.property<static_cast<Array (TextMesh::*)() const>(&TextMesh::get_structured_text_bidi_override_options), static_cast<void (TextMesh::*)(const Array &)>(&TextMesh::set_structured_text_bidi_override_options)>((new std::string("structured_text_bidi_override_options"))->c_str());
}