#include "register/register_classes.h"
#include <godot_cpp/classes/animated_texture.hpp>

using namespace godot;

void register_classes_AnimatedTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AnimatedTexture>>("AnimatedTextureRef").constructor<AnimatedTexture *>();
}