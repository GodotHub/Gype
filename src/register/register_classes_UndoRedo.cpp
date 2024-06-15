#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_UndoRedo() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<UndoRedo>("UndoRedo")
            .constructor<>()
            .base<Object>()
            .property<static_cast<int32_t(UndoRedo::*)()const>(&UndoRedo::get_max_steps),static_cast<void(UndoRedo::*)(int32_t)>(&UndoRedo::set_max_steps)>("max_steps")
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
;    qjs::Value _MergeMode = context->newObject();
    _MergeMode["MERGE_DISABLE"] = UndoRedo::MergeMode::MERGE_DISABLE;
    _MergeMode["MERGE_ENDS"] = UndoRedo::MergeMode::MERGE_ENDS;
    _MergeMode["MERGE_ALL"] = UndoRedo::MergeMode::MERGE_ALL;
    _module.add("MergeMode", std::move(_MergeMode));
}