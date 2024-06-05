#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSceneFormatImporter() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorSceneFormatImporter>("EditorSceneFormatImporter")
			.constructor<>()
			.fun<static_cast<uint32_t (EditorSceneFormatImporter::*)() const>(&EditorSceneFormatImporter::_get_import_flags)>("_get_import_flags")
			.fun<static_cast<PackedStringArray (EditorSceneFormatImporter::*)() const>(&EditorSceneFormatImporter::_get_extensions)>("_get_extensions")
			.fun<static_cast<Object *(EditorSceneFormatImporter::*)(const String &, uint32_t, const Dictionary &)>(&EditorSceneFormatImporter::_import_scene)>("_import_scene")
			.fun<static_cast<void (EditorSceneFormatImporter::*)(const String &)>(&EditorSceneFormatImporter::_get_import_options)>("_get_import_options")
			.fun<static_cast<Variant (EditorSceneFormatImporter::*)(const String &, bool, const String &) const>(&EditorSceneFormatImporter::_get_option_visibility)>("_get_option_visibility");
}