#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_texture3d.hpp>

using namespace godot;

void register_classes_PlaceholderTexture3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderTexture3D>>("PlaceholderTexture3DRef").constructor<PlaceholderTexture3D *>();
}