/**************************************************************************/
/*  editor_import_plugin.hpp                                              */
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

#ifndef GODOT_CPP_EDITOR_IMPORT_PLUGIN_HPP
#define GODOT_CPP_EDITOR_IMPORT_PLUGIN_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class StringName;

class EditorImportPlugin : public ResourceImporter {
	GDEXTENSION_CLASS(EditorImportPlugin, ResourceImporter)

public:

	Error append_import_external_resource(const String &path, const Dictionary &custom_options = Dictionary(), const String &custom_importer = String(), const Variant &generator_parameters = nullptr);
	virtual String _get_importer_name() const;
	virtual String _get_visible_name() const;
	virtual int32_t _get_preset_count() const;
	virtual String _get_preset_name(int32_t preset_index) const;
	virtual PackedStringArray _get_recognized_extensions() const;
	virtual TypedArray<Dictionary> _get_import_options(const String &path, int32_t preset_index) const;
	virtual String _get_save_extension() const;
	virtual String _get_resource_type() const;
	virtual double _get_priority() const;
	virtual int32_t _get_import_order() const;
	virtual bool _get_option_visibility(const String &path, const StringName &option_name, const Dictionary &options) const;
	virtual Error _import(const String &source_file, const String &save_path, const Dictionary &options, const TypedArray<String> &platform_variants, const TypedArray<String> &gen_files) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		ResourceImporter::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_get_importer_name),decltype(&T::_get_importer_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_importer_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_visible_name),decltype(&T::_get_visible_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_visible_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_preset_count),decltype(&T::_get_preset_count)>) {
			BIND_VIRTUAL_METHOD(T, _get_preset_count);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_preset_name),decltype(&T::_get_preset_name)>) {
			BIND_VIRTUAL_METHOD(T, _get_preset_name);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_recognized_extensions),decltype(&T::_get_recognized_extensions)>) {
			BIND_VIRTUAL_METHOD(T, _get_recognized_extensions);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_import_options),decltype(&T::_get_import_options)>) {
			BIND_VIRTUAL_METHOD(T, _get_import_options);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_save_extension),decltype(&T::_get_save_extension)>) {
			BIND_VIRTUAL_METHOD(T, _get_save_extension);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_resource_type),decltype(&T::_get_resource_type)>) {
			BIND_VIRTUAL_METHOD(T, _get_resource_type);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_priority),decltype(&T::_get_priority)>) {
			BIND_VIRTUAL_METHOD(T, _get_priority);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_import_order),decltype(&T::_get_import_order)>) {
			BIND_VIRTUAL_METHOD(T, _get_import_order);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_option_visibility),decltype(&T::_get_option_visibility)>) {
			BIND_VIRTUAL_METHOD(T, _get_option_visibility);
		}
		if constexpr (!std::is_same_v<decltype(&B::_import),decltype(&T::_import)>) {
			BIND_VIRTUAL_METHOD(T, _import);
		}
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_EDITOR_IMPORT_PLUGIN_HPP