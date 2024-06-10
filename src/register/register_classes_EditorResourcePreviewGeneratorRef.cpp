#include "register/register_classes.h"
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>

using namespace godot;

void register_classes_EditorResourcePreviewGeneratorRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorResourcePreviewGenerator>>("EditorResourcePreviewGeneratorRef").constructor<EditorResourcePreviewGenerator *>();
}