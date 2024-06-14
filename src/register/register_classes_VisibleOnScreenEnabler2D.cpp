#include <godot_cpp/classes/visible_on_screen_enabler2d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VisibleOnScreenEnabler2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<VisibleOnScreenEnabler2D>("VisibleOnScreenEnabler2D")
			.constructor<>()
			.base<VisibleOnScreenNotifier2D>()
			.property<static_cast<VisibleOnScreenEnabler2D::EnableMode (VisibleOnScreenEnabler2D::*)()>(&VisibleOnScreenEnabler2D::get_enable_mode), static_cast<void (VisibleOnScreenEnabler2D::*)(VisibleOnScreenEnabler2D::EnableMode)>(&VisibleOnScreenEnabler2D::set_enable_mode)>((new std::string("enable_mode"))->c_str())
			.property<static_cast<NodePath (VisibleOnScreenEnabler2D::*)()>(&VisibleOnScreenEnabler2D::get_enable_node_path), static_cast<void (VisibleOnScreenEnabler2D::*)(const NodePath &)>(&VisibleOnScreenEnabler2D::set_enable_node_path)>((new std::string("enable_node_path"))->c_str());
	qjs::Value _EnableMode = context->newObject();
	_EnableMode[(new std::string("ENABLE_MODE_INHERIT"))->c_str()] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_INHERIT;
	_EnableMode[(new std::string("ENABLE_MODE_ALWAYS"))->c_str()] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_ALWAYS;
	_EnableMode[(new std::string("ENABLE_MODE_WHEN_PAUSED"))->c_str()] = VisibleOnScreenEnabler2D::EnableMode::ENABLE_MODE_WHEN_PAUSED;
	_module.add("EnableMode", std::move(_EnableMode));
}