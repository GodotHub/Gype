#include "register/register_classes.h"
#include <godot_cpp/classes/mesh_texture.hpp>

using namespace godot;

void register_classes_MeshTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MeshTexture>>("MeshTextureRef").constructor<MeshTexture *>();
}