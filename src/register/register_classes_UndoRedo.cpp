#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_UndoRedo() {
    qjs::Context::Module &_module = _System;
    _module.class_<UndoRedo>("UndoRedo")
           .constructor<>()
		   .fun<static_cast<void(UndoRedo::*)(const String &,UndoRedo::MergeMode,bool)>(&UndoRedo::create_action)>("create_action")
		   .fun<static_cast<void(UndoRedo::*)(bool)>(&UndoRedo::commit_action)>("commit_action")
		   .fun<static_cast<bool(UndoRedo::*)()const>(&UndoRedo::is_committing_action)>("is_committing_action")
		   .fun<static_cast<void(UndoRedo::*)(const Callable &)>(&UndoRedo::add_do_method)>("add_do_method")
		   .fun<static_cast<void(UndoRedo::*)(const Callable &)>(&UndoRedo::add_undo_method)>("add_undo_method")
		   .fun<static_cast<void(UndoRedo::*)(Object *,const StringName &,const Variant &)>(&UndoRedo::add_do_property)>("add_do_property")
		   .fun<static_cast<void(UndoRedo::*)(Object *,const StringName &,const Variant &)>(&UndoRedo::add_undo_property)>("add_undo_property")
		   .fun<static_cast<void(UndoRedo::*)(Object *)>(&UndoRedo::add_do_reference)>("add_do_reference")
		   .fun<static_cast<void(UndoRedo::*)(Object *)>(&UndoRedo::add_undo_reference)>("add_undo_reference")
		   .fun<static_cast<void(UndoRedo::*)()>(&UndoRedo::start_force_keep_in_merge_ends)>("start_force_keep_in_merge_ends")
		   .fun<static_cast<void(UndoRedo::*)()>(&UndoRedo::end_force_keep_in_merge_ends)>("end_force_keep_in_merge_ends")
		   .fun<static_cast<int32_t(UndoRedo::*)()>(&UndoRedo::get_history_count)>("get_history_count")
		   .fun<static_cast<int32_t(UndoRedo::*)()>(&UndoRedo::get_current_action)>("get_current_action")
		   .fun<static_cast<String(UndoRedo::*)(int32_t)>(&UndoRedo::get_action_name)>("get_action_name")
		   .fun<static_cast<void(UndoRedo::*)(bool)>(&UndoRedo::clear_history)>("clear_history")
		   .fun<static_cast<String(UndoRedo::*)()const>(&UndoRedo::get_current_action_name)>("get_current_action_name")
		   .fun<static_cast<bool(UndoRedo::*)()const>(&UndoRedo::has_undo)>("has_undo")
		   .fun<static_cast<bool(UndoRedo::*)()const>(&UndoRedo::has_redo)>("has_redo")
		   .fun<static_cast<uint64_t(UndoRedo::*)()const>(&UndoRedo::get_version)>("get_version")
		   .fun<static_cast<bool(UndoRedo::*)()>(&UndoRedo::redo)>("redo")
		   .fun<static_cast<bool(UndoRedo::*)()>(&UndoRedo::undo)>("undo")
;}