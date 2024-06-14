#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_InputMap() {
	qjs::Value js_singleton = context->newObject();
	InputMap *singleton = InputMap::get_singleton();
	js_singleton.add((new std::string("has_action"))->c_str(), [singleton](const StringName &action) -> bool { return singleton->has_action(action); });
	js_singleton.add((new std::string("get_actions"))->c_str(), [singleton]() -> TypedArray<StringName> { return singleton->get_actions(); });
	js_singleton.add((new std::string("add_action"))->c_str(), [singleton](const StringName &action, double deadzone) -> void { singleton->add_action(action, deadzone); });
	js_singleton.add((new std::string("erase_action"))->c_str(), [singleton](const StringName &action) -> void { singleton->erase_action(action); });
	js_singleton.add((new std::string("action_set_deadzone"))->c_str(), [singleton](const StringName &action, double deadzone) -> void { singleton->action_set_deadzone(action, deadzone); });
	js_singleton.add((new std::string("action_get_deadzone"))->c_str(), [singleton](const StringName &action) -> double { return singleton->action_get_deadzone(action); });
	js_singleton.add((new std::string("action_add_event"))->c_str(), [singleton](const StringName &action, const Ref<InputEvent> &event) -> void { singleton->action_add_event(action, event); });
	js_singleton.add((new std::string("action_has_event"))->c_str(), [singleton](const StringName &action, const Ref<InputEvent> &event) -> bool { return singleton->action_has_event(action, event); });
	js_singleton.add((new std::string("action_erase_event"))->c_str(), [singleton](const StringName &action, const Ref<InputEvent> &event) -> void { singleton->action_erase_event(action, event); });
	js_singleton.add((new std::string("action_erase_events"))->c_str(), [singleton](const StringName &action) -> void { singleton->action_erase_events(action); });
	js_singleton.add((new std::string("action_get_events"))->c_str(), [singleton](const StringName &action) -> TypedArray<InputEvent> { return singleton->action_get_events(action); });
	js_singleton.add((new std::string("event_is_action"))->c_str(), [singleton](const Ref<InputEvent> &event, const StringName &action, bool exact_match) -> bool { return singleton->event_is_action(event, action, exact_match); });
	js_singleton.add((new std::string("load_from_project_settings"))->c_str(), [singleton]() -> void { singleton->load_from_project_settings(); });
	context->global()[(new std::string("InputMap"))->c_str()] = js_singleton;
}