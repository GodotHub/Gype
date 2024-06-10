#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_skin.hpp>

using namespace godot;

void register_classes_GLTFSkinRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFSkin>>("GLTFSkinRef").constructor<GLTFSkin *>();
}