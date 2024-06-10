#include "register/register_classes.h"
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>

using namespace godot;

void register_classes_EditorSyntaxHighlighterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorSyntaxHighlighter>>("EditorSyntaxHighlighterRef").constructor<EditorSyntaxHighlighter *>();
}