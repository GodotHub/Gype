#include <godot_cpp/classes/fbx_state.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_FBXState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<FBXState>("FBXState")
			.constructor<>()
			.base<GLTFState>()
			.property<static_cast<bool (FBXState::*)()>(&FBXState::get_allow_geometry_helper_nodes), static_cast<void (FBXState::*)(bool)>(&FBXState::set_allow_geometry_helper_nodes)>((new std::string("allow_geometry_helper_nodes"))->c_str());
}