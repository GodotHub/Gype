#include "register/register_classes.h"
#include <godot_cpp/classes/tile_map_pattern.hpp>

using namespace godot;

void register_classes_TileMapPatternRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TileMapPattern>>("TileMapPatternRef").constructor<TileMapPattern *>();
}