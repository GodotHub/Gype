#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CodeHighlighter() {
	qjs::Context::Module &_module = _General;
	_module.class_<CodeHighlighter>("CodeHighlighter")
			.constructor<>()
			.property<&CodeHighlighter::get_number_color, &CodeHighlighter::set_number_color>("number_color")
			.property<&CodeHighlighter::get_symbol_color, &CodeHighlighter::set_symbol_color>("symbol_color")
			.property<&CodeHighlighter::get_function_color, &CodeHighlighter::set_function_color>("function_color")
			.property<&CodeHighlighter::get_member_variable_color, &CodeHighlighter::set_member_variable_color>("member_variable_color")
			.property<&CodeHighlighter::get_keyword_colors, &CodeHighlighter::set_keyword_colors>("keyword_colors")
			.property<&CodeHighlighter::get_member_keyword_colors, &CodeHighlighter::set_member_keyword_colors>("member_keyword_colors")
			.property<&CodeHighlighter::get_color_regions, &CodeHighlighter::set_color_regions>("color_regions")
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const Color &)>(&CodeHighlighter::add_keyword_color)>("add_keyword_color")
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_keyword_color)>("remove_keyword_color")
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_keyword_color)>("has_keyword_color")
			.fun<static_cast<Color (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::get_keyword_color)>("get_keyword_color")
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_keyword_colors)>("clear_keyword_colors")
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const Color &)>(&CodeHighlighter::add_member_keyword_color)>("add_member_keyword_color")
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_member_keyword_color)>("remove_member_keyword_color")
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_member_keyword_color)>("has_member_keyword_color")
			.fun<static_cast<Color (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::get_member_keyword_color)>("get_member_keyword_color")
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_member_keyword_colors)>("clear_member_keyword_colors")
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const String &, const Color &, bool)>(&CodeHighlighter::add_color_region)>("add_color_region")
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_color_region)>("remove_color_region")
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_color_region)>("has_color_region")
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_color_regions)>("clear_color_regions");
}