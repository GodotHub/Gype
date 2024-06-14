#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CodeHighlighter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CodeHighlighter>("CodeHighlighter")
			.constructor<>()
			.base<SyntaxHighlighter>()
			.property<static_cast<Color (CodeHighlighter::*)() const>(&CodeHighlighter::get_number_color), static_cast<void (CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_number_color)>((new std::string("number_color"))->c_str())
			.property<static_cast<Color (CodeHighlighter::*)() const>(&CodeHighlighter::get_symbol_color), static_cast<void (CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_symbol_color)>((new std::string("symbol_color"))->c_str())
			.property<static_cast<Color (CodeHighlighter::*)() const>(&CodeHighlighter::get_function_color), static_cast<void (CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_function_color)>((new std::string("function_color"))->c_str())
			.property<static_cast<Color (CodeHighlighter::*)() const>(&CodeHighlighter::get_member_variable_color), static_cast<void (CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_member_variable_color)>((new std::string("member_variable_color"))->c_str())
			.property<static_cast<Dictionary (CodeHighlighter::*)() const>(&CodeHighlighter::get_keyword_colors), static_cast<void (CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_keyword_colors)>((new std::string("keyword_colors"))->c_str())
			.property<static_cast<Dictionary (CodeHighlighter::*)() const>(&CodeHighlighter::get_member_keyword_colors), static_cast<void (CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_member_keyword_colors)>((new std::string("member_keyword_colors"))->c_str())
			.property<static_cast<Dictionary (CodeHighlighter::*)() const>(&CodeHighlighter::get_color_regions), static_cast<void (CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_color_regions)>((new std::string("color_regions"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const Color &)>(&CodeHighlighter::add_keyword_color)>((new std::string("add_keyword_color"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_keyword_color)>((new std::string("remove_keyword_color"))->c_str())
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_keyword_color)>((new std::string("has_keyword_color"))->c_str())
			.fun<static_cast<Color (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::get_keyword_color)>((new std::string("get_keyword_color"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_keyword_colors)>((new std::string("clear_keyword_colors"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const Color &)>(&CodeHighlighter::add_member_keyword_color)>((new std::string("add_member_keyword_color"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_member_keyword_color)>((new std::string("remove_member_keyword_color"))->c_str())
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_member_keyword_color)>((new std::string("has_member_keyword_color"))->c_str())
			.fun<static_cast<Color (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::get_member_keyword_color)>((new std::string("get_member_keyword_color"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_member_keyword_colors)>((new std::string("clear_member_keyword_colors"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &, const String &, const Color &, bool)>(&CodeHighlighter::add_color_region)>((new std::string("add_color_region"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_color_region)>((new std::string("remove_color_region"))->c_str())
			.fun<static_cast<bool (CodeHighlighter::*)(const String &) const>(&CodeHighlighter::has_color_region)>((new std::string("has_color_region"))->c_str())
			.fun<static_cast<void (CodeHighlighter::*)()>(&CodeHighlighter::clear_color_regions)>((new std::string("clear_color_regions"))->c_str());
}