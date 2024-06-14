
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileSetSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileSetSource>("TileSetSource")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<int32_t (TileSetSource::*)() const>(&TileSetSource::get_tiles_count)>((new std::string("get_tiles_count"))->c_str())
			.fun<static_cast<Vector2i (TileSetSource::*)(int32_t) const>(&TileSetSource::get_tile_id)>((new std::string("get_tile_id"))->c_str())
			.fun<static_cast<bool (TileSetSource::*)(const Vector2i &) const>(&TileSetSource::has_tile)>((new std::string("has_tile"))->c_str())
			.fun<static_cast<int32_t (TileSetSource::*)(const Vector2i &) const>(&TileSetSource::get_alternative_tiles_count)>((new std::string("get_alternative_tiles_count"))->c_str())
			.fun<static_cast<int32_t (TileSetSource::*)(const Vector2i &, int32_t) const>(&TileSetSource::get_alternative_tile_id)>((new std::string("get_alternative_tile_id"))->c_str())
			.fun<static_cast<bool (TileSetSource::*)(const Vector2i &, int32_t) const>(&TileSetSource::has_alternative_tile)>((new std::string("has_alternative_tile"))->c_str());
}