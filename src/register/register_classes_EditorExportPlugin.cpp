
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorExportPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorExportPlugin>("EditorExportPlugin")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const String &, const PackedStringArray &)>(&EditorExportPlugin::_export_file)>((new std::string("_export_file"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const PackedStringArray &, bool, const String &, uint32_t)>(&EditorExportPlugin::_export_begin)>((new std::string("_export_begin"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_export_end)>((new std::string("_export_end"))->c_str())
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const PackedStringArray &) const>(&EditorExportPlugin::_begin_customize_resources)>((new std::string("_begin_customize_resources"))->c_str())
			.fun<static_cast<Ref<Resource> (EditorExportPlugin::*)(const Ref<Resource> &, const String &)>(&EditorExportPlugin::_customize_resource)>((new std::string("_customize_resource"))->c_str())
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const PackedStringArray &) const>(&EditorExportPlugin::_begin_customize_scenes)>((new std::string("_begin_customize_scenes"))->c_str())
			.fun<static_cast<Node *(EditorExportPlugin::*)(Node *, const String &)>(&EditorExportPlugin::_customize_scene)>((new std::string("_customize_scene"))->c_str())
			.fun<static_cast<uint64_t (EditorExportPlugin::*)() const>(&EditorExportPlugin::_get_customization_configuration_hash)>((new std::string("_get_customization_configuration_hash"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_end_customize_scenes)>((new std::string("_end_customize_scenes"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_end_customize_resources)>((new std::string("_end_customize_resources"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_get_export_options)>((new std::string("_get_export_options"))->c_str())
			.fun<static_cast<Dictionary (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_get_export_options_overrides)>((new std::string("_get_export_options_overrides"))->c_str())
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_should_update_export_options)>((new std::string("_should_update_export_options"))->c_str())
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const String &) const>(&EditorExportPlugin::_get_export_option_warning)>((new std::string("_get_export_option_warning"))->c_str())
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_export_features)>((new std::string("_get_export_features"))->c_str())
			.fun<static_cast<String (EditorExportPlugin::*)() const>(&EditorExportPlugin::_get_name)>((new std::string("_get_name"))->c_str())
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_supports_platform)>((new std::string("_supports_platform"))->c_str())
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_dependencies)>((new std::string("_get_android_dependencies"))->c_str())
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_dependencies_maven_repos)>((new std::string("_get_android_dependencies_maven_repos"))->c_str())
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_libraries)>((new std::string("_get_android_libraries"))->c_str())
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_activity_element_contents)>((new std::string("_get_android_manifest_activity_element_contents"))->c_str())
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_application_element_contents)>((new std::string("_get_android_manifest_application_element_contents"))->c_str())
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_element_contents)>((new std::string("_get_android_manifest_element_contents"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const PackedStringArray &, const String &)>(&EditorExportPlugin::add_shared_object)>((new std::string("add_shared_object"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_project_static_lib)>((new std::string("add_ios_project_static_lib"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const PackedByteArray &, bool)>(&EditorExportPlugin::add_file)>((new std::string("add_file"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_framework)>((new std::string("add_ios_framework"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_embedded_framework)>((new std::string("add_ios_embedded_framework"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_plist_content)>((new std::string("add_ios_plist_content"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_linker_flags)>((new std::string("add_ios_linker_flags"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_bundle_file)>((new std::string("add_ios_bundle_file"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_cpp_code)>((new std::string("add_ios_cpp_code"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_macos_plugin_file)>((new std::string("add_macos_plugin_file"))->c_str())
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::skip)>((new std::string("skip"))->c_str())
			.fun<static_cast<Variant (EditorExportPlugin::*)(const StringName &) const>(&EditorExportPlugin::get_option)>((new std::string("get_option"))->c_str());
}