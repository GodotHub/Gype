#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_script.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorScript() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorScript>("EditorScript")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorScript::*)()>(&EditorScript::_run)>((new std::string("_run"))->c_str())
			.fun<static_cast<void (EditorScript::*)(Node *)>(&EditorScript::add_root_node)>((new std::string("add_root_node"))->c_str())
			.fun<static_cast<Node *(EditorScript::*)() const>(&EditorScript::get_scene)>((new std::string("get_scene"))->c_str())
			.fun<static_cast<EditorInterface *(EditorScript::*)() const>(&EditorScript::get_editor_interface)>((new std::string("get_editor_interface"))->c_str());
}