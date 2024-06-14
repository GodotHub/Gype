
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileSetScenesCollectionSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileSetScenesCollectionSource>("TileSetScenesCollectionSource")
			.constructor<>()
			.base<TileSetSource>()
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)()>(&TileSetScenesCollectionSource::get_scene_tiles_count)>((new std::string("get_scene_tiles_count"))->c_str())
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::get_scene_tile_id)>((new std::string("get_scene_tile_id"))->c_str())
			.fun<static_cast<bool (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::has_scene_tile_id)>((new std::string("has_scene_tile_id"))->c_str())
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)(const Ref<PackedScene> &, int32_t)>(&TileSetScenesCollectionSource::create_scene_tile)>((new std::string("create_scene_tile"))->c_str())
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, int32_t)>(&TileSetScenesCollectionSource::set_scene_tile_id)>((new std::string("set_scene_tile_id"))->c_str())
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, const Ref<PackedScene> &)>(&TileSetScenesCollectionSource::set_scene_tile_scene)>((new std::string("set_scene_tile_scene"))->c_str())
			.fun<static_cast<Ref<PackedScene> (TileSetScenesCollectionSource::*)(int32_t) const>(&TileSetScenesCollectionSource::get_scene_tile_scene)>((new std::string("get_scene_tile_scene"))->c_str())
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t, bool)>(&TileSetScenesCollectionSource::set_scene_tile_display_placeholder)>((new std::string("set_scene_tile_display_placeholder"))->c_str())
			.fun<static_cast<bool (TileSetScenesCollectionSource::*)(int32_t) const>(&TileSetScenesCollectionSource::get_scene_tile_display_placeholder)>((new std::string("get_scene_tile_display_placeholder"))->c_str())
			.fun<static_cast<void (TileSetScenesCollectionSource::*)(int32_t)>(&TileSetScenesCollectionSource::remove_scene_tile)>((new std::string("remove_scene_tile"))->c_str())
			.fun<static_cast<int32_t (TileSetScenesCollectionSource::*)() const>(&TileSetScenesCollectionSource::get_next_scene_tile_id)>((new std::string("get_next_scene_tile_id"))->c_str());
}