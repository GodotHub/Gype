#include <godot_cpp/classes/char_fx_transform.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CharFXTransform() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CharFXTransform>("CharFXTransform")
			.constructor<>()
			.property<&CharFXTransform::get_transform, &CharFXTransform::set_transform>("transform")
			.property<&CharFXTransform::get_range, &CharFXTransform::set_range>("range")
			.property<&CharFXTransform::get_elapsed_time, &CharFXTransform::set_elapsed_time>("elapsed_time")
			.property<&CharFXTransform::is_visible, &CharFXTransform::set_visibility>("visible")
			.property<&CharFXTransform::is_outline, &CharFXTransform::set_outline>("outline")
			.property<&CharFXTransform::get_offset, &CharFXTransform::set_offset>("offset")
			.property<&CharFXTransform::get_color, &CharFXTransform::set_color>("color")
			.property<&CharFXTransform::get_environment, &CharFXTransform::set_environment>("env")
			.property<&CharFXTransform::get_glyph_index, &CharFXTransform::set_glyph_index>("glyph_index")
			.property<&CharFXTransform::get_glyph_count, &CharFXTransform::set_glyph_count>("glyph_count")
			.property<&CharFXTransform::get_glyph_flags, &CharFXTransform::set_glyph_flags>("glyph_flags")
			.property<&CharFXTransform::get_relative_index, &CharFXTransform::set_relative_index>("relative_index")
			.property<&CharFXTransform::get_font, &CharFXTransform::set_font>("font");
}