#include "register/register_classes.h"
#include <godot_cpp/classes/code_highlighter.hpp>

using namespace godot;

void register_classes_CodeHighlighterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CodeHighlighter>>("CodeHighlighterRef").constructor<CodeHighlighter *>();
}