#include "register/register_classes.h"
#include <godot_cpp/classes/text_line.hpp>

using namespace godot;

void register_classes_TextLineRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextLine>>("TextLineRef").constructor<TextLine *>();
}