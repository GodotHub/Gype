#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/file_dialog.hpp>

using namespace godot;

void register_classes_FileDialog() {
    qjs::Context::Module &_module = _Node;
    _module.class_<FileDialog>("FileDialog")
           .constructor<>()
           .property<FileDialog::is_mode_overriding_title, FileDialog::set_mode_overrides_title>("mode_overrides_title")
           .property<FileDialog::get_file_mode, FileDialog::set_file_mode>("file_mode")
           .property<FileDialog::get_access, FileDialog::set_access>("access")
           .property<FileDialog::get_root_subfolder, FileDialog::set_root_subfolder>("root_subfolder")
           .property<FileDialog::get_filters, FileDialog::set_filters>("filters")
           .property<FileDialog::is_showing_hidden_files, FileDialog::set_show_hidden_files>("show_hidden_files")
           .property<FileDialog::get_use_native_dialog, FileDialog::set_use_native_dialog>("use_native_dialog")
           .property<FileDialog::get_current_dir, FileDialog::set_current_dir>("current_dir")
           .property<FileDialog::get_current_file, FileDialog::set_current_file>("current_file")
           .property<FileDialog::get_current_path, FileDialog::set_current_path>("current_path")
		    .fun<static_cast<void(FileDialog::*)()>(&FileDialog::clear_filters)>("clear_filters")
		    .fun<static_cast<void(FileDialog::*)(const String &,const String &)>(&FileDialog::add_filter)>("add_filter")
		    .fun<static_cast<VBoxContainer *(FileDialog::*)()>(&FileDialog::get_vbox)>("get_vbox")
		    .fun<static_cast<LineEdit *(FileDialog::*)()>(&FileDialog::get_line_edit)>("get_line_edit")
		    .fun<static_cast<void(FileDialog::*)()>(&FileDialog::deselect_all)>("deselect_all")
		    .fun<static_cast<void(FileDialog::*)()>(&FileDialog::invalidate)>("invalidate")
;}