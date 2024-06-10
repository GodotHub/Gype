#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorTranslationParserPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorTranslationParserPlugin>("EditorTranslationParserPlugin")
			.constructor<>()
			.fun<static_cast<void (EditorTranslationParserPlugin::*)(const String &, const TypedArray<String> &, const TypedArray<Array> &)>(&EditorTranslationParserPlugin::_parse_file)>("_parse_file")
			.fun<static_cast<PackedStringArray (EditorTranslationParserPlugin::*)() const>(&EditorTranslationParserPlugin::_get_recognized_extensions)>("_get_recognized_extensions");
}