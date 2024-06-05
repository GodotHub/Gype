#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/scene_state.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PackedScene() {
	qjs::Context::Module &_module = _General;
	_module.class_<PackedScene>("PackedScene")
			.constructor<>()
			.fun<static_cast<Error (PackedScene::*)(Node *)>(&PackedScene::pack)>("pack")
			.fun<static_cast<Node *(PackedScene::*)(PackedScene::GenEditState) const>(&PackedScene::instantiate)>("instantiate")
			.fun<static_cast<bool (PackedScene::*)() const>(&PackedScene::can_instantiate)>("can_instantiate")
			.fun<static_cast<Ref<SceneState> (PackedScene::*)() const>(&PackedScene::get_state)>("get_state");
}