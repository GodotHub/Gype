#include "register/register_classes.h"
#include <godot_cpp/classes/scene_tree_timer.hpp>

using namespace godot;

void register_classes_SceneTreeTimerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SceneTreeTimer>>("SceneTreeTimerRef").constructor<SceneTreeTimer *>();
}