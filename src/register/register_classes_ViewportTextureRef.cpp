#include "register/register_classes.h"
#include <godot_cpp/classes/viewport_texture.hpp>

using namespace godot;

void register_classes_ViewportTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ViewportTexture>>("ViewportTextureRef").constructor<ViewportTexture *>();
}