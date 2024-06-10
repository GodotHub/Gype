#include "register/register_classes.h"
#include <godot_cpp/classes/render_scene_buffers_extension.hpp>

using namespace godot;

void register_classes_RenderSceneBuffersExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RenderSceneBuffersExtension>>("RenderSceneBuffersExtensionRef").constructor<RenderSceneBuffersExtension *>();
}