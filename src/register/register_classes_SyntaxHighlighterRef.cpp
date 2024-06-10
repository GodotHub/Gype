#include "register/register_classes.h"
#include <godot_cpp/classes/syntax_highlighter.hpp>

using namespace godot;

void register_classes_SyntaxHighlighterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SyntaxHighlighter>>("SyntaxHighlighterRef").constructor<SyntaxHighlighter *>();
}