#include <godot_cpp/classes/visible_on_screen_enabler3d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VisibleOnScreenEnabler3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VisibleOnScreenEnabler3D>("VisibleOnScreenEnabler3D")
			.constructor<>()
			.base<VisibleOnScreenNotifier3D>()
			.property<static_cast<VisibleOnScreenEnabler3D::EnableMode (VisibleOnScreenEnabler3D::*)()>(&VisibleOnScreenEnabler3D::get_enable_mode), static_cast<void (VisibleOnScreenEnabler3D::*)(VisibleOnScreenEnabler3D::EnableMode)>(&VisibleOnScreenEnabler3D::set_enable_mode)>((new std::string("enable_mode"))->c_str())
			.property<static_cast<NodePath (VisibleOnScreenEnabler3D::*)()>(&VisibleOnScreenEnabler3D::get_enable_node_path), static_cast<void (VisibleOnScreenEnabler3D::*)(const NodePath &)>(&VisibleOnScreenEnabler3D::set_enable_node_path)>((new std::string("enable_node_path"))->c_str());
	qjs::Value _EnableMode = context->newObject();
	_EnableMode[(new std::string("ENABLE_MODE_INHERIT"))->c_str()] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_INHERIT;
	_EnableMode[(new std::string("ENABLE_MODE_ALWAYS"))->c_str()] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_ALWAYS;
	_EnableMode[(new std::string("ENABLE_MODE_WHEN_PAUSED"))->c_str()] = VisibleOnScreenEnabler3D::EnableMode::ENABLE_MODE_WHEN_PAUSED;
	_module.add("EnableMode", std::move(_EnableMode));
}