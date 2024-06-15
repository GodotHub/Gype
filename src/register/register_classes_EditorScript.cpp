#include <godot_cpp/classes/editor_script.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorScript() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorScript>("EditorScript")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(EditorScript::*)()>(&EditorScript::_run)>("_run")
            .fun<static_cast<void(EditorScript::*)(Node *)>(&EditorScript::add_root_node)>("add_root_node")
            .fun<static_cast<Node *(EditorScript::*)()const>(&EditorScript::get_scene)>("get_scene")
            .fun<static_cast<EditorInterface *(EditorScript::*)()const>(&EditorScript::get_editor_interface)>("get_editor_interface")
;}