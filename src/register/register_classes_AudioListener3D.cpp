#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AudioListener3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<AudioListener3D>("AudioListener3D")
           .constructor<>()
		   .fun<static_cast<void(AudioListener3D::*)()>(&AudioListener3D::make_current)>("make_current")
		   .fun<static_cast<void(AudioListener3D::*)()>(&AudioListener3D::clear_current)>("clear_current")
		   .fun<static_cast<bool(AudioListener3D::*)()const>(&AudioListener3D::is_current)>("is_current")
		   .fun<static_cast<Transform3D(AudioListener3D::*)()const>(&AudioListener3D::get_listener_transform)>("get_listener_transform")
;}