
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UndoRedo() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UndoRedo>("UndoRedo")
			.constructor<>()
			.base<Object>()
			.property<static_cast<int32_t (UndoRedo::*)() const>(&UndoRedo::get_max_steps), static_cast<void (UndoRedo::*)(int32_t)>(&UndoRedo::set_max_steps)>((new std::string("max_steps"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(const String &, UndoRedo::MergeMode, bool)>(&UndoRedo::create_action)>((new std::string("create_action"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(bool)>(&UndoRedo::commit_action)>((new std::string("commit_action"))->c_str())
			.fun<static_cast<bool (UndoRedo::*)() const>(&UndoRedo::is_committing_action)>((new std::string("is_committing_action"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(const Callable &)>(&UndoRedo::add_do_method)>((new std::string("add_do_method"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(const Callable &)>(&UndoRedo::add_undo_method)>((new std::string("add_undo_method"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(Object *, const StringName &, const Variant &)>(&UndoRedo::add_do_property)>((new std::string("add_do_property"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(Object *, const StringName &, const Variant &)>(&UndoRedo::add_undo_property)>((new std::string("add_undo_property"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(Object *)>(&UndoRedo::add_do_reference)>((new std::string("add_do_reference"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(Object *)>(&UndoRedo::add_undo_reference)>((new std::string("add_undo_reference"))->c_str())
			.fun<static_cast<void (UndoRedo::*)()>(&UndoRedo::start_force_keep_in_merge_ends)>((new std::string("start_force_keep_in_merge_ends"))->c_str())
			.fun<static_cast<void (UndoRedo::*)()>(&UndoRedo::end_force_keep_in_merge_ends)>((new std::string("end_force_keep_in_merge_ends"))->c_str())
			.fun<static_cast<int32_t (UndoRedo::*)()>(&UndoRedo::get_history_count)>((new std::string("get_history_count"))->c_str())
			.fun<static_cast<int32_t (UndoRedo::*)()>(&UndoRedo::get_current_action)>((new std::string("get_current_action"))->c_str())
			.fun<static_cast<String (UndoRedo::*)(int32_t)>(&UndoRedo::get_action_name)>((new std::string("get_action_name"))->c_str())
			.fun<static_cast<void (UndoRedo::*)(bool)>(&UndoRedo::clear_history)>((new std::string("clear_history"))->c_str())
			.fun<static_cast<String (UndoRedo::*)() const>(&UndoRedo::get_current_action_name)>((new std::string("get_current_action_name"))->c_str())
			.fun<static_cast<bool (UndoRedo::*)() const>(&UndoRedo::has_undo)>((new std::string("has_undo"))->c_str())
			.fun<static_cast<bool (UndoRedo::*)() const>(&UndoRedo::has_redo)>((new std::string("has_redo"))->c_str())
			.fun<static_cast<uint64_t (UndoRedo::*)() const>(&UndoRedo::get_version)>((new std::string("get_version"))->c_str())
			.fun<static_cast<bool (UndoRedo::*)()>(&UndoRedo::redo)>((new std::string("redo"))->c_str())
			.fun<static_cast<bool (UndoRedo::*)()>(&UndoRedo::undo)>((new std::string("undo"))->c_str());
	qjs::Value _MergeMode = context->newObject();
	_MergeMode[(new std::string("MERGE_DISABLE"))->c_str()] = UndoRedo::MergeMode::MERGE_DISABLE;
	_MergeMode[(new std::string("MERGE_ENDS"))->c_str()] = UndoRedo::MergeMode::MERGE_ENDS;
	_MergeMode[(new std::string("MERGE_ALL"))->c_str()] = UndoRedo::MergeMode::MERGE_ALL;
	_module.add("MergeMode", std::move(_MergeMode));
}