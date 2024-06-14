#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/status_indicator.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StatusIndicator() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<StatusIndicator>("StatusIndicator")
			.constructor<>()
			.base<Node>()
			.property<static_cast<String (StatusIndicator::*)() const>(&StatusIndicator::get_tooltip), static_cast<void (StatusIndicator::*)(const String &)>(&StatusIndicator::set_tooltip)>((new std::string("tooltip"))->c_str())
			.property<static_cast<Ref<Texture2D> (StatusIndicator::*)() const>(&StatusIndicator::get_icon), static_cast<void (StatusIndicator::*)(const Ref<Texture2D> &)>(&StatusIndicator::set_icon)>((new std::string("icon"))->c_str())
			.property<static_cast<NodePath (StatusIndicator::*)() const>(&StatusIndicator::get_menu), static_cast<void (StatusIndicator::*)(const NodePath &)>(&StatusIndicator::set_menu)>((new std::string("menu"))->c_str())
			.property<static_cast<bool (StatusIndicator::*)() const>(&StatusIndicator::is_visible), static_cast<void (StatusIndicator::*)(bool)>(&StatusIndicator::set_visible)>((new std::string("visible"))->c_str())
			.fun<static_cast<Rect2 (StatusIndicator::*)() const>(&StatusIndicator::get_rect)>((new std::string("get_rect"))->c_str());
}