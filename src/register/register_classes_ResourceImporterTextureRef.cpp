#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_texture.hpp>

using namespace godot;

void register_classes_ResourceImporterTextureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterTexture>>("ResourceImporterTextureRef").constructor<ResourceImporterTexture *>();
}