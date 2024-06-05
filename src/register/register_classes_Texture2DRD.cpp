#include <godot_cpp/classes/texture2drd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_Texture2DRD() {
	qjs::Context::Module &_module = _General;
	_module.class_<Texture2DRD>("Texture2DRD")
			.constructor<>()
			.property<&Texture2DRD::get_texture_rd_rid, &Texture2DRD::set_texture_rd_rid>("texture_rd_rid");
}