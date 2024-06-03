#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_command_palette.hpp>

using namespace godot;

void register_classes_EditorCommandPalette() {
    qjs::Context::Module &_module = _Node;
    _module.class_<EditorCommandPalette>("EditorCommandPalette")
           .constructor<>()
		    .fun<static_cast<void(EditorCommandPalette::*)(const String &,const String &,const Callable &,const String &)>(&EditorCommandPalette::add_command)>("add_command")
		    .fun<static_cast<void(EditorCommandPalette::*)(const String &)>(&EditorCommandPalette::remove_command)>("remove_command")
;}