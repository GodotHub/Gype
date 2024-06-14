
#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorUndoRedoManager() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorUndoRedoManager>("EditorUndoRedoManager")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<void (EditorUndoRedoManager::*)(const String &, UndoRedo::MergeMode, Object *, bool)>(&EditorUndoRedoManager::create_action)>((new std::string("create_action"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(bool)>(&EditorUndoRedoManager::commit_action)>((new std::string("commit_action"))->c_str())
			.fun<static_cast<bool (EditorUndoRedoManager::*)() const>(&EditorUndoRedoManager::is_committing_action)>((new std::string("is_committing_action"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *, const StringName &, rest<Variant> args)>(&EditorUndoRedoManager::add_do_method)>((new std::string("add_do_method"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *, const StringName &, rest<Variant> args)>(&EditorUndoRedoManager::add_undo_method)>((new std::string("add_undo_method"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *, const StringName &, const Variant &)>(&EditorUndoRedoManager::add_do_property)>((new std::string("add_do_property"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *, const StringName &, const Variant &)>(&EditorUndoRedoManager::add_undo_property)>((new std::string("add_undo_property"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *)>(&EditorUndoRedoManager::add_do_reference)>((new std::string("add_do_reference"))->c_str())
			.fun<static_cast<void (EditorUndoRedoManager::*)(Object *)>(&EditorUndoRedoManager::add_undo_reference)>((new std::string("add_undo_reference"))->c_str())
			.fun<static_cast<int32_t (EditorUndoRedoManager::*)(Object *) const>(&EditorUndoRedoManager::get_object_history_id)>((new std::string("get_object_history_id"))->c_str())
			.fun<static_cast<UndoRedo *(EditorUndoRedoManager::*)(int32_t) const>(&EditorUndoRedoManager::get_history_undo_redo)>((new std::string("get_history_undo_redo"))->c_str());
	qjs::Value _SpecialHistory = context->newObject();
	_SpecialHistory[(new std::string("GLOBAL_HISTORY"))->c_str()] = EditorUndoRedoManager::SpecialHistory::GLOBAL_HISTORY;
	_SpecialHistory[(new std::string("REMOTE_HISTORY"))->c_str()] = EditorUndoRedoManager::SpecialHistory::REMOTE_HISTORY;
	_SpecialHistory[(new std::string("INVALID_HISTORY"))->c_str()] = EditorUndoRedoManager::SpecialHistory::INVALID_HISTORY;
	_module.add("SpecialHistory", std::move(_SpecialHistory));
}