#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_inspector.hpp>

using namespace godot;

void register_classes_EditorInspector() {
    qjs::Context::Module &_module = _Control;
    _module.class_<EditorInspector>("EditorInspector")
           .constructor<>()
		    .fun<static_cast<String(EditorInspector::*)()const>(&EditorInspector::get_selected_path)>("get_selected_path")
		    .fun<static_cast<Object *(EditorInspector::*)()>(&EditorInspector::get_edited_object)>("get_edited_object")
;}