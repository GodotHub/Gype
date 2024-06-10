#include "register/register_classes.h"
#include <godot_cpp/classes/sprite_frames.hpp>

using namespace godot;

void register_classes_SpriteFramesRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SpriteFrames>>("SpriteFramesRef").constructor<SpriteFrames *>();
}