#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream_polyphonic.hpp>

using namespace godot;

void register_classes_AudioStreamPolyphonic() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioStreamPolyphonic>("AudioStreamPolyphonic")
           .constructor<>()
           .property<AudioStreamPolyphonic::get_polyphony, AudioStreamPolyphonic::set_polyphony>("polyphony")
;}