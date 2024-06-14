
#include <godot_cpp/classes/dir_access.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_DirAccess() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<DirAccess>("DirAccess")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (DirAccess::*)() const>(&DirAccess::get_include_navigational), static_cast<void (DirAccess::*)(bool)>(&DirAccess::set_include_navigational)>((new std::string("include_navigational"))->c_str())
			.property<static_cast<bool (DirAccess::*)() const>(&DirAccess::get_include_hidden), static_cast<void (DirAccess::*)(bool)>(&DirAccess::set_include_hidden)>((new std::string("include_hidden"))->c_str())
			.static_fun<static_cast<Ref<DirAccess> (*)(const String &)>(&DirAccess::open)>((new std::string("open"))->c_str())
			.static_fun<static_cast<Error (*)()>(&DirAccess::get_open_error)>((new std::string("get_open_error"))->c_str())
			.fun<static_cast<Error (DirAccess::*)()>(&DirAccess::list_dir_begin)>((new std::string("list_dir_begin"))->c_str())
			.fun<static_cast<String (DirAccess::*)()>(&DirAccess::get_next)>((new std::string("get_next"))->c_str())
			.fun<static_cast<bool (DirAccess::*)() const>(&DirAccess::current_is_dir)>((new std::string("current_is_dir"))->c_str())
			.fun<static_cast<void (DirAccess::*)()>(&DirAccess::list_dir_end)>((new std::string("list_dir_end"))->c_str())
			.fun<static_cast<PackedStringArray (DirAccess::*)()>(&DirAccess::get_files)>((new std::string("get_files"))->c_str())
			.static_fun<static_cast<PackedStringArray (*)(const String &)>(&DirAccess::get_files_at)>((new std::string("get_files_at"))->c_str())
			.fun<static_cast<PackedStringArray (DirAccess::*)()>(&DirAccess::get_directories)>((new std::string("get_directories"))->c_str())
			.static_fun<static_cast<PackedStringArray (*)(const String &)>(&DirAccess::get_directories_at)>((new std::string("get_directories_at"))->c_str())
			.static_fun<static_cast<int32_t (*)()>(&DirAccess::get_drive_count)>((new std::string("get_drive_count"))->c_str())
			.static_fun<static_cast<String (*)(int32_t)>(&DirAccess::get_drive_name)>((new std::string("get_drive_name"))->c_str())
			.fun<static_cast<int32_t (DirAccess::*)()>(&DirAccess::get_current_drive)>((new std::string("get_current_drive"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &)>(&DirAccess::change_dir)>((new std::string("change_dir"))->c_str())
			.fun<static_cast<String (DirAccess::*)(bool) const>(&DirAccess::get_current_dir)>((new std::string("get_current_dir"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &)>(&DirAccess::make_dir)>((new std::string("make_dir"))->c_str())
			.static_fun<static_cast<Error (*)(const String &)>(&DirAccess::make_dir_absolute)>((new std::string("make_dir_absolute"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &)>(&DirAccess::make_dir_recursive)>((new std::string("make_dir_recursive"))->c_str())
			.static_fun<static_cast<Error (*)(const String &)>(&DirAccess::make_dir_recursive_absolute)>((new std::string("make_dir_recursive_absolute"))->c_str())
			.fun<static_cast<bool (DirAccess::*)(const String &)>(&DirAccess::file_exists)>((new std::string("file_exists"))->c_str())
			.fun<static_cast<bool (DirAccess::*)(const String &)>(&DirAccess::dir_exists)>((new std::string("dir_exists"))->c_str())
			.static_fun<static_cast<bool (*)(const String &)>(&DirAccess::dir_exists_absolute)>((new std::string("dir_exists_absolute"))->c_str())
			.fun<static_cast<uint64_t (DirAccess::*)()>(&DirAccess::get_space_left)>((new std::string("get_space_left"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &, const String &, int32_t)>(&DirAccess::copy)>((new std::string("copy"))->c_str())
			.static_fun<static_cast<Error (*)(const String &, const String &, int32_t)>(&DirAccess::copy_absolute)>((new std::string("copy_absolute"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &, const String &)>(&DirAccess::rename)>((new std::string("rename"))->c_str())
			.static_fun<static_cast<Error (*)(const String &, const String &)>(&DirAccess::rename_absolute)>((new std::string("rename_absolute"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &)>(&DirAccess::remove)>((new std::string("remove"))->c_str())
			.static_fun<static_cast<Error (*)(const String &)>(&DirAccess::remove_absolute)>((new std::string("remove_absolute"))->c_str())
			.fun<static_cast<bool (DirAccess::*)(const String &)>(&DirAccess::is_link)>((new std::string("is_link"))->c_str())
			.fun<static_cast<String (DirAccess::*)(const String &)>(&DirAccess::read_link)>((new std::string("read_link"))->c_str())
			.fun<static_cast<Error (DirAccess::*)(const String &, const String &)>(&DirAccess::create_link)>((new std::string("create_link"))->c_str())
			.fun<static_cast<bool (DirAccess::*)(const String &) const>(&DirAccess::is_case_sensitive)>((new std::string("is_case_sensitive"))->c_str());
}