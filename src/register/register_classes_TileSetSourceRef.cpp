#include "register/register_classes.h"
#include <godot_cpp/classes/tile_set_source.hpp>

using namespace godot;

void register_classes_TileSetSourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TileSetSource>>("TileSetSourceRef").constructor<TileSetSource *>();
}