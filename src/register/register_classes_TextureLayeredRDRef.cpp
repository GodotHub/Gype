#include "register/register_classes.h"
#include <godot_cpp/classes/texture_layered_rd.hpp>

using namespace godot;

void register_classes_TextureLayeredRDRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextureLayeredRD>>("TextureLayeredRDRef").constructor<TextureLayeredRD *>();
}