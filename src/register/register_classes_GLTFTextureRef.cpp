#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_texture.hpp>

using namespace godot;

void register_classes_GLTFTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFTexture>>("GLTFTextureRef").constructor<GLTFTexture *>();
}