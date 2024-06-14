#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScriptEditorBase() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ScriptEditorBase>("ScriptEditorBase")
			.constructor<>()
			.base<VBoxContainer>()
			.fun<static_cast<Control *(ScriptEditorBase::*)() const>(&ScriptEditorBase::get_base_editor)>((new std::string("get_base_editor"))->c_str())
			.fun<static_cast<void (ScriptEditorBase::*)(const Ref<EditorSyntaxHighlighter> &)>(&ScriptEditorBase::add_syntax_highlighter)>((new std::string("add_syntax_highlighter"))->c_str());
}