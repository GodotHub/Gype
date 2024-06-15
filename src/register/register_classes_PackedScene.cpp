#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PackedScene() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PackedScene>("PackedScene")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Error(PackedScene::*)(Node *)>(&PackedScene::pack)>("pack")
            .fun<static_cast<Node *(PackedScene::*)(PackedScene::GenEditState)const>(&PackedScene::instantiate)>("instantiate")
            .fun<static_cast<bool(PackedScene::*)()const>(&PackedScene::can_instantiate)>("can_instantiate")
            .fun<static_cast<Ref<SceneState>(PackedScene::*)()const>(&PackedScene::get_state)>("get_state")
;    qjs::Value _GenEditState = context->newObject();
    _GenEditState["GEN_EDIT_STATE_DISABLED"] = PackedScene::GenEditState::GEN_EDIT_STATE_DISABLED;
    _GenEditState["GEN_EDIT_STATE_INSTANCE"] = PackedScene::GenEditState::GEN_EDIT_STATE_INSTANCE;
    _GenEditState["GEN_EDIT_STATE_MAIN"] = PackedScene::GenEditState::GEN_EDIT_STATE_MAIN;
    _GenEditState["GEN_EDIT_STATE_MAIN_INHERITED"] = PackedScene::GenEditState::GEN_EDIT_STATE_MAIN_INHERITED;
    _module.add("GenEditState", std::move(_GenEditState));
}