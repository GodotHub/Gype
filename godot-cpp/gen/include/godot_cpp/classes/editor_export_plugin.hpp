/**************************************************************************/
/*  editor_export_plugin.hpp                                              */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_EDITOR_EXPORT_PLUGIN_HPP
#define GODOT_CPP_EDITOR_EXPORT_PLUGIN_HPP

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>


#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class EditorExportPlatform;
class Node;
class PackedByteArray;
class Resource;
class StringName;

class EditorExportPlugin : public RefCounted {
	GDEXTENSION_CLASS(EditorExportPlugin, RefCounted)

public:
	void add_shared_object(const String &path, const PackedStringArray &tags, const String &target);
	void add_ios_project_static_lib(const String &path);
	void add_file(const String &path, const PackedByteArray &file, bool remap);
	void add_ios_framework(const String &path);
	void add_ios_embedded_framework(const String &path);
	void add_ios_plist_content(const String &plist_content);
	void add_ios_linker_flags(const String &flags);
	void add_ios_bundle_file(const String &path);
	void add_ios_cpp_code(const String &code);
	void add_macos_plugin_file(const String &path);
	void skip();
	Variant get_option(const StringName &name) const;
	virtual void _export_file(const String &path, const String &type, const PackedStringArray &features);
	virtual void _export_begin(const PackedStringArray &features, bool is_debug, const String &path, uint32_t flags);
	virtual void _export_end();
	virtual bool _begin_customize_resources(const Ref<EditorExportPlatform> &platform, const PackedStringArray &features) const;
	virtual Ref<Resource> _customize_resource(const Ref<Resource> &resource, const String &path);
	virtual bool _begin_customize_scenes(const Ref<EditorExportPlatform> &platform, const PackedStringArray &features) const;
	virtual Node *_customize_scene(Node *scene, const String &path);
	virtual uint64_t _get_customization_configuration_hash() const;
	virtual void _end_customize_scenes();
	virtual void _end_customize_resources();
	virtual TypedArray<Dictionary> _get_export_options(const Ref<EditorExportPlatform> &platform) const;
	virtual bool _should_update_export_options(const Ref<EditorExportPlatform> &platform) const;
	virtual String _get_export_option_warning(const Ref<EditorExportPlatform> &platform, const String &option) const;
	virtual PackedStringArray _get_export_features(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual String _get_name() const;
	virtual bool _supports_platform(const Ref<EditorExportPlatform> &platform) const;
	virtual PackedStringArray _get_android_dependencies(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual PackedStringArray _get_android_dependencies_maven_repos(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual PackedStringArray _get_android_libraries(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual String _get_android_manifest_activity_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual String _get_android_manifest_application_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const;
	virtual String _get_android_manifest_element_contents(const Ref<EditorExportPlatform> &platform, bool debug) const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_export_file), decltype(&T::_export_file)>) {
			BIND_VIRTUAL_METHOD(T, _export_file);
		}
		if constexpr (!std::is_same_v<decltype(&B::_export_begin), decltype(&T::_export_begin)>) {
			BIND_VIRTUAL_METHOD(T, _export_begin);
		}
		if constexpr (!std::is_same_v<decltype(&B::_export_end), decltype(&T::_export_end)>) {
			BIND_VIRTUAL_METHOD(T, _export_end);
		}
		if constexpr (!std::is_same_v<decltype(&B::_begin_customize_resources), decltype(&T::_begin_customize_resources)>) {
			BIND_VIRTUAL_METHOD(T, _begin_customize_resources);
		}
		if constexpr (!std::is_same_v<decltype(&B::_customize_resource), decltype(&T::_customize_resource)>) {
			BIND_VIRTUAL_METHOD(T, _customize_resource);
		}
		if constexpr (!std::is_same_v<decltype(&B::_begin_customize_scenes), decltype(&T::_begin_customize_scenes)>) {
			BIND_VIRTUAL_METHOD(T, _begin_customize_scenes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_customize_scene), decltype(&T::_customize_scene)>) {
			BIND_VIRTUAL_METHOD(T, _customize_scene);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_customization_configuration_hash), decltype(&T::_get_customization_configuration_hash)>) {
			BIND_VIRTUAL_METHOD(T, _get_customization_configuration_hash);
		}
		if constexpr (!std::is_same_v<decltype(&B::_end_customize_scenes), decltype(&T::_end_customize_scenes)>) {
			BIND_VIRTUAL_METHOD(T, _end_customize_scenes);
		}
		if constexpr (!std::is_same_v<decltype(&B::_end_customize_resources), decltype(&T::_end_customize_resources)>) {
			BIND_VIRTUAL_METHOD(T, _end_customize_resources);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_export_options), decltype(&T::_get_export_options)>) {
			BIND_VIRTUAL_METHOD(T, _get_export_options);
		}
		if constexpr (!std::is_same_v<decltype(&B::_should_update_export_options), decltype(&T::_should_update_export_options)>) {
			BIND_VIRTUAL_METHOD(T, _should_update_export_options);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_export_option_warning), decltype(&T::_get_export_option_warning)>) {
			BIND_VIRTUAL_METHOD(T, _get_export_option_warning);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_export_features), decltype(&T::_get_export_features)>) {
			BIND_VIRTUAL_METHOD(T, _get_export_features);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_name), decltype(&T::_get_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_supports_platform), decltype(&T::_supports_platform)>) {
			BIND_VIRTUAL_METHOD(T, _supports_platform);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_dependencies), decltype(&T::_get_android_dependencies)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_dependencies);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_dependencies_maven_repos), decltype(&T::_get_android_dependencies_maven_repos)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_dependencies_maven_repos);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_libraries), decltype(&T::_get_android_libraries)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_libraries);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_manifest_activity_element_contents), decltype(&T::_get_android_manifest_activity_element_contents)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_manifest_activity_element_contents);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_manifest_application_element_contents), decltype(&T::_get_android_manifest_application_element_contents)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_manifest_application_element_contents);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_android_manifest_element_contents), decltype(&T::_get_android_manifest_element_contents)>) {
			BIND_VIRTUAL_METHOD(T, _get_android_manifest_element_contents);
		}
	}

public:
};

} // namespace godot

#endif // ! GODOT_CPP_EDITOR_EXPORT_PLUGIN_HPP