#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorExportPlugin() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorExportPlugin>("EditorExportPlugin")
			.constructor<>()
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const String &, const PackedStringArray &)>(&EditorExportPlugin::_export_file)>("_export_file")
			.fun<static_cast<void (EditorExportPlugin::*)(const PackedStringArray &, bool, const String &, uint32_t)>(&EditorExportPlugin::_export_begin)>("_export_begin")
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_export_end)>("_export_end")
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const PackedStringArray &) const>(&EditorExportPlugin::_begin_customize_resources)>("_begin_customize_resources")
			.fun<static_cast<Ref<Resource> (EditorExportPlugin::*)(const Ref<Resource> &, const String &)>(&EditorExportPlugin::_customize_resource)>("_customize_resource")
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const PackedStringArray &) const>(&EditorExportPlugin::_begin_customize_scenes)>("_begin_customize_scenes")
			.fun<static_cast<Node *(EditorExportPlugin::*)(Node *, const String &)>(&EditorExportPlugin::_customize_scene)>("_customize_scene")
			.fun<static_cast<uint64_t (EditorExportPlugin::*)() const>(&EditorExportPlugin::_get_customization_configuration_hash)>("_get_customization_configuration_hash")
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_end_customize_scenes)>("_end_customize_scenes")
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::_end_customize_resources)>("_end_customize_resources")
			.fun<static_cast<TypedArray<Dictionary> (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_get_export_options)>("_get_export_options")
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_should_update_export_options)>("_should_update_export_options")
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, const String &) const>(&EditorExportPlugin::_get_export_option_warning)>("_get_export_option_warning")
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_export_features)>("_get_export_features")
			.fun<static_cast<String (EditorExportPlugin::*)() const>(&EditorExportPlugin::_get_name)>("_get_name")
			.fun<static_cast<bool (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &) const>(&EditorExportPlugin::_supports_platform)>("_supports_platform")
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_dependencies)>("_get_android_dependencies")
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_dependencies_maven_repos)>("_get_android_dependencies_maven_repos")
			.fun<static_cast<PackedStringArray (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_libraries)>("_get_android_libraries")
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_activity_element_contents)>("_get_android_manifest_activity_element_contents")
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_application_element_contents)>("_get_android_manifest_application_element_contents")
			.fun<static_cast<String (EditorExportPlugin::*)(const Ref<EditorExportPlatform> &, bool) const>(&EditorExportPlugin::_get_android_manifest_element_contents)>("_get_android_manifest_element_contents")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const PackedStringArray &, const String &)>(&EditorExportPlugin::add_shared_object)>("add_shared_object")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_project_static_lib)>("add_ios_project_static_lib")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &, const PackedByteArray &, bool)>(&EditorExportPlugin::add_file)>("add_file")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_framework)>("add_ios_framework")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_embedded_framework)>("add_ios_embedded_framework")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_plist_content)>("add_ios_plist_content")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_linker_flags)>("add_ios_linker_flags")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_bundle_file)>("add_ios_bundle_file")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_ios_cpp_code)>("add_ios_cpp_code")
			.fun<static_cast<void (EditorExportPlugin::*)(const String &)>(&EditorExportPlugin::add_macos_plugin_file)>("add_macos_plugin_file")
			.fun<static_cast<void (EditorExportPlugin::*)()>(&EditorExportPlugin::skip)>("skip")
			.fun<static_cast<Variant (EditorExportPlugin::*)(const StringName &) const>(&EditorExportPlugin::get_option)>("get_option");
}