#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CodeHighlighter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CodeHighlighter>("CodeHighlighter")
            .constructor<>()
            .base<SyntaxHighlighter>()
            .property<static_cast<Color(CodeHighlighter::*)()const>(&CodeHighlighter::get_number_color),static_cast<void(CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_number_color)>("number_color")
            .property<static_cast<Color(CodeHighlighter::*)()const>(&CodeHighlighter::get_symbol_color),static_cast<void(CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_symbol_color)>("symbol_color")
            .property<static_cast<Color(CodeHighlighter::*)()const>(&CodeHighlighter::get_function_color),static_cast<void(CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_function_color)>("function_color")
            .property<static_cast<Color(CodeHighlighter::*)()const>(&CodeHighlighter::get_member_variable_color),static_cast<void(CodeHighlighter::*)(const Color &)>(&CodeHighlighter::set_member_variable_color)>("member_variable_color")
            .property<static_cast<Dictionary(CodeHighlighter::*)()const>(&CodeHighlighter::get_keyword_colors),static_cast<void(CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_keyword_colors)>("keyword_colors")
            .property<static_cast<Dictionary(CodeHighlighter::*)()const>(&CodeHighlighter::get_member_keyword_colors),static_cast<void(CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_member_keyword_colors)>("member_keyword_colors")
            .property<static_cast<Dictionary(CodeHighlighter::*)()const>(&CodeHighlighter::get_color_regions),static_cast<void(CodeHighlighter::*)(const Dictionary &)>(&CodeHighlighter::set_color_regions)>("color_regions")
            .fun<static_cast<void(CodeHighlighter::*)(const String &,const Color &)>(&CodeHighlighter::add_keyword_color)>("add_keyword_color")
            .fun<static_cast<void(CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_keyword_color)>("remove_keyword_color")
            .fun<static_cast<bool(CodeHighlighter::*)(const String &)const>(&CodeHighlighter::has_keyword_color)>("has_keyword_color")
            .fun<static_cast<Color(CodeHighlighter::*)(const String &)const>(&CodeHighlighter::get_keyword_color)>("get_keyword_color")
            .fun<static_cast<void(CodeHighlighter::*)()>(&CodeHighlighter::clear_keyword_colors)>("clear_keyword_colors")
            .fun<static_cast<void(CodeHighlighter::*)(const String &,const Color &)>(&CodeHighlighter::add_member_keyword_color)>("add_member_keyword_color")
            .fun<static_cast<void(CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_member_keyword_color)>("remove_member_keyword_color")
            .fun<static_cast<bool(CodeHighlighter::*)(const String &)const>(&CodeHighlighter::has_member_keyword_color)>("has_member_keyword_color")
            .fun<static_cast<Color(CodeHighlighter::*)(const String &)const>(&CodeHighlighter::get_member_keyword_color)>("get_member_keyword_color")
            .fun<static_cast<void(CodeHighlighter::*)()>(&CodeHighlighter::clear_member_keyword_colors)>("clear_member_keyword_colors")
            .fun<static_cast<void(CodeHighlighter::*)(const String &,const String &,const Color &,bool)>(&CodeHighlighter::add_color_region)>("add_color_region")
            .fun<static_cast<void(CodeHighlighter::*)(const String &)>(&CodeHighlighter::remove_color_region)>("remove_color_region")
            .fun<static_cast<bool(CodeHighlighter::*)(const String &)const>(&CodeHighlighter::has_color_region)>("has_color_region")
            .fun<static_cast<void(CodeHighlighter::*)()>(&CodeHighlighter::clear_color_regions)>("clear_color_regions")
;}