#include <godot_cpp/classes/lightmapper_rd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_LightmapperRD() {
	qjs::Context::Module &_module = _General;
	_module.class_<LightmapperRD>("LightmapperRD")
			.constructor<>();
}