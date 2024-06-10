#include "register/register_classes.h"
#include <godot_cpp/classes/scene_state.hpp>

using namespace godot;

void register_classes_SceneStateRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SceneState>>("SceneStateRef").constructor<SceneState *>();
}