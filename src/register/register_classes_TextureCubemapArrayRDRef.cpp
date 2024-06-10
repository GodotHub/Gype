#include "register/register_classes.h"
#include <godot_cpp/classes/texture_cubemap_array_rd.hpp>

using namespace godot;

void register_classes_TextureCubemapArrayRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextureCubemapArrayRD>>("TextureCubemapArrayRDRef").constructor<TextureCubemapArrayRD *>();
}