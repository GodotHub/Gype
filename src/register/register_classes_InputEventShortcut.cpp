#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_shortcut.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventShortcut() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventShortcut>("InputEventShortcut")
			.constructor<>()
			.base<InputEvent>()
			.property<static_cast<Ref<Shortcut> (InputEventShortcut::*)()>(&InputEventShortcut::get_shortcut), static_cast<void (InputEventShortcut::*)(const Ref<Shortcut> &)>(&InputEventShortcut::set_shortcut)>((new std::string("shortcut"))->c_str());
}