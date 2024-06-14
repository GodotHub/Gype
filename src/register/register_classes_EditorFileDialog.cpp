
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_file_dialog.hpp>
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

void register_classes_EditorFileDialog() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<EditorFileDialog>("EditorFileDialog")
			.constructor<>()
			.base<ConfirmationDialog>()
			.property<static_cast<EditorFileDialog::Access (EditorFileDialog::*)() const>(&EditorFileDialog::get_access), static_cast<void (EditorFileDialog::*)(EditorFileDialog::Access)>(&EditorFileDialog::set_access)>((new std::string("access"))->c_str())
			.property<static_cast<EditorFileDialog::DisplayMode (EditorFileDialog::*)() const>(&EditorFileDialog::get_display_mode), static_cast<void (EditorFileDialog::*)(EditorFileDialog::DisplayMode)>(&EditorFileDialog::set_display_mode)>((new std::string("display_mode"))->c_str())
			.property<static_cast<EditorFileDialog::FileMode (EditorFileDialog::*)() const>(&EditorFileDialog::get_file_mode), static_cast<void (EditorFileDialog::*)(EditorFileDialog::FileMode)>(&EditorFileDialog::set_file_mode)>((new std::string("file_mode"))->c_str())
			.property<static_cast<String (EditorFileDialog::*)() const>(&EditorFileDialog::get_current_dir), static_cast<void (EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_dir)>((new std::string("current_dir"))->c_str())
			.property<static_cast<String (EditorFileDialog::*)() const>(&EditorFileDialog::get_current_file), static_cast<void (EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_file)>((new std::string("current_file"))->c_str())
			.property<static_cast<String (EditorFileDialog::*)() const>(&EditorFileDialog::get_current_path), static_cast<void (EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_path)>((new std::string("current_path"))->c_str())
			.property<static_cast<PackedStringArray (EditorFileDialog::*)() const>(&EditorFileDialog::get_filters), static_cast<void (EditorFileDialog::*)(const PackedStringArray &)>(&EditorFileDialog::set_filters)>((new std::string("filters"))->c_str())
			.property<static_cast<int32_t (EditorFileDialog::*)() const>(&EditorFileDialog::get_option_count), static_cast<void (EditorFileDialog::*)(int32_t)>(&EditorFileDialog::set_option_count)>((new std::string("option_count"))->c_str())
			.property<static_cast<bool (EditorFileDialog::*)() const>(&EditorFileDialog::is_showing_hidden_files), static_cast<void (EditorFileDialog::*)(bool)>(&EditorFileDialog::set_show_hidden_files)>((new std::string("show_hidden_files"))->c_str())
			.property<static_cast<bool (EditorFileDialog::*)() const>(&EditorFileDialog::is_overwrite_warning_disabled), static_cast<void (EditorFileDialog::*)(bool)>(&EditorFileDialog::set_disable_overwrite_warning)>((new std::string("disable_overwrite_warning"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)()>(&EditorFileDialog::clear_filters)>((new std::string("clear_filters"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(const String &, const String &)>(&EditorFileDialog::add_filter)>((new std::string("add_filter"))->c_str())
			.fun<static_cast<String (EditorFileDialog::*)(int32_t) const>(&EditorFileDialog::get_option_name)>((new std::string("get_option_name"))->c_str())
			.fun<static_cast<PackedStringArray (EditorFileDialog::*)(int32_t) const>(&EditorFileDialog::get_option_values)>((new std::string("get_option_values"))->c_str())
			.fun<static_cast<int32_t (EditorFileDialog::*)(int32_t) const>(&EditorFileDialog::get_option_default)>((new std::string("get_option_default"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(int32_t, const String &)>(&EditorFileDialog::set_option_name)>((new std::string("set_option_name"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(int32_t, const PackedStringArray &)>(&EditorFileDialog::set_option_values)>((new std::string("set_option_values"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(int32_t, int32_t)>(&EditorFileDialog::set_option_default)>((new std::string("set_option_default"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(const String &, const PackedStringArray &, int32_t)>(&EditorFileDialog::add_option)>((new std::string("add_option"))->c_str())
			.fun<static_cast<Dictionary (EditorFileDialog::*)() const>(&EditorFileDialog::get_selected_options)>((new std::string("get_selected_options"))->c_str())
			.fun<static_cast<VBoxContainer *(EditorFileDialog::*)()>(&EditorFileDialog::get_vbox)>((new std::string("get_vbox"))->c_str())
			.fun<static_cast<LineEdit *(EditorFileDialog::*)()>(&EditorFileDialog::get_line_edit)>((new std::string("get_line_edit"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)(Control *, const String &)>(&EditorFileDialog::add_side_menu)>((new std::string("add_side_menu"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)()>(&EditorFileDialog::popup_file_dialog)>((new std::string("popup_file_dialog"))->c_str())
			.fun<static_cast<void (EditorFileDialog::*)()>(&EditorFileDialog::invalidate)>((new std::string("invalidate"))->c_str());
	qjs::Value _FileMode = context->newObject();
	_FileMode[(new std::string("FILE_MODE_OPEN_FILE"))->c_str()] = EditorFileDialog::FileMode::FILE_MODE_OPEN_FILE;
	_FileMode[(new std::string("FILE_MODE_OPEN_FILES"))->c_str()] = EditorFileDialog::FileMode::FILE_MODE_OPEN_FILES;
	_FileMode[(new std::string("FILE_MODE_OPEN_DIR"))->c_str()] = EditorFileDialog::FileMode::FILE_MODE_OPEN_DIR;
	_FileMode[(new std::string("FILE_MODE_OPEN_ANY"))->c_str()] = EditorFileDialog::FileMode::FILE_MODE_OPEN_ANY;
	_FileMode[(new std::string("FILE_MODE_SAVE_FILE"))->c_str()] = EditorFileDialog::FileMode::FILE_MODE_SAVE_FILE;
	_module.add("FileMode", std::move(_FileMode));
	qjs::Value _Access = context->newObject();
	_Access[(new std::string("ACCESS_RESOURCES"))->c_str()] = EditorFileDialog::Access::ACCESS_RESOURCES;
	_Access[(new std::string("ACCESS_USERDATA"))->c_str()] = EditorFileDialog::Access::ACCESS_USERDATA;
	_Access[(new std::string("ACCESS_FILESYSTEM"))->c_str()] = EditorFileDialog::Access::ACCESS_FILESYSTEM;
	_module.add("Access", std::move(_Access));
	qjs::Value _DisplayMode = context->newObject();
	_DisplayMode[(new std::string("DISPLAY_THUMBNAILS"))->c_str()] = EditorFileDialog::DisplayMode::DISPLAY_THUMBNAILS;
	_DisplayMode[(new std::string("DISPLAY_LIST"))->c_str()] = EditorFileDialog::DisplayMode::DISPLAY_LIST;
	_module.add("DisplayMode", std::move(_DisplayMode));
}