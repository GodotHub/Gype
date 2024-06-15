#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorSyntaxHighlighter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorSyntaxHighlighter>("EditorSyntaxHighlighter")
            .constructor<>()
            .base<SyntaxHighlighter>()
            .fun<static_cast<String(EditorSyntaxHighlighter::*)()const>(&EditorSyntaxHighlighter::_get_name)>("_get_name")
            .fun<static_cast<PackedStringArray(EditorSyntaxHighlighter::*)()const>(&EditorSyntaxHighlighter::_get_supported_languages)>("_get_supported_languages")
;}