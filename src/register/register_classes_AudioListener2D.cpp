#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AudioListener2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<AudioListener2D>("AudioListener2D")
           .constructor<>()
		   .fun<static_cast<void(AudioListener2D::*)()>(&AudioListener2D::make_current)>("make_current")
		   .fun<static_cast<void(AudioListener2D::*)()>(&AudioListener2D::clear_current)>("clear_current")
		   .fun<static_cast<bool(AudioListener2D::*)()const>(&AudioListener2D::is_current)>("is_current")
;}