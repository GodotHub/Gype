#include "register/register_classes.h"
#include <godot_cpp/classes/lightmap_gi_data.hpp>

using namespace godot;

void register_classes_LightmapGIDataRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<LightmapGIData>>("LightmapGIDataRef").constructor<LightmapGIData *>();
}