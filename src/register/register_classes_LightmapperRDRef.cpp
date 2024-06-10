#include "register/register_classes.h"
#include <godot_cpp/classes/lightmapper_rd.hpp>

using namespace godot;

void register_classes_LightmapperRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<LightmapperRD>>("LightmapperRDRef").constructor<LightmapperRD *>();
}