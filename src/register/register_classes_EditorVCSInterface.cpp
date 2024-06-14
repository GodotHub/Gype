
#include <godot_cpp/classes/editor_vcs_interface.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorVCSInterface() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorVCSInterface>("EditorVCSInterface")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<bool (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_initialize)>((new std::string("_initialize"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, const String &, const String &, const String &, const String &)>(&EditorVCSInterface::_set_credentials)>((new std::string("_set_credentials"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_modified_files_data)>((new std::string("_get_modified_files_data"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_stage_file)>((new std::string("_stage_file"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_unstage_file)>((new std::string("_unstage_file"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_discard_file)>((new std::string("_discard_file"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_commit)>((new std::string("_commit"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(const String &, int32_t)>(&EditorVCSInterface::_get_diff)>((new std::string("_get_diff"))->c_str())
			.fun<static_cast<bool (EditorVCSInterface::*)()>(&EditorVCSInterface::_shut_down)>((new std::string("_shut_down"))->c_str())
			.fun<static_cast<String (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_vcs_name)>((new std::string("_get_vcs_name"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(int32_t)>(&EditorVCSInterface::_get_previous_commits)>((new std::string("_get_previous_commits"))->c_str())
			.fun<static_cast<TypedArray<String> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_branch_list)>((new std::string("_get_branch_list"))->c_str())
			.fun<static_cast<TypedArray<String> (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_remotes)>((new std::string("_get_remotes"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_create_branch)>((new std::string("_create_branch"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_remove_branch)>((new std::string("_remove_branch"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::_create_remote)>((new std::string("_create_remote"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_remove_remote)>((new std::string("_remove_remote"))->c_str())
			.fun<static_cast<String (EditorVCSInterface::*)()>(&EditorVCSInterface::_get_current_branch_name)>((new std::string("_get_current_branch_name"))->c_str())
			.fun<static_cast<bool (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_checkout_branch)>((new std::string("_checkout_branch"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_pull)>((new std::string("_pull"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &, bool)>(&EditorVCSInterface::_push)>((new std::string("_push"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::_fetch)>((new std::string("_fetch"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::_get_line_diff)>((new std::string("_get_line_diff"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(int32_t, int32_t, const String &, const String &)>(&EditorVCSInterface::create_diff_line)>((new std::string("create_diff_line"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(int32_t, int32_t, int32_t, int32_t)>(&EditorVCSInterface::create_diff_hunk)>((new std::string("create_diff_hunk"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, const String &)>(&EditorVCSInterface::create_diff_file)>((new std::string("create_diff_file"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, const String &, const String &, int64_t, int64_t)>(&EditorVCSInterface::create_commit)>((new std::string("create_commit"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const String &, EditorVCSInterface::ChangeType, EditorVCSInterface::TreeArea)>(&EditorVCSInterface::create_status_file)>((new std::string("create_status_file"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const Dictionary &, const TypedArray<Dictionary> &)>(&EditorVCSInterface::add_diff_hunks_into_diff_file)>((new std::string("add_diff_hunks_into_diff_file"))->c_str())
			.fun<static_cast<Dictionary (EditorVCSInterface::*)(const Dictionary &, const TypedArray<Dictionary> &)>(&EditorVCSInterface::add_line_diffs_into_diff_hunk)>((new std::string("add_line_diffs_into_diff_hunk"))->c_str())
			.fun<static_cast<void (EditorVCSInterface::*)(const String &)>(&EditorVCSInterface::popup_error)>((new std::string("popup_error"))->c_str());
	qjs::Value _ChangeType = context->newObject();
	_ChangeType[(new std::string("CHANGE_TYPE_NEW"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_NEW;
	_ChangeType[(new std::string("CHANGE_TYPE_MODIFIED"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_MODIFIED;
	_ChangeType[(new std::string("CHANGE_TYPE_RENAMED"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_RENAMED;
	_ChangeType[(new std::string("CHANGE_TYPE_DELETED"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_DELETED;
	_ChangeType[(new std::string("CHANGE_TYPE_TYPECHANGE"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_TYPECHANGE;
	_ChangeType[(new std::string("CHANGE_TYPE_UNMERGED"))->c_str()] = EditorVCSInterface::ChangeType::CHANGE_TYPE_UNMERGED;
	_module.add("ChangeType", std::move(_ChangeType));
	qjs::Value _TreeArea = context->newObject();
	_TreeArea[(new std::string("TREE_AREA_COMMIT"))->c_str()] = EditorVCSInterface::TreeArea::TREE_AREA_COMMIT;
	_TreeArea[(new std::string("TREE_AREA_STAGED"))->c_str()] = EditorVCSInterface::TreeArea::TREE_AREA_STAGED;
	_TreeArea[(new std::string("TREE_AREA_UNSTAGED"))->c_str()] = EditorVCSInterface::TreeArea::TREE_AREA_UNSTAGED;
	_module.add("TreeArea", std::move(_TreeArea));
}