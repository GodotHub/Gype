#include "register/register_classes.h"
#include <godot_cpp/classes/scene_replication_config.hpp>

using namespace godot;

void register_classes_SceneReplicationConfigRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SceneReplicationConfig>>("SceneReplicationConfigRef").constructor<SceneReplicationConfig *>();
}