#include <godot_cpp/classes/texture_cubemap_rd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_TextureCubemapRD() {
	qjs::Context::Module &_module = _General;
	_module.class_<TextureCubemapRD>("TextureCubemapRD")
			.constructor<>();
}