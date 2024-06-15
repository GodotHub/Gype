#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ScriptEditor() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ScriptEditor>("ScriptEditor")
            .constructor<>()
            .base<PanelContainer>()
            .fun<static_cast<ScriptEditorBase *(ScriptEditor::*)()const>(&ScriptEditor::get_current_editor)>("get_current_editor")
            .fun<static_cast<TypedArray<ScriptEditorBase>(ScriptEditor::*)()const>(&ScriptEditor::get_open_script_editors)>("get_open_script_editors")
            .fun<static_cast<void(ScriptEditor::*)(const Ref<EditorSyntaxHighlighter> &)>(&ScriptEditor::register_syntax_highlighter)>("register_syntax_highlighter")
            .fun<static_cast<void(ScriptEditor::*)(const Ref<EditorSyntaxHighlighter> &)>(&ScriptEditor::unregister_syntax_highlighter)>("unregister_syntax_highlighter")
            .fun<static_cast<void(ScriptEditor::*)(int32_t)>(&ScriptEditor::goto_line)>("goto_line")
            .fun<static_cast<Ref<Script>(ScriptEditor::*)()>(&ScriptEditor::get_current_script)>("get_current_script")
            .fun<static_cast<TypedArray<Script>(ScriptEditor::*)()const>(&ScriptEditor::get_open_scripts)>("get_open_scripts")
            .fun<static_cast<void(ScriptEditor::*)(const String &,const String &)>(&ScriptEditor::open_script_create_dialog)>("open_script_create_dialog")
            .fun<static_cast<void(ScriptEditor::*)(const String &)>(&ScriptEditor::goto_help)>("goto_help")
;}