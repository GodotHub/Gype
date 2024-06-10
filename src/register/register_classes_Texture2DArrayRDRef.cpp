#include "register/register_classes.h"
#include <godot_cpp/classes/texture2d_array_rd.hpp>

using namespace godot;

void register_classes_Texture2DArrayRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Texture2DArrayRD>>("Texture2DArrayRDRef").constructor<Texture2DArrayRD *>();
}