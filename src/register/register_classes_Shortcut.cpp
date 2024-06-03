#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/shortcut.hpp>

using namespace godot;

void register_classes_Shortcut() {
    qjs::Context::Module &_module = _General;
    _module.class_<Shortcut>("Shortcut")
           .constructor<>()
           .property<Shortcut::get_events, Shortcut::set_events>("events")
		    .fun<static_cast<bool(Shortcut::*)()const>(&Shortcut::has_valid_event)>("has_valid_event")
		    .fun<static_cast<bool(Shortcut::*)(const Ref<InputEvent> &)const>(&Shortcut::matches_event)>("matches_event")
		    .fun<static_cast<String(Shortcut::*)()const>(&Shortcut::get_as_text)>("get_as_text")
;}