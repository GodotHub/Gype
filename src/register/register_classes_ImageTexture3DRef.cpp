#include "register/register_classes.h"
#include <godot_cpp/classes/image_texture3d.hpp>

using namespace godot;

void register_classes_ImageTexture3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImageTexture3D>>("ImageTexture3DRef").constructor<ImageTexture3D *>();
}