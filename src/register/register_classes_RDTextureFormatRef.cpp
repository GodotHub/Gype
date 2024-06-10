#include "register/register_classes.h"
#include <godot_cpp/classes/rd_texture_format.hpp>

using namespace godot;

void register_classes_RDTextureFormatRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RDTextureFormat>>("RDTextureFormatRef").constructor<RDTextureFormat *>();
}