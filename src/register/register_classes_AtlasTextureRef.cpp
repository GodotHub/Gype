#include "register/register_classes.h"
#include <godot_cpp/classes/atlas_texture.hpp>

using namespace godot;

void register_classes_AtlasTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AtlasTexture>>("AtlasTextureRef").constructor<AtlasTexture *>();
}