#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Shortcut() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Shortcut>("Shortcut")
			.constructor<>()
			.property<&Shortcut::get_events, &Shortcut::set_events>("events")
			.fun<static_cast<bool (Shortcut::*)() const>(&Shortcut::has_valid_event)>("has_valid_event")
			.fun<static_cast<bool (Shortcut::*)(const Ref<InputEvent> &) const>(&Shortcut::matches_event)>("matches_event")
			.fun<static_cast<String (Shortcut::*)() const>(&Shortcut::get_as_text)>("get_as_text");
}