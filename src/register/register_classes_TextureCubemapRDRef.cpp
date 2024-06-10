#include "register/register_classes.h"
#include <godot_cpp/classes/texture_cubemap_rd.hpp>

using namespace godot;

void register_classes_TextureCubemapRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextureCubemapRD>>("TextureCubemapRDRef").constructor<TextureCubemapRD *>();
}