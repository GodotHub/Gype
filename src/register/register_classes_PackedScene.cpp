#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PackedScene() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PackedScene>("PackedScene")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (PackedScene::*)(Node *)>(&PackedScene::pack)>((new std::string("pack"))->c_str())
			.fun<static_cast<Node *(PackedScene::*)(PackedScene::GenEditState) const>(&PackedScene::instantiate)>((new std::string("instantiate"))->c_str())
			.fun<static_cast<bool (PackedScene::*)() const>(&PackedScene::can_instantiate)>((new std::string("can_instantiate"))->c_str())
			.fun<static_cast<Ref<SceneState> (PackedScene::*)() const>(&PackedScene::get_state)>((new std::string("get_state"))->c_str());
	qjs::Value _GenEditState = context->newObject();
	_GenEditState[(new std::string("GEN_EDIT_STATE_DISABLED"))->c_str()] = PackedScene::GenEditState::GEN_EDIT_STATE_DISABLED;
	_GenEditState[(new std::string("GEN_EDIT_STATE_INSTANCE"))->c_str()] = PackedScene::GenEditState::GEN_EDIT_STATE_INSTANCE;
	_GenEditState[(new std::string("GEN_EDIT_STATE_MAIN"))->c_str()] = PackedScene::GenEditState::GEN_EDIT_STATE_MAIN;
	_GenEditState[(new std::string("GEN_EDIT_STATE_MAIN_INHERITED"))->c_str()] = PackedScene::GenEditState::GEN_EDIT_STATE_MAIN_INHERITED;
	_module.add("GenEditState", std::move(_GenEditState));
}