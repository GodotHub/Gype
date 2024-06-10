#include "register/register_classes.h"
#include <godot_cpp/classes/tile_set.hpp>

using namespace godot;

void register_classes_TileSetRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TileSet>>("TileSetRef").constructor<TileSet *>();
}