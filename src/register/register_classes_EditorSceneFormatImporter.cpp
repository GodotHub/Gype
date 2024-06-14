
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSceneFormatImporter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSceneFormatImporter>("EditorSceneFormatImporter")
			.constructor<>()
			.base<RefCounted>()
			.static_fun<&EditorSceneFormatImporter::IMPORT_SCENE>((new std::string("IMPORT_SCENE"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_ANIMATION>((new std::string("IMPORT_ANIMATION"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_FAIL_ON_MISSING_DEPENDENCIES>((new std::string("IMPORT_FAIL_ON_MISSING_DEPENDENCIES"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_GENERATE_TANGENT_ARRAYS>((new std::string("IMPORT_GENERATE_TANGENT_ARRAYS"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_USE_NAMED_SKIN_BINDS>((new std::string("IMPORT_USE_NAMED_SKIN_BINDS"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_DISCARD_MESHES_AND_MATERIALS>((new std::string("IMPORT_DISCARD_MESHES_AND_MATERIALS"))->c_str())
			.static_fun<&EditorSceneFormatImporter::IMPORT_FORCE_DISABLE_MESH_COMPRESSION>((new std::string("IMPORT_FORCE_DISABLE_MESH_COMPRESSION"))->c_str())
			.fun<static_cast<uint32_t (EditorSceneFormatImporter::*)() const>(&EditorSceneFormatImporter::_get_import_flags)>((new std::string("_get_import_flags"))->c_str())
			.fun<static_cast<PackedStringArray (EditorSceneFormatImporter::*)() const>(&EditorSceneFormatImporter::_get_extensions)>((new std::string("_get_extensions"))->c_str())
			.fun<static_cast<Object *(EditorSceneFormatImporter::*)(const String &, uint32_t, const Dictionary &)>(&EditorSceneFormatImporter::_import_scene)>((new std::string("_import_scene"))->c_str())
			.fun<static_cast<void (EditorSceneFormatImporter::*)(const String &)>(&EditorSceneFormatImporter::_get_import_options)>((new std::string("_get_import_options"))->c_str())
			.fun<static_cast<Variant (EditorSceneFormatImporter::*)(const String &, bool, const String &) const>(&EditorSceneFormatImporter::_get_option_visibility)>((new std::string("_get_option_visibility"))->c_str());
}