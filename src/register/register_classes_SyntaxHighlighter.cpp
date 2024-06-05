#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/dictionary.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SyntaxHighlighter() {
	qjs::Context::Module &_module = _General;
	_module.class_<SyntaxHighlighter>("SyntaxHighlighter")
			.constructor<>()
			.fun<static_cast<Dictionary (SyntaxHighlighter::*)(int32_t) const>(&SyntaxHighlighter::_get_line_syntax_highlighting)>("_get_line_syntax_highlighting")
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::_clear_highlighting_cache)>("_clear_highlighting_cache")
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::_update_cache)>("_update_cache")
			.fun<static_cast<Dictionary (SyntaxHighlighter::*)(int32_t)>(&SyntaxHighlighter::get_line_syntax_highlighting)>("get_line_syntax_highlighting")
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::update_cache)>("update_cache")
			.fun<static_cast<void (SyntaxHighlighter::*)()>(&SyntaxHighlighter::clear_highlighting_cache)>("clear_highlighting_cache")
			.fun<static_cast<TextEdit *(SyntaxHighlighter::*)() const>(&SyntaxHighlighter::get_text_edit)>("get_text_edit");
}