#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_InputMap() {
	qjs::Value js_singleton = context->newObject();
    InputMap *singleton = InputMap::get_singleton();
    js_singleton.add("has_action", [singleton](const StringName & action)->bool{return singleton->has_action(action);});
    js_singleton.add("get_actions", [singleton]()->TypedArray<StringName>{return singleton->get_actions();});
    js_singleton.add("add_action", [singleton](const StringName & action,double deadzone)->void{singleton->add_action(action,deadzone);});
    js_singleton.add("erase_action", [singleton](const StringName & action)->void{singleton->erase_action(action);});
    js_singleton.add("action_set_deadzone", [singleton](const StringName & action,double deadzone)->void{singleton->action_set_deadzone(action,deadzone);});
    js_singleton.add("action_get_deadzone", [singleton](const StringName & action)->double{return singleton->action_get_deadzone(action);});
    js_singleton.add("action_add_event", [singleton](const StringName & action,const Ref<InputEvent> & event)->void{singleton->action_add_event(action,event);});
    js_singleton.add("action_has_event", [singleton](const StringName & action,const Ref<InputEvent> & event)->bool{return singleton->action_has_event(action,event);});
    js_singleton.add("action_erase_event", [singleton](const StringName & action,const Ref<InputEvent> & event)->void{singleton->action_erase_event(action,event);});
    js_singleton.add("action_erase_events", [singleton](const StringName & action)->void{singleton->action_erase_events(action);});
    js_singleton.add("action_get_events", [singleton](const StringName & action)->TypedArray<InputEvent>{return singleton->action_get_events(action);});
    js_singleton.add("event_is_action", [singleton](const Ref<InputEvent> & event,const StringName & action,bool exact_match)->bool{return singleton->event_is_action(event,action,exact_match);});
    js_singleton.add("load_from_project_settings", [singleton]()->void{singleton->load_from_project_settings();});
    context->global()["InputMap"] = js_singleton;

}