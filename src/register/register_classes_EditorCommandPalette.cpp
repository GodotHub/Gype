#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorCommandPalette() {
	qjs::Context::Module &_module = _Node;
	_module.class_<EditorCommandPalette>("EditorCommandPalette")
			.constructor<>()
			.fun<static_cast<void (EditorCommandPalette::*)(const String &, const String &, const Callable &, const String &)>(&EditorCommandPalette::add_command)>("add_command")
			.fun<static_cast<void (EditorCommandPalette::*)(const String &)>(&EditorCommandPalette::remove_command)>("remove_command");
}