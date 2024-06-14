
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SyntaxHighlighter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SyntaxHighlighter>("SyntaxHighlighter")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Dictionary (SyntaxHighlighter::*)(int32_t) const>(&SyntaxHighlighter::_get_line_syntax_highlighting)>((new std::string("_get_line_syntax_highlighting"))->c_str())
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::_clear_highlighting_cache)>((new std::string("_clear_highlighting_cache"))->c_str())
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::_update_cache)>((new std::string("_update_cache"))->c_str())
			.fun<static_cast<Dictionary (SyntaxHighlighter::*)(int32_t)>(&SyntaxHighlighter::get_line_syntax_highlighting)>((new std::string("get_line_syntax_highlighting"))->c_str())
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::update_cache)>((new std::string("update_cache"))->c_str())
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::clear_highlighting_cache)>((new std::string("clear_highlighting_cache"))->c_str())
			.fun<static_cast<TextEdit *(SyntaxHighlighter::*)() const>(&SyntaxHighlighter::get_text_edit)>((new std::string("get_text_edit"))->c_str());
}