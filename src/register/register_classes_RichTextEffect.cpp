#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RichTextEffect() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<RichTextEffect>("RichTextEffect")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<bool (RichTextEffect::*)(const Ref<CharFXTransform> &) const>(&RichTextEffect::_process_custom_fx)>((new std::string("_process_custom_fx"))->c_str());
}