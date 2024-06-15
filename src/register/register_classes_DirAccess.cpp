#include <godot_cpp/classes/dir_access.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_DirAccess() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<DirAccess>("DirAccess")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(DirAccess::*)()const>(&DirAccess::get_include_navigational),static_cast<void(DirAccess::*)(bool)>(&DirAccess::set_include_navigational)>("include_navigational")
            .property<static_cast<bool(DirAccess::*)()const>(&DirAccess::get_include_hidden),static_cast<void(DirAccess::*)(bool)>(&DirAccess::set_include_hidden)>("include_hidden")
            .static_fun<static_cast<Ref<DirAccess>(*)(const String &)>(&DirAccess::open)>("open")
            .static_fun<static_cast<Error(*)()>(&DirAccess::get_open_error)>("get_open_error")
            .fun<static_cast<Error(DirAccess::*)()>(&DirAccess::list_dir_begin)>("list_dir_begin")
            .fun<static_cast<String(DirAccess::*)()>(&DirAccess::get_next)>("get_next")
            .fun<static_cast<bool(DirAccess::*)()const>(&DirAccess::current_is_dir)>("current_is_dir")
            .fun<static_cast<void(DirAccess::*)()>(&DirAccess::list_dir_end)>("list_dir_end")
            .fun<static_cast<PackedStringArray(DirAccess::*)()>(&DirAccess::get_files)>("get_files")
            .static_fun<static_cast<PackedStringArray(*)(const String &)>(&DirAccess::get_files_at)>("get_files_at")
            .fun<static_cast<PackedStringArray(DirAccess::*)()>(&DirAccess::get_directories)>("get_directories")
            .static_fun<static_cast<PackedStringArray(*)(const String &)>(&DirAccess::get_directories_at)>("get_directories_at")
            .static_fun<static_cast<int32_t(*)()>(&DirAccess::get_drive_count)>("get_drive_count")
            .static_fun<static_cast<String(*)(int32_t)>(&DirAccess::get_drive_name)>("get_drive_name")
            .fun<static_cast<int32_t(DirAccess::*)()>(&DirAccess::get_current_drive)>("get_current_drive")
            .fun<static_cast<Error(DirAccess::*)(const String &)>(&DirAccess::change_dir)>("change_dir")
            .fun<static_cast<String(DirAccess::*)(bool)const>(&DirAccess::get_current_dir)>("get_current_dir")
            .fun<static_cast<Error(DirAccess::*)(const String &)>(&DirAccess::make_dir)>("make_dir")
            .static_fun<static_cast<Error(*)(const String &)>(&DirAccess::make_dir_absolute)>("make_dir_absolute")
            .fun<static_cast<Error(DirAccess::*)(const String &)>(&DirAccess::make_dir_recursive)>("make_dir_recursive")
            .static_fun<static_cast<Error(*)(const String &)>(&DirAccess::make_dir_recursive_absolute)>("make_dir_recursive_absolute")
            .fun<static_cast<bool(DirAccess::*)(const String &)>(&DirAccess::file_exists)>("file_exists")
            .fun<static_cast<bool(DirAccess::*)(const String &)>(&DirAccess::dir_exists)>("dir_exists")
            .static_fun<static_cast<bool(*)(const String &)>(&DirAccess::dir_exists_absolute)>("dir_exists_absolute")
            .fun<static_cast<uint64_t(DirAccess::*)()>(&DirAccess::get_space_left)>("get_space_left")
            .fun<static_cast<Error(DirAccess::*)(const String &,const String &,int32_t)>(&DirAccess::copy)>("copy")
            .static_fun<static_cast<Error(*)(const String &,const String &,int32_t)>(&DirAccess::copy_absolute)>("copy_absolute")
            .fun<static_cast<Error(DirAccess::*)(const String &,const String &)>(&DirAccess::rename)>("rename")
            .static_fun<static_cast<Error(*)(const String &,const String &)>(&DirAccess::rename_absolute)>("rename_absolute")
            .fun<static_cast<Error(DirAccess::*)(const String &)>(&DirAccess::remove)>("remove")
            .static_fun<static_cast<Error(*)(const String &)>(&DirAccess::remove_absolute)>("remove_absolute")
            .fun<static_cast<bool(DirAccess::*)(const String &)>(&DirAccess::is_link)>("is_link")
            .fun<static_cast<String(DirAccess::*)(const String &)>(&DirAccess::read_link)>("read_link")
            .fun<static_cast<Error(DirAccess::*)(const String &,const String &)>(&DirAccess::create_link)>("create_link")
            .fun<static_cast<bool(DirAccess::*)(const String &)const>(&DirAccess::is_case_sensitive)>("is_case_sensitive")
;}