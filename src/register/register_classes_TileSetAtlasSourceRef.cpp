#include "register/register_classes.h"
#include <godot_cpp/classes/tile_set_atlas_source.hpp>

using namespace godot;

void register_classes_TileSetAtlasSourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TileSetAtlasSource>>("TileSetAtlasSourceRef").constructor<TileSetAtlasSource *>();
}