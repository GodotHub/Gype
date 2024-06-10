#include "register/register_classes.h"
#include <godot_cpp/classes/render_scene_buffers_rd.hpp>

using namespace godot;

void register_classes_RenderSceneBuffersRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RenderSceneBuffersRD>>("RenderSceneBuffersRDRef").constructor<RenderSceneBuffersRD *>();
}