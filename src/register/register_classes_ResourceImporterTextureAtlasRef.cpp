#include "register/register_classes.h"
#include <godot_cpp/classes/resource_importer_texture_atlas.hpp>

using namespace godot;

void register_classes_ResourceImporterTextureAtlasRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ResourceImporterTextureAtlas>>("ResourceImporterTextureAtlasRef").constructor<ResourceImporterTextureAtlas *>();
}