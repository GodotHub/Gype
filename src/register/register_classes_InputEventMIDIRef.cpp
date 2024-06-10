#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_midi.hpp>

using namespace godot;

void register_classes_InputEventMIDIRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventMIDI>>("InputEventMIDIRef").constructor<InputEventMIDI *>();
}