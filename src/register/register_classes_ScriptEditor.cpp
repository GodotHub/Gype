
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScriptEditor() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ScriptEditor>("ScriptEditor")
			.constructor<>()
			.base<PanelContainer>()
			.fun<static_cast<ScriptEditorBase *(ScriptEditor::*)() const>(&ScriptEditor::get_current_editor)>((new std::string("get_current_editor"))->c_str())
			.fun<static_cast<TypedArray<ScriptEditorBase> (ScriptEditor::*)() const>(&ScriptEditor::get_open_script_editors)>((new std::string("get_open_script_editors"))->c_str())
			.fun<static_cast<void (ScriptEditor::*)(const Ref<EditorSyntaxHighlighter> &)>(&ScriptEditor::register_syntax_highlighter)>((new std::string("register_syntax_highlighter"))->c_str())
			.fun<static_cast<void (ScriptEditor::*)(const Ref<EditorSyntaxHighlighter> &)>(&ScriptEditor::unregister_syntax_highlighter)>((new std::string("unregister_syntax_highlighter"))->c_str())
			.fun<static_cast<void (ScriptEditor::*)(int32_t)>(&ScriptEditor::goto_line)>((new std::string("goto_line"))->c_str())
			.fun<static_cast<Ref<Script> (ScriptEditor::*)()>(&ScriptEditor::get_current_script)>((new std::string("get_current_script"))->c_str())
			.fun<static_cast<TypedArray<Script> (ScriptEditor::*)() const>(&ScriptEditor::get_open_scripts)>((new std::string("get_open_scripts"))->c_str())
			.fun<static_cast<void (ScriptEditor::*)(const String &, const String &)>(&ScriptEditor::open_script_create_dialog)>((new std::string("open_script_create_dialog"))->c_str())
			.fun<static_cast<void (ScriptEditor::*)(const String &)>(&ScriptEditor::goto_help)>((new std::string("goto_help"))->c_str());
}