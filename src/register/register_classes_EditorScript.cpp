#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_script.hpp>

using namespace godot;

void register_classes_EditorScript() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorScript>("EditorScript")
           .constructor<>()
		    .fun<static_cast<void(EditorScript::*)()>(&EditorScript::_run)>("_run")
		    .fun<static_cast<void(EditorScript::*)(Node *)>(&EditorScript::add_root_node)>("add_root_node")
		    .fun<static_cast<Node *(EditorScript::*)()const>(&EditorScript::get_scene)>("get_scene")
		    .fun<static_cast<EditorInterface *(EditorScript::*)()const>(&EditorScript::get_editor_interface)>("get_editor_interface")
;}