#include <godot_cpp/classes/texture3drd.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Texture3DRD() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Texture3DRD>("Texture3DRD")
			.constructor<>()
			.property<&Texture3DRD::get_texture_rd_rid, &Texture3DRD::set_texture_rd_rid>("texture_rd_rid");
}