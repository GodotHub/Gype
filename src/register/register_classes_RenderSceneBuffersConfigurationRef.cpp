#include "register/register_classes.h"
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>

using namespace godot;

void register_classes_RenderSceneBuffersConfigurationRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RenderSceneBuffersConfiguration>>("RenderSceneBuffersConfigurationRef").constructor<RenderSceneBuffersConfiguration *>();
}