#include "register/register_classes.h"
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>

using namespace godot;

void register_classes_EditorTranslationParserPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorTranslationParserPlugin>>("EditorTranslationParserPluginRef").constructor<EditorTranslationParserPlugin *>();
}