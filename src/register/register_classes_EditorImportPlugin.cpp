
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorImportPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorImportPlugin>("EditorImportPlugin")
			.constructor<>()
			.base<ResourceImporter>()
			.fun<static_cast<String (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_importer_name)>((new std::string("_get_importer_name"))->c_str())
			.fun<static_cast<String (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_visible_name)>((new std::string("_get_visible_name"))->c_str())
			.fun<static_cast<int32_t (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_preset_count)>((new std::string("_get_preset_count"))->c_str())
			.fun<static_cast<String (EditorImportPlugin::*)(int32_t) const>(&EditorImportPlugin::_get_preset_name)>((new std::string("_get_preset_name"))->c_str())
			.fun<static_cast<PackedStringArray (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_recognized_extensions)>((new std::string("_get_recognized_extensions"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorImportPlugin::*)(const String &, int32_t) const>(&EditorImportPlugin::_get_import_options)>((new std::string("_get_import_options"))->c_str())
			.fun<static_cast<String (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_save_extension)>((new std::string("_get_save_extension"))->c_str())
			.fun<static_cast<String (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_resource_type)>((new std::string("_get_resource_type"))->c_str())
			.fun<static_cast<double (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_priority)>((new std::string("_get_priority"))->c_str())
			.fun<static_cast<int32_t (EditorImportPlugin::*)() const>(&EditorImportPlugin::_get_import_order)>((new std::string("_get_import_order"))->c_str())
			.fun<static_cast<bool (EditorImportPlugin::*)(const String &, const StringName &, const Dictionary &) const>(&EditorImportPlugin::_get_option_visibility)>((new std::string("_get_option_visibility"))->c_str())
			.fun<static_cast<Error (EditorImportPlugin::*)(const String &, const String &, const Dictionary &, const TypedArray<String> &, const TypedArray<String> &) const>(&EditorImportPlugin::_import)>((new std::string("_import"))->c_str())
			.fun<static_cast<bool (EditorImportPlugin::*)() const>(&EditorImportPlugin::_can_import_threaded)>((new std::string("_can_import_threaded"))->c_str())
			.fun<static_cast<Error (EditorImportPlugin::*)(const String &, const Dictionary &, const String &, const Variant &)>(&EditorImportPlugin::append_import_external_resource)>((new std::string("append_import_external_resource"))->c_str());
}