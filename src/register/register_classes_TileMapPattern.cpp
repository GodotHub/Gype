
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileMapPattern() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileMapPattern>("TileMapPattern")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (TileMapPattern::*)(const Vector2i &, int32_t, const Vector2i &, int32_t)>(&TileMapPattern::set_cell)>((new std::string("set_cell"))->c_str())
			.fun<static_cast<bool (TileMapPattern::*)(const Vector2i &) const>(&TileMapPattern::has_cell)>((new std::string("has_cell"))->c_str())
			.fun<static_cast<void (TileMapPattern::*)(const Vector2i &, bool)>(&TileMapPattern::remove_cell)>((new std::string("remove_cell"))->c_str())
			.fun<static_cast<int32_t (TileMapPattern::*)(const Vector2i &) const>(&TileMapPattern::get_cell_source_id)>((new std::string("get_cell_source_id"))->c_str())
			.fun<static_cast<Vector2i (TileMapPattern::*)(const Vector2i &) const>(&TileMapPattern::get_cell_atlas_coords)>((new std::string("get_cell_atlas_coords"))->c_str())
			.fun<static_cast<int32_t (TileMapPattern::*)(const Vector2i &) const>(&TileMapPattern::get_cell_alternative_tile)>((new std::string("get_cell_alternative_tile"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMapPattern::*)() const>(&TileMapPattern::get_used_cells)>((new std::string("get_used_cells"))->c_str())
			.fun<static_cast<Vector2i (TileMapPattern::*)() const>(&TileMapPattern::get_size)>((new std::string("get_size"))->c_str())
			.fun<static_cast<void (TileMapPattern::*)(const Vector2i &)>(&TileMapPattern::set_size)>((new std::string("set_size"))->c_str())
			.fun<static_cast<bool (TileMapPattern::*)() const>(&TileMapPattern::is_empty)>((new std::string("is_empty"))->c_str());
}