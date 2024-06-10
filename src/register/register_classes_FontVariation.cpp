#include <godot_cpp/classes/font_variation.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FontVariation() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FontVariation>("FontVariation")
			.constructor<>()
			.property<&FontVariation::get_base_font, &FontVariation::set_base_font>("base_font")
			.property<&FontVariation::get_variation_opentype, &FontVariation::set_variation_opentype>("variation_opentype")
			.property<&FontVariation::get_variation_face_index, &FontVariation::set_variation_face_index>("variation_face_index")
			.property<&FontVariation::get_variation_embolden, &FontVariation::set_variation_embolden>("variation_embolden")
			.property<&FontVariation::get_variation_transform, &FontVariation::set_variation_transform>("variation_transform")
			.property<&FontVariation::get_opentype_features, &FontVariation::set_opentype_features>("opentype_features")
			.property<&FontVariation::get_spacing, &FontVariation::set_spacing>("spacing_glyph")
			.property<&FontVariation::get_spacing, &FontVariation::set_spacing>("spacing_space")
			.property<&FontVariation::get_spacing, &FontVariation::set_spacing>("spacing_top")
			.property<&FontVariation::get_spacing, &FontVariation::set_spacing>("spacing_bottom");
}