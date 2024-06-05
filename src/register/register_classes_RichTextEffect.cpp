#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_RichTextEffect() {
	qjs::Context::Module &_module = _General;
	_module.class_<RichTextEffect>("RichTextEffect")
			.constructor<>()
			.fun<static_cast<bool (RichTextEffect::*)(const Ref<CharFXTransform> &) const>(&RichTextEffect::_process_custom_fx)>("_process_custom_fx");
}