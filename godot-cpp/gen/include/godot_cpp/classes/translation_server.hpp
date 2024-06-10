/**************************************************************************/
/*  translation_server.hpp                                                */
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

#ifndef GODOT_CPP_TRANSLATION_SERVER_HPP
#define GODOT_CPP_TRANSLATION_SERVER_HPP

#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class Translation;

class TranslationServer : public Object {
	GDEXTENSION_CLASS(TranslationServer, Object)

	static TranslationServer *singleton;

public:

	static TranslationServer *get_singleton();

	void set_locale(const String &locale);
	String get_locale() const;
	String get_tool_locale();
	int32_t compare_locales(const String &locale_a, const String &locale_b) const;
	String standardize_locale(const String &locale) const;
	PackedStringArray get_all_languages() const;
	String get_language_name(const String &language) const;
	PackedStringArray get_all_scripts() const;
	String get_script_name(const String &script) const;
	PackedStringArray get_all_countries() const;
	String get_country_name(const String &country) const;
	String get_locale_name(const String &locale) const;
	StringName translate(const StringName &message, const StringName &context = StringName()) const;
	StringName translate_plural(const StringName &message, const StringName &plural_message, int32_t n, const StringName &context = StringName()) const;
	void add_translation(const Ref<Translation> &translation);
	void remove_translation(const Ref<Translation> &translation);
	Ref<Translation> get_translation_object(const String &locale);
	void clear();
	PackedStringArray get_loaded_locales() const;
	bool is_pseudolocalization_enabled() const;
	void set_pseudolocalization_enabled(bool enabled);
	void reload_pseudolocalization();
	StringName pseudolocalize(const StringName &message) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

	~TranslationServer();

public:

};

} // namespace godot

#endif // ! GODOT_CPP_TRANSLATION_SERVER_HPP