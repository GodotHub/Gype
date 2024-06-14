#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioBusLayout() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioBusLayout>("AudioBusLayout")
            .constructor<>()
            .base<Resource>()
;}