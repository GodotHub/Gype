#include <godot_cpp/classes/file_dialog.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_FileDialog() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<FileDialog>("FileDialog")
            .constructor<>()
            .base<ConfirmationDialog>()
            .property<static_cast<bool(FileDialog::*)()const>(&FileDialog::is_mode_overriding_title),static_cast<void(FileDialog::*)(bool)>(&FileDialog::set_mode_overrides_title)>("mode_overrides_title")
            .property<static_cast<FileDialog::FileMode(FileDialog::*)()const>(&FileDialog::get_file_mode),static_cast<void(FileDialog::*)(FileDialog::FileMode)>(&FileDialog::set_file_mode)>("file_mode")
            .property<static_cast<FileDialog::Access(FileDialog::*)()const>(&FileDialog::get_access),static_cast<void(FileDialog::*)(FileDialog::Access)>(&FileDialog::set_access)>("access")
            .property<static_cast<String(FileDialog::*)()const>(&FileDialog::get_root_subfolder),static_cast<void(FileDialog::*)(const String &)>(&FileDialog::set_root_subfolder)>("root_subfolder")
            .property<static_cast<PackedStringArray(FileDialog::*)()const>(&FileDialog::get_filters),static_cast<void(FileDialog::*)(const PackedStringArray &)>(&FileDialog::set_filters)>("filters")
            .property<static_cast<int32_t(FileDialog::*)()const>(&FileDialog::get_option_count),static_cast<void(FileDialog::*)(int32_t)>(&FileDialog::set_option_count)>("option_count")
            .property<static_cast<bool(FileDialog::*)()const>(&FileDialog::is_showing_hidden_files),static_cast<void(FileDialog::*)(bool)>(&FileDialog::set_show_hidden_files)>("show_hidden_files")
            .property<static_cast<bool(FileDialog::*)()const>(&FileDialog::get_use_native_dialog),static_cast<void(FileDialog::*)(bool)>(&FileDialog::set_use_native_dialog)>("use_native_dialog")
            .property<static_cast<String(FileDialog::*)()const>(&FileDialog::get_current_dir),static_cast<void(FileDialog::*)(const String &)>(&FileDialog::set_current_dir)>("current_dir")
            .property<static_cast<String(FileDialog::*)()const>(&FileDialog::get_current_file),static_cast<void(FileDialog::*)(const String &)>(&FileDialog::set_current_file)>("current_file")
            .property<static_cast<String(FileDialog::*)()const>(&FileDialog::get_current_path),static_cast<void(FileDialog::*)(const String &)>(&FileDialog::set_current_path)>("current_path")
            .fun<static_cast<void(FileDialog::*)()>(&FileDialog::clear_filters)>("clear_filters")
            .fun<static_cast<void(FileDialog::*)(const String &,const String &)>(&FileDialog::add_filter)>("add_filter")
            .fun<static_cast<String(FileDialog::*)(int32_t)const>(&FileDialog::get_option_name)>("get_option_name")
            .fun<static_cast<PackedStringArray(FileDialog::*)(int32_t)const>(&FileDialog::get_option_values)>("get_option_values")
            .fun<static_cast<int32_t(FileDialog::*)(int32_t)const>(&FileDialog::get_option_default)>("get_option_default")
            .fun<static_cast<void(FileDialog::*)(int32_t,const String &)>(&FileDialog::set_option_name)>("set_option_name")
            .fun<static_cast<void(FileDialog::*)(int32_t,const PackedStringArray &)>(&FileDialog::set_option_values)>("set_option_values")
            .fun<static_cast<void(FileDialog::*)(int32_t,int32_t)>(&FileDialog::set_option_default)>("set_option_default")
            .fun<static_cast<void(FileDialog::*)(const String &,const PackedStringArray &,int32_t)>(&FileDialog::add_option)>("add_option")
            .fun<static_cast<Dictionary(FileDialog::*)()const>(&FileDialog::get_selected_options)>("get_selected_options")
            .fun<static_cast<VBoxContainer *(FileDialog::*)()>(&FileDialog::get_vbox)>("get_vbox")
            .fun<static_cast<LineEdit *(FileDialog::*)()>(&FileDialog::get_line_edit)>("get_line_edit")
            .fun<static_cast<void(FileDialog::*)()>(&FileDialog::deselect_all)>("deselect_all")
            .fun<static_cast<void(FileDialog::*)()>(&FileDialog::invalidate)>("invalidate")
;    qjs::Value _FileMode = context->newObject();
    _FileMode["FILE_MODE_OPEN_FILE"] = FileDialog::FileMode::FILE_MODE_OPEN_FILE;
    _FileMode["FILE_MODE_OPEN_FILES"] = FileDialog::FileMode::FILE_MODE_OPEN_FILES;
    _FileMode["FILE_MODE_OPEN_DIR"] = FileDialog::FileMode::FILE_MODE_OPEN_DIR;
    _FileMode["FILE_MODE_OPEN_ANY"] = FileDialog::FileMode::FILE_MODE_OPEN_ANY;
    _FileMode["FILE_MODE_SAVE_FILE"] = FileDialog::FileMode::FILE_MODE_SAVE_FILE;
    _module.add("FileMode", std::move(_FileMode));
    qjs::Value _Access = context->newObject();
    _Access["ACCESS_RESOURCES"] = FileDialog::Access::ACCESS_RESOURCES;
    _Access["ACCESS_USERDATA"] = FileDialog::Access::ACCESS_USERDATA;
    _Access["ACCESS_FILESYSTEM"] = FileDialog::Access::ACCESS_FILESYSTEM;
    _module.add("Access", std::move(_Access));
}