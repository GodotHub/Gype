#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorCommandPalette() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<EditorCommandPalette>("EditorCommandPalette")
			.constructor<>()
			.base<ConfirmationDialog>()
			.fun<static_cast<void (EditorCommandPalette::*)(const String &, const String &, const Callable &, const String &)>(&EditorCommandPalette::add_command)>((new std::string("add_command"))->c_str())
			.fun<static_cast<void (EditorCommandPalette::*)(const String &)>(&EditorCommandPalette::remove_command)>((new std::string("remove_command"))->c_str());
}