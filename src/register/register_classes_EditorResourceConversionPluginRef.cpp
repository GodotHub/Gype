#include "register/register_classes.h"
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>

using namespace godot;

void register_classes_EditorResourceConversionPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorResourceConversionPlugin>>("EditorResourceConversionPluginRef").constructor<EditorResourceConversionPlugin *>();
}