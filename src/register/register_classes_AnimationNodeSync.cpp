#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationNodeSync() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationNodeSync>("AnimationNodeSync")
			.constructor<>()
			.base<AnimationNode>()
			.property<static_cast<bool (AnimationNodeSync::*)() const>(&AnimationNodeSync::is_using_sync), static_cast<void (AnimationNodeSync::*)(bool)>(&AnimationNodeSync::set_use_sync)>((new std::string("sync"))->c_str());
}