#include <godot_cpp/classes/editor_vcs_interface.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorVCSInterface() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorVCSInterface>("EditorVCSInterface")
			.constructor<>()
			.fun<static_cast<bool (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_initialize)>("_initialize")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, const String &, const String &, const String &, const String &)>(&EditorVCSInterface::_set_credentials)>("_set_credentials")
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_modified_files_data)>("_get_modified_files_data")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_stage_file)>("_stage_file")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_unstage_file)>("_unstage_file")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_discard_file)>("_discard_file")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_commit)>("_commit")
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(const String &, int32_t)>(&EditorVCSInterface::_get_diff)>("_get_diff")
			.fun<static_cast<bool (EditorVCSInterface::*)()>(&EditorVCSInterface::_shut_down)>("_shut_down")
			.fun<static_cast<String (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_vcs_name)>("_get_vcs_name")
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(int32_t)>(&EditorVCSInterface::_get_previous_commits)>("_get_previous_commits")
			.fun<static_cast<TypedArray<String> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_branch_list)>("_get_branch_list")
			.fun<static_cast<TypedArray<String> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_remotes)>("_get_remotes")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_create_branch)>("_create_branch")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_remove_branch)>("_remove_branch")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::_create_remote)>("_create_remote")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_remove_remote)>("_remove_remote")
			.fun<static_cast<String (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_current_branch_name)>("_get_current_branch_name")
			.fun<static_cast<bool (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_checkout_branch)>("_checkout_branch")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_pull)>("_pull")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, bool)>(&EditorVCSInterface::_push)>("_push")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_fetch)>("_fetch")
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::_get_line_diff)>("_get_line_diff")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(int32_t, int32_t, const String &, const String &)>(&EditorVCSInterface::create_diff_line)>("create_diff_line")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(int32_t, int32_t, int32_t, int32_t)>(&EditorVCSInterface::create_diff_hunk)>("create_diff_hunk")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::create_diff_file)>("create_diff_file")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, const String &, const String &, int64_t, int64_t)>(&EditorVCSInterface::create_commit)>("create_commit")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, EditorVCSInterface::ChangeType, EditorVCSInterface::TreeArea)>(&EditorVCSInterface::create_status_file)>("create_status_file")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const Dictionary &, const TypedArray<Dictionary> &)>(&EditorVCSInterface::add_diff_hunks_into_diff_file)>("add_diff_hunks_into_diff_file")
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const Dictionary &, const TypedArray<Dictionary> &)>(&EditorVCSInterface::add_line_diffs_into_diff_hunk)>("add_line_diffs_into_diff_hunk")
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::popup_error)>("popup_error");
}