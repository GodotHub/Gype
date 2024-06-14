
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/file_dialog.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FileDialog() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<FileDialog>("FileDialog")
			.constructor<>()
			.base<ConfirmationDialog>()
			.property<static_cast<bool (FileDialog::*)() const>(&FileDialog::is_mode_overriding_title), static_cast<void (FileDialog::*)(bool)>(&FileDialog::set_mode_overrides_title)>((new std::string("mode_overrides_title"))->c_str())
			.property<static_cast<FileDialog::FileMode (FileDialog::*)() const>(&FileDialog::get_file_mode), static_cast<void (FileDialog::*)(FileDialog::FileMode)>(&FileDialog::set_file_mode)>((new std::string("file_mode"))->c_str())
			.property<static_cast<FileDialog::Access (FileDialog::*)() const>(&FileDialog::get_access), static_cast<void (FileDialog::*)(FileDialog::Access)>(&FileDialog::set_access)>((new std::string("access"))->c_str())
			.property<static_cast<String (FileDialog::*)() const>(&FileDialog::get_root_subfolder), static_cast<void (FileDialog::*)(const String &)>(&FileDialog::set_root_subfolder)>((new std::string("root_subfolder"))->c_str())
			.property<static_cast<PackedStringArray (FileDialog::*)() const>(&FileDialog::get_filters), static_cast<void (FileDialog::*)(const PackedStringArray &)>(&FileDialog::set_filters)>((new std::string("filters"))->c_str())
			.property<static_cast<int32_t (FileDialog::*)() const>(&FileDialog::get_option_count), static_cast<void (FileDialog::*)(int32_t)>(&FileDialog::set_option_count)>((new std::string("option_count"))->c_str())
			.property<static_cast<bool (FileDialog::*)() const>(&FileDialog::is_showing_hidden_files), static_cast<void (FileDialog::*)(bool)>(&FileDialog::set_show_hidden_files)>((new std::string("show_hidden_files"))->c_str())
			.property<static_cast<bool (FileDialog::*)() const>(&FileDialog::get_use_native_dialog), static_cast<void (FileDialog::*)(bool)>(&FileDialog::set_use_native_dialog)>((new std::string("use_native_dialog"))->c_str())
			.property<static_cast<String (FileDialog::*)() const>(&FileDialog::get_current_dir), static_cast<void (FileDialog::*)(const String &)>(&FileDialog::set_current_dir)>((new std::string("current_dir"))->c_str())
			.property<static_cast<String (FileDialog::*)() const>(&FileDialog::get_current_file), static_cast<void (FileDialog::*)(const String &)>(&FileDialog::set_current_file)>((new std::string("current_file"))->c_str())
			.property<static_cast<String (FileDialog::*)() const>(&FileDialog::get_current_path), static_cast<void (FileDialog::*)(const String &)>(&FileDialog::set_current_path)>((new std::string("current_path"))->c_str())
			.fun<static_cast<void (FileDialog::*)()>(&FileDialog::clear_filters)>((new std::string("clear_filters"))->c_str())
			.fun<static_cast<void (FileDialog::*)(const String &, const String &)>(&FileDialog::add_filter)>((new std::string("add_filter"))->c_str())
			.fun<static_cast<String (FileDialog::*)(int32_t) const>(&FileDialog::get_option_name)>((new std::string("get_option_name"))->c_str())
			.fun<static_cast<PackedStringArray (FileDialog::*)(int32_t) const>(&FileDialog::get_option_values)>((new std::string("get_option_values"))->c_str())
			.fun<static_cast<int32_t (FileDialog::*)(int32_t) const>(&FileDialog::get_option_default)>((new std::string("get_option_default"))->c_str())
			.fun<static_cast<void (FileDialog::*)(int32_t, const String &)>(&FileDialog::set_option_name)>((new std::string("set_option_name"))->c_str())
			.fun<static_cast<void (FileDialog::*)(int32_t, const PackedStringArray &)>(&FileDialog::set_option_values)>((new std::string("set_option_values"))->c_str())
			.fun<static_cast<void (FileDialog::*)(int32_t, int32_t)>(&FileDialog::set_option_default)>((new std::string("set_option_default"))->c_str())
			.fun<static_cast<void (FileDialog::*)(const String &, const PackedStringArray &, int32_t)>(&FileDialog::add_option)>((new std::string("add_option"))->c_str())
			.fun<static_cast<Dictionary (FileDialog::*)() const>(&FileDialog::get_selected_options)>((new std::string("get_selected_options"))->c_str())
			.fun<static_cast<VBoxContainer *(FileDialog::*)()>(&FileDialog::get_vbox)>((new std::string("get_vbox"))->c_str())
			.fun<static_cast<LineEdit *(FileDialog::*)()>(&FileDialog::get_line_edit)>((new std::string("get_line_edit"))->c_str())
			.fun<static_cast<void (FileDialog::*)()>(&FileDialog::deselect_all)>((new std::string("deselect_all"))->c_str())
			.fun<static_cast<void (FileDialog::*)()>(&FileDialog::invalidate)>((new std::string("invalidate"))->c_str());
	qjs::Value _FileMode = context->newObject();
	_FileMode[(new std::string("FILE_MODE_OPEN_FILE"))->c_str()] = FileDialog::FileMode::FILE_MODE_OPEN_FILE;
	_FileMode[(new std::string("FILE_MODE_OPEN_FILES"))->c_str()] = FileDialog::FileMode::FILE_MODE_OPEN_FILES;
	_FileMode[(new std::string("FILE_MODE_OPEN_DIR"))->c_str()] = FileDialog::FileMode::FILE_MODE_OPEN_DIR;
	_FileMode[(new std::string("FILE_MODE_OPEN_ANY"))->c_str()] = FileDialog::FileMode::FILE_MODE_OPEN_ANY;
	_FileMode[(new std::string("FILE_MODE_SAVE_FILE"))->c_str()] = FileDialog::FileMode::FILE_MODE_SAVE_FILE;
	_module.add("FileMode", std::move(_FileMode));
	qjs::Value _Access = context->newObject();
	_Access[(new std::string("ACCESS_RESOURCES"))->c_str()] = FileDialog::Access::ACCESS_RESOURCES;
	_Access[(new std::string("ACCESS_USERDATA"))->c_str()] = FileDialog::Access::ACCESS_USERDATA;
	_Access[(new std::string("ACCESS_FILESYSTEM"))->c_str()] = FileDialog::Access::ACCESS_FILESYSTEM;
	_module.add("Access", std::move(_Access));
}