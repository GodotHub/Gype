#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/text_mesh.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<TextMesh>("TextMesh")
			.constructor<>()
			.property<&TextMesh::get_text, &TextMesh::set_text>("text")
			.property<&TextMesh::get_font, &TextMesh::set_font>("font")
			.property<&TextMesh::get_font_size, &TextMesh::set_font_size>("font_size")
			.property<&TextMesh::get_horizontal_alignment, &TextMesh::set_horizontal_alignment>("horizontal_alignment")
			.property<&TextMesh::get_vertical_alignment, &TextMesh::set_vertical_alignment>("vertical_alignment")
			.property<&TextMesh::is_uppercase, &TextMesh::set_uppercase>("uppercase")
			.property<&TextMesh::get_line_spacing, &TextMesh::set_line_spacing>("line_spacing")
			.property<&TextMesh::get_autowrap_mode, &TextMesh::set_autowrap_mode>("autowrap_mode")
			.property<&TextMesh::get_justification_flags, &TextMesh::set_justification_flags>("justification_flags")
			.property<&TextMesh::get_pixel_size, &TextMesh::set_pixel_size>("pixel_size")
			.property<&TextMesh::get_curve_step, &TextMesh::set_curve_step>("curve_step")
			.property<&TextMesh::get_depth, &TextMesh::set_depth>("depth")
			.property<&TextMesh::get_width, &TextMesh::set_width>("width")
			.property<&TextMesh::get_offset, &TextMesh::set_offset>("offset")
			.property<&TextMesh::get_text_direction, &TextMesh::set_text_direction>("text_direction")
			.property<&TextMesh::get_language, &TextMesh::set_language>("language")
			.property<&TextMesh::get_structured_text_bidi_override, &TextMesh::set_structured_text_bidi_override>("structured_text_bidi_override")
			.property<&TextMesh::get_structured_text_bidi_override_options, &TextMesh::set_structured_text_bidi_override_options>("structured_text_bidi_override_options");
}