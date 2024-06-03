#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_selection.hpp>

using namespace godot;

void register_classes_EditorSelection() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorSelection>("EditorSelection")
           .constructor<>()
		    .fun<static_cast<void(EditorSelection::*)()>(&EditorSelection::clear)>("clear")
		    .fun<static_cast<void(EditorSelection::*)(Node *)>(&EditorSelection::add_node)>("add_node")
		    .fun<static_cast<void(EditorSelection::*)(Node *)>(&EditorSelection::remove_node)>("remove_node")
		    .fun<static_cast<TypedArray<Node>(EditorSelection::*)()>(&EditorSelection::get_selected_nodes)>("get_selected_nodes")
		    .fun<static_cast<TypedArray<Node>(EditorSelection::*)()>(&EditorSelection::get_transformable_selected_nodes)>("get_transformable_selected_nodes")
;}