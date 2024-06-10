#include "register/register_classes.h"
#include <godot_cpp/classes/bit_map.hpp>

using namespace godot;

void register_classes_BitMapRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<BitMap>>("BitMapRef").constructor<BitMap *>();
}