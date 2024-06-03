#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_bus_layout.hpp>

using namespace godot;

void register_classes_AudioBusLayout() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioBusLayout>("AudioBusLayout")
           .constructor<>()
;}