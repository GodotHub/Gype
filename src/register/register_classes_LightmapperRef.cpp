#include "register/register_classes.h"
#include <godot_cpp/classes/lightmapper.hpp>

using namespace godot;

void register_classes_LightmapperRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Lightmapper>>("LightmapperRef").constructor<Lightmapper *>();
}