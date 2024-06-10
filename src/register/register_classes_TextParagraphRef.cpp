#include "register/register_classes.h"
#include <godot_cpp/classes/text_paragraph.hpp>

using namespace godot;

void register_classes_TextParagraphRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextParagraph>>("TextParagraphRef").constructor<TextParagraph *>();
}