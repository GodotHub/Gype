#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>

using namespace godot;

void register_classes_EditorSyntaxHighlighter() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorSyntaxHighlighter>("EditorSyntaxHighlighter")
           .constructor<>()
		    .fun<static_cast<String(EditorSyntaxHighlighter::*)()const>(&EditorSyntaxHighlighter::_get_name)>("_get_name")
		    .fun<static_cast<PackedStringArray(EditorSyntaxHighlighter::*)()const>(&EditorSyntaxHighlighter::_get_supported_languages)>("_get_supported_languages")
;}