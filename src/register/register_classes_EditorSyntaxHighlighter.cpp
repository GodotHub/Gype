#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSyntaxHighlighter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSyntaxHighlighter>("EditorSyntaxHighlighter")
			.constructor<>()
			.base<SyntaxHighlighter>()
			.fun<static_cast<String (EditorSyntaxHighlighter::*)() const>(&EditorSyntaxHighlighter::_get_name)>((new std::string("_get_name"))->c_str())
			.fun<static_cast<PackedStringArray (EditorSyntaxHighlighter::*)() const>(&EditorSyntaxHighlighter::_get_supported_languages)>((new std::string("_get_supported_languages"))->c_str());
}