#include "register/register_classes.h"
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>

using namespace godot;

void register_classes_EditorResourceTooltipPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorResourceTooltipPlugin>>("EditorResourceTooltipPluginRef").constructor<EditorResourceTooltipPlugin *>();
}