#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>

using namespace godot;

void register_classes_EditorTranslationParserPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorTranslationParserPlugin>("EditorTranslationParserPlugin")
           .constructor<>()
		    .fun<static_cast<void(EditorTranslationParserPlugin::*)(const String &,const TypedArray<String> &,const TypedArray<Array> &)>(&EditorTranslationParserPlugin::_parse_file)>("_parse_file")
		    .fun<static_cast<PackedStringArray(EditorTranslationParserPlugin::*)()const>(&EditorTranslationParserPlugin::_get_recognized_extensions)>("_get_recognized_extensions")
;}