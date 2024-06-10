#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileSetScenesCollectionSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileSetScenesCollectionSource>("TileSetScenesCollectionSource")
			.constructor<>()
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)()>(&TileSetScenesCollectionSource::get_scene_tiles_count)>("get_scene_tiles_count")
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::get_scene_tile_id)>("get_scene_tile_id")
			.fun<static_cast<bool (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::has_scene_tile_id)>("has_scene_tile_id")
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)(const Ref<PackedScene> &, int32_t)>(&TileSetScenesCollectionSource::create_scene_tile)>("create_scene_tile")
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, int32_t)>(&TileSetScenesCollectionSource::set_scene_tile_id)>("set_scene_tile_id")
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, const Ref<PackedScene> &)>(&TileSetScenesCollectionSource::set_scene_tile_scene)>("set_scene_tile_scene")
			.fun<static_cast<Ref<PackedScene> (TileSetScenesCollectionSource::*)(int32_t) const>(&TileSetScenesCollectionSource::get_scene_tile_scene)>("get_scene_tile_scene")
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, bool)>(&TileSetScenesCollectionSource::set_scene_tile_display_placeholder)>("set_scene_tile_display_placeholder")
			.fun<static_cast<bool (TileSetScenesCollectionSource::*)(int32_t) const>(&TileSetScenesCollectionSource::get_scene_tile_display_placeholder)>("get_scene_tile_display_placeholder")
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::remove_scene_tile)>("remove_scene_tile")
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)() const>(&TileSetScenesCollectionSource::get_next_scene_tile_id)>("get_next_scene_tile_id");
}