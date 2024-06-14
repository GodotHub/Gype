#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSelection() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSelection>("EditorSelection")
			.constructor<>()
			.base<Object>()
			.fun<static_cast<void (EditorSelection::*)()>(&EditorSelection::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (EditorSelection::*)(Node *)>(&EditorSelection::add_node)>((new std::string("add_node"))->c_str())
			.fun<static_cast<void (EditorSelection::*)(Node *)>(&EditorSelection::remove_node)>((new std::string("remove_node"))->c_str())
			.fun<static_cast<TypedArray<Node> (EditorSelection::*)()>(&EditorSelection::get_selected_nodes)>((new std::string("get_selected_nodes"))->c_str())
			.fun<static_cast<TypedArray<Node> (EditorSelection::*)()>(&EditorSelection::get_transformable_selected_nodes)>((new std::string("get_transformable_selected_nodes"))->c_str());
}