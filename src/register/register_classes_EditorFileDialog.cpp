#include <godot_cpp/classes/editor_file_dialog.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/control.hpp>
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

void register_classes_EditorFileDialog() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<EditorFileDialog>("EditorFileDialog")
            .constructor<>()
            .base<ConfirmationDialog>()
            .property<static_cast<EditorFileDialog::Access(EditorFileDialog::*)()const>(&EditorFileDialog::get_access),static_cast<void(EditorFileDialog::*)(EditorFileDialog::Access)>(&EditorFileDialog::set_access)>("access")
            .property<static_cast<EditorFileDialog::DisplayMode(EditorFileDialog::*)()const>(&EditorFileDialog::get_display_mode),static_cast<void(EditorFileDialog::*)(EditorFileDialog::DisplayMode)>(&EditorFileDialog::set_display_mode)>("display_mode")
            .property<static_cast<EditorFileDialog::FileMode(EditorFileDialog::*)()const>(&EditorFileDialog::get_file_mode),static_cast<void(EditorFileDialog::*)(EditorFileDialog::FileMode)>(&EditorFileDialog::set_file_mode)>("file_mode")
            .property<static_cast<String(EditorFileDialog::*)()const>(&EditorFileDialog::get_current_dir),static_cast<void(EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_dir)>("current_dir")
            .property<static_cast<String(EditorFileDialog::*)()const>(&EditorFileDialog::get_current_file),static_cast<void(EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_file)>("current_file")
            .property<static_cast<String(EditorFileDialog::*)()const>(&EditorFileDialog::get_current_path),static_cast<void(EditorFileDialog::*)(const String &)>(&EditorFileDialog::set_current_path)>("current_path")
            .property<static_cast<PackedStringArray(EditorFileDialog::*)()const>(&EditorFileDialog::get_filters),static_cast<void(EditorFileDialog::*)(const PackedStringArray &)>(&EditorFileDialog::set_filters)>("filters")
            .property<static_cast<int32_t(EditorFileDialog::*)()const>(&EditorFileDialog::get_option_count),static_cast<void(EditorFileDialog::*)(int32_t)>(&EditorFileDialog::set_option_count)>("option_count")
            .property<static_cast<bool(EditorFileDialog::*)()const>(&EditorFileDialog::is_showing_hidden_files),static_cast<void(EditorFileDialog::*)(bool)>(&EditorFileDialog::set_show_hidden_files)>("show_hidden_files")
            .property<static_cast<bool(EditorFileDialog::*)()const>(&EditorFileDialog::is_overwrite_warning_disabled),static_cast<void(EditorFileDialog::*)(bool)>(&EditorFileDialog::set_disable_overwrite_warning)>("disable_overwrite_warning")
            .fun<static_cast<void(EditorFileDialog::*)()>(&EditorFileDialog::clear_filters)>("clear_filters")
            .fun<static_cast<void(EditorFileDialog::*)(const String &,const String &)>(&EditorFileDialog::add_filter)>("add_filter")
            .fun<static_cast<String(EditorFileDialog::*)(int32_t)const>(&EditorFileDialog::get_option_name)>("get_option_name")
            .fun<static_cast<PackedStringArray(EditorFileDialog::*)(int32_t)const>(&EditorFileDialog::get_option_values)>("get_option_values")
            .fun<static_cast<int32_t(EditorFileDialog::*)(int32_t)const>(&EditorFileDialog::get_option_default)>("get_option_default")
            .fun<static_cast<void(EditorFileDialog::*)(int32_t,const String &)>(&EditorFileDialog::set_option_name)>("set_option_name")
            .fun<static_cast<void(EditorFileDialog::*)(int32_t,const PackedStringArray &)>(&EditorFileDialog::set_option_values)>("set_option_values")
            .fun<static_cast<void(EditorFileDialog::*)(int32_t,int32_t)>(&EditorFileDialog::set_option_default)>("set_option_default")
            .fun<static_cast<void(EditorFileDialog::*)(const String &,const PackedStringArray &,int32_t)>(&EditorFileDialog::add_option)>("add_option")
            .fun<static_cast<Dictionary(EditorFileDialog::*)()const>(&EditorFileDialog::get_selected_options)>("get_selected_options")
            .fun<static_cast<VBoxContainer *(EditorFileDialog::*)()>(&EditorFileDialog::get_vbox)>("get_vbox")
            .fun<static_cast<LineEdit *(EditorFileDialog::*)()>(&EditorFileDialog::get_line_edit)>("get_line_edit")
            .fun<static_cast<void(EditorFileDialog::*)(Control *,const String &)>(&EditorFileDialog::add_side_menu)>("add_side_menu")
            .fun<static_cast<void(EditorFileDialog::*)()>(&EditorFileDialog::popup_file_dialog)>("popup_file_dialog")
            .fun<static_cast<void(EditorFileDialog::*)()>(&EditorFileDialog::invalidate)>("invalidate")
;    qjs::Value _FileMode = context->newObject();
    _FileMode["FILE_MODE_OPEN_FILE"] = EditorFileDialog::FileMode::FILE_MODE_OPEN_FILE;
    _FileMode["FILE_MODE_OPEN_FILES"] = EditorFileDialog::FileMode::FILE_MODE_OPEN_FILES;
    _FileMode["FILE_MODE_OPEN_DIR"] = EditorFileDialog::FileMode::FILE_MODE_OPEN_DIR;
    _FileMode["FILE_MODE_OPEN_ANY"] = EditorFileDialog::FileMode::FILE_MODE_OPEN_ANY;
    _FileMode["FILE_MODE_SAVE_FILE"] = EditorFileDialog::FileMode::FILE_MODE_SAVE_FILE;
    _module.add("FileMode", std::move(_FileMode));
    qjs::Value _Access = context->newObject();
    _Access["ACCESS_RESOURCES"] = EditorFileDialog::Access::ACCESS_RESOURCES;
    _Access["ACCESS_USERDATA"] = EditorFileDialog::Access::ACCESS_USERDATA;
    _Access["ACCESS_FILESYSTEM"] = EditorFileDialog::Access::ACCESS_FILESYSTEM;
    _module.add("Access", std::move(_Access));
    qjs::Value _DisplayMode = context->newObject();
    _DisplayMode["DISPLAY_THUMBNAILS"] = EditorFileDialog::DisplayMode::DISPLAY_THUMBNAILS;
    _DisplayMode["DISPLAY_LIST"] = EditorFileDialog::DisplayMode::DISPLAY_LIST;
    _module.add("DisplayMode", std::move(_DisplayMode));
}