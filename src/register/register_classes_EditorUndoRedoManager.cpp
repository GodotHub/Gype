#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorUndoRedoManager() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorUndoRedoManager>("EditorUndoRedoManager")
            .constructor<>()
            .base<Object>()
            .fun<static_cast<void(EditorUndoRedoManager::*)(const String &,UndoRedo::MergeMode,Object *,bool)>(&EditorUndoRedoManager::create_action)>("create_action")
            .fun<static_cast<void(EditorUndoRedoManager::*)(bool)>(&EditorUndoRedoManager::commit_action)>("commit_action")
            .fun<static_cast<bool(EditorUndoRedoManager::*)()const>(&EditorUndoRedoManager::is_committing_action)>("is_committing_action")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *,const StringName &,rest<Variant> args)>(&EditorUndoRedoManager::add_do_method)>("add_do_method")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *,const StringName &,rest<Variant> args)>(&EditorUndoRedoManager::add_undo_method)>("add_undo_method")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *,const StringName &,const Variant &)>(&EditorUndoRedoManager::add_do_property)>("add_do_property")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *,const StringName &,const Variant &)>(&EditorUndoRedoManager::add_undo_property)>("add_undo_property")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *)>(&EditorUndoRedoManager::add_do_reference)>("add_do_reference")
            .fun<static_cast<void(EditorUndoRedoManager::*)(Object *)>(&EditorUndoRedoManager::add_undo_reference)>("add_undo_reference")
            .fun<static_cast<int32_t(EditorUndoRedoManager::*)(Object *)const>(&EditorUndoRedoManager::get_object_history_id)>("get_object_history_id")
            .fun<static_cast<UndoRedo *(EditorUndoRedoManager::*)(int32_t)const>(&EditorUndoRedoManager::get_history_undo_redo)>("get_history_undo_redo")
;    qjs::Value _SpecialHistory = context->newObject();
    _SpecialHistory["GLOBAL_HISTORY"] = EditorUndoRedoManager::SpecialHistory::GLOBAL_HISTORY;
    _SpecialHistory["REMOTE_HISTORY"] = EditorUndoRedoManager::SpecialHistory::REMOTE_HISTORY;
    _SpecialHistory["INVALID_HISTORY"] = EditorUndoRedoManager::SpecialHistory::INVALID_HISTORY;
    _module.add("SpecialHistory", std::move(_SpecialHistory));
}