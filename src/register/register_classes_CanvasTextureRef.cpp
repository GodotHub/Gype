#include "register/register_classes.h"
#include <godot_cpp/classes/canvas_texture.hpp>

using namespace godot;

void register_classes_CanvasTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CanvasTexture>>("CanvasTextureRef").constructor<CanvasTexture *>();
}