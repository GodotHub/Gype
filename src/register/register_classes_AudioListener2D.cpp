#include <godot_cpp/classes/audio_listener2d.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioListener2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<AudioListener2D>("AudioListener2D")
            .constructor<>()
            .base<Node2D>()
            .fun<static_cast<void(AudioListener2D::*)()>(&AudioListener2D::make_current)>("make_current")
            .fun<static_cast<void(AudioListener2D::*)()>(&AudioListener2D::clear_current)>("clear_current")
            .fun<static_cast<bool(AudioListener2D::*)()const>(&AudioListener2D::is_current)>("is_current")
;}