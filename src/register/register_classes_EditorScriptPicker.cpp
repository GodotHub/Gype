#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_script_picker.hpp>

using namespace godot;

void register_classes_EditorScriptPicker() {
    qjs::Context::Module &_module = _Control;
    _module.class_<EditorScriptPicker>("EditorScriptPicker")
           .constructor<>()
           .property<EditorScriptPicker::get_script_owner, EditorScriptPicker::set_script_owner>("script_owner")
;}