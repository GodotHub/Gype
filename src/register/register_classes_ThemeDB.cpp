#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/theme_db.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ThemeDB() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ThemeDB>("ThemeDB")
			.property<&ThemeDB::get_fallback_base_scale, &ThemeDB::set_fallback_base_scale>("fallback_base_scale")
			.property<&ThemeDB::get_fallback_font, &ThemeDB::set_fallback_font>("fallback_font")
			.property<&ThemeDB::get_fallback_font_size, &ThemeDB::set_fallback_font_size>("fallback_font_size")
			.property<&ThemeDB::get_fallback_icon, &ThemeDB::set_fallback_icon>("fallback_icon")
			.property<&ThemeDB::get_fallback_stylebox, &ThemeDB::set_fallback_stylebox>("fallback_stylebox")
			.fun<static_cast<Ref<Theme> (ThemeDB::*)()>(&ThemeDB::get_default_theme)>("get_default_theme")
			.fun<static_cast<Ref<Theme> (ThemeDB::*)()>(&ThemeDB::get_project_theme)>("get_project_theme");
}