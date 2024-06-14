
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEvent() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEvent>("InputEvent")
			.constructor<>()
			.base<Resource>()
			.static_fun<&InputEvent::DEVICE_ID_EMULATION>((new std::string("DEVICE_ID_EMULATION"))->c_str())
			.property<static_cast<int32_t (InputEvent::*)() const>(&InputEvent::get_device), static_cast<void (InputEvent::*)(int32_t)>(&InputEvent::set_device)>((new std::string("device"))->c_str())
			.fun<static_cast<bool (InputEvent::*)(const StringName &, bool) const>(&InputEvent::is_action)>((new std::string("is_action"))->c_str())
			.fun<static_cast<bool (InputEvent::*)(const StringName &, bool, bool) const>(&InputEvent::is_action_pressed)>((new std::string("is_action_pressed"))->c_str())
			.fun<static_cast<bool (InputEvent::*)(const StringName &, bool) const>(&InputEvent::is_action_released)>((new std::string("is_action_released"))->c_str())
			.fun<static_cast<double (InputEvent::*)(const StringName &, bool) const>(&InputEvent::get_action_strength)>((new std::string("get_action_strength"))->c_str())
			.fun<static_cast<bool (InputEvent::*)() const>(&InputEvent::is_canceled)>((new std::string("is_canceled"))->c_str())
			.fun<static_cast<bool (InputEvent::*)() const>(&InputEvent::is_pressed)>((new std::string("is_pressed"))->c_str())
			.fun<static_cast<bool (InputEvent::*)() const>(&InputEvent::is_released)>((new std::string("is_released"))->c_str())
			.fun<static_cast<bool (InputEvent::*)() const>(&InputEvent::is_echo)>((new std::string("is_echo"))->c_str())
			.fun<static_cast<String (InputEvent::*)() const>(&InputEvent::as_text)>((new std::string("as_text"))->c_str())
			.fun<static_cast<bool (InputEvent::*)(const Ref<InputEvent> &, bool) const>(&InputEvent::is_match)>((new std::string("is_match"))->c_str())
			.fun<static_cast<bool (InputEvent::*)() const>(&InputEvent::is_action_type)>((new std::string("is_action_type"))->c_str())
			.fun<static_cast<bool (InputEvent::*)(const Ref<InputEvent> &)>(&InputEvent::accumulate)>((new std::string("accumulate"))->c_str())
			.fun<static_cast<Ref<InputEvent> (InputEvent::*)(const Transform2D &, const Vector2 &) const>(&InputEvent::xformed_by)>((new std::string("xformed_by"))->c_str());
}