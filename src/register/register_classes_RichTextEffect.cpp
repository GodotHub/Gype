#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rich_text_effect.hpp>

using namespace godot;

void register_classes_RichTextEffect() {
    qjs::Context::Module &_module = _General;
    _module.class_<RichTextEffect>("RichTextEffect")
           .constructor<>()
		    .fun<static_cast<bool(RichTextEffect::*)(const Ref<CharFXTransform> &)const>(&RichTextEffect::_process_custom_fx)>("_process_custom_fx")
;}