/**************************************************************************/
/*  file_dialog.hpp                                                       */
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

#ifndef GODOT_CPP_FILE_DIALOG_HPP
#define GODOT_CPP_FILE_DIALOG_HPP

#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class LineEdit;
class VBoxContainer;

class FileDialog : public ConfirmationDialog {
	GDEXTENSION_CLASS(FileDialog, ConfirmationDialog)

public:

	enum FileMode {
		FILE_MODE_OPEN_FILE = 0,
		FILE_MODE_OPEN_FILES = 1,
		FILE_MODE_OPEN_DIR = 2,
		FILE_MODE_OPEN_ANY = 3,
		FILE_MODE_SAVE_FILE = 4,
	};

	enum Access {
		ACCESS_RESOURCES = 0,
		ACCESS_USERDATA = 1,
		ACCESS_FILESYSTEM = 2,
	};

	void clear_filters();
	void add_filter(const String &filter, const String &description = String());
	void set_filters(const PackedStringArray &filters);
	PackedStringArray get_filters() const;
	String get_current_dir() const;
	String get_current_file() const;
	String get_current_path() const;
	void set_current_dir(const String &dir);
	void set_current_file(const String &file);
	void set_current_path(const String &path);
	void set_mode_overrides_title(bool override);
	bool is_mode_overriding_title() const;
	void set_file_mode(FileDialog::FileMode mode);
	FileDialog::FileMode get_file_mode() const;
	VBoxContainer *get_vbox();
	LineEdit *get_line_edit();
	void set_access(FileDialog::Access access);
	FileDialog::Access get_access() const;
	void set_root_subfolder(const String &dir);
	String get_root_subfolder() const;
	void set_show_hidden_files(bool show);
	bool is_showing_hidden_files() const;
	void set_use_native_dialog(bool native);
	bool get_use_native_dialog() const;
	void deselect_all();
	void invalidate();
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		ConfirmationDialog::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(FileDialog::FileMode);
VARIANT_ENUM_CAST(FileDialog::Access);

#endif // ! GODOT_CPP_FILE_DIALOG_HPP