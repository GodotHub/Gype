#include "register/register_classes.h"
#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>

using namespace godot;

void register_classes_TileSetScenesCollectionSourceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TileSetScenesCollectionSource>>("TileSetScenesCollectionSourceRef").constructor<TileSetScenesCollectionSource *>();
}