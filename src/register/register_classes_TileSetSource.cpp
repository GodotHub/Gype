#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileSetSource() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TileSetSource>("TileSetSource")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<int32_t(TileSetSource::*)()const>(&TileSetSource::get_tiles_count)>("get_tiles_count")
            .fun<static_cast<Vector2i(TileSetSource::*)(int32_t)const>(&TileSetSource::get_tile_id)>("get_tile_id")
            .fun<static_cast<bool(TileSetSource::*)(const Vector2i &)const>(&TileSetSource::has_tile)>("has_tile")
            .fun<static_cast<int32_t(TileSetSource::*)(const Vector2i &)const>(&TileSetSource::get_alternative_tiles_count)>("get_alternative_tiles_count")
            .fun<static_cast<int32_t(TileSetSource::*)(const Vector2i &,int32_t)const>(&TileSetSource::get_alternative_tile_id)>("get_alternative_tile_id")
            .fun<static_cast<bool(TileSetSource::*)(const Vector2i &,int32_t)const>(&TileSetSource::has_alternative_tile)>("has_alternative_tile")
;}