/**************************************************************************/
/*  project_settings.hpp                                                  */
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

#ifndef GODOT_CPP_PROJECT_SETTINGS_HPP
#define GODOT_CPP_PROJECT_SETTINGS_HPP

#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class StringName;

class ProjectSettings : public Object {
	GDEXTENSION_CLASS(ProjectSettings, Object)

public:

	static ProjectSettings *get_singleton();

	bool has_setting(const String &name) const;
	void set_setting(const String &name, const Variant &value);
	Variant get_setting(const String &name, const Variant &default_value = nullptr) const;
	Variant get_setting_with_override(const StringName &name) const;
	TypedArray<Dictionary> get_global_class_list();
	void set_order(const String &name, int32_t position);
	int32_t get_order(const String &name) const;
	void set_initial_value(const String &name, const Variant &value);
	void set_as_basic(const String &name, bool basic);
	void set_as_internal(const String &name, bool internal);
	void add_property_info(const Dictionary &hint);
	void set_restart_if_changed(const String &name, bool restart);
	void clear(const String &name);
	String localize_path(const String &path) const;
	String globalize_path(const String &path) const;
	Error save();
	bool load_resource_pack(const String &pack, bool replace_files = true, int32_t offset = 0);
	Error save_custom(const String &file);
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_PROJECT_SETTINGS_HPP