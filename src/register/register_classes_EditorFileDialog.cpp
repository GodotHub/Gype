#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_file_dialog.hpp>

using namespace godot;

void register_classes_EditorFileDialog() {
    qjs::Context::Module &_module = _Node;
    _module.class_<EditorFileDialog>("EditorFileDialog")
           .constructor<>()
           .property<EditorFileDialog::get_access, EditorFileDialog::set_access>("access")
           .property<EditorFileDialog::get_display_mode, EditorFileDialog::set_display_mode>("display_mode")
           .property<EditorFileDialog::get_file_mode, EditorFileDialog::set_file_mode>("file_mode")
           .property<EditorFileDialog::get_current_dir, EditorFileDialog::set_current_dir>("current_dir")
           .property<EditorFileDialog::get_current_file, EditorFileDialog::set_current_file>("current_file")
           .property<EditorFileDialog::get_current_path, EditorFileDialog::set_current_path>("current_path")
           .property<EditorFileDialog::get_filters, EditorFileDialog::set_filters>("filters")
           .property<EditorFileDialog::is_showing_hidden_files, EditorFileDialog::set_show_hidden_files>("show_hidden_files")
           .property<EditorFileDialog::is_overwrite_warning_disabled, EditorFileDialog::set_disable_overwrite_warning>("disable_overwrite_warning")
		    .fun<static_cast<void(EditorFileDialog::*)()>(&EditorFileDialog::clear_filters)>("clear_filters")
		    .fun<static_cast<void(EditorFileDialog::*)(const String &,const String &)>(&EditorFileDialog::add_filter)>("add_filter")
		    .fun<static_cast<VBoxContainer *(EditorFileDialog::*)()>(&EditorFileDialog::get_vbox)>("get_vbox")
		    .fun<static_cast<LineEdit *(EditorFileDialog::*)()>(&EditorFileDialog::get_line_edit)>("get_line_edit")
		    .fun<static_cast<void(EditorFileDialog::*)(Control *,const String &)>(&EditorFileDialog::add_side_menu)>("add_side_menu")
		    .fun<static_cast<void(EditorFileDialog::*)()>(&EditorFileDialog::invalidate)>("invalidate")
;}