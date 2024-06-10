#include "register/register_classes.h"
#include <godot_cpp/classes/render_scene_buffers.hpp>

using namespace godot;

void register_classes_RenderSceneBuffersRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RenderSceneBuffers>>("RenderSceneBuffersRef").constructor<RenderSceneBuffers *>();
}