#include <godot_cpp/classes/audio_listener3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioListener3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<AudioListener3D>("AudioListener3D")
			.constructor<>()
			.base<Node3D>()
			.fun<static_cast<void (AudioListener3D::*)()>(&AudioListener3D::make_current)>((new std::string("make_current"))->c_str())
			.fun<static_cast<void (AudioListener3D::*)()>(&AudioListener3D::clear_current)>((new std::string("clear_current"))->c_str())
			.fun<static_cast<bool (AudioListener3D::*)() const>(&AudioListener3D::is_current)>((new std::string("is_current"))->c_str())
			.fun<static_cast<Transform3D (AudioListener3D::*)() const>(&AudioListener3D::get_listener_transform)>((new std::string("get_listener_transform"))->c_str());
}