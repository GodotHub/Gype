#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Shortcut() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Shortcut>("Shortcut")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Array (Shortcut::*)() const>(&Shortcut::get_events), static_cast<void (Shortcut::*)(const Array &)>(&Shortcut::set_events)>((new std::string("events"))->c_str())
			.fun<static_cast<bool (Shortcut::*)() const>(&Shortcut::has_valid_event)>((new std::string("has_valid_event"))->c_str())
			.fun<static_cast<bool (Shortcut::*)(const Ref<InputEvent> &) const>(&Shortcut::matches_event)>((new std::string("matches_event"))->c_str())
			.fun<static_cast<String (Shortcut::*)() const>(&Shortcut::get_as_text)>((new std::string("get_as_text"))->c_str());
}