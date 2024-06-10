#include "register/register_classes.h"
#include <godot_cpp/classes/rich_text_effect.hpp>

using namespace godot;

void register_classes_RichTextEffectRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RichTextEffect>>("RichTextEffectRef").constructor<RichTextEffect *>();
}