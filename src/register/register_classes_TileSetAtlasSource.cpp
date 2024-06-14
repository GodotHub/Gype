
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_set_atlas_source.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileSetAtlasSource() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileSetAtlasSource>("TileSetAtlasSource")
			.constructor<>()
			.base<TileSetSource>()
			.static_fun<&TileSetAtlasSource::TRANSFORM_FLIP_H>((new std::string("TRANSFORM_FLIP_H"))->c_str())
			.static_fun<&TileSetAtlasSource::TRANSFORM_FLIP_V>((new std::string("TRANSFORM_FLIP_V"))->c_str())
			.static_fun<&TileSetAtlasSource::TRANSFORM_TRANSPOSE>((new std::string("TRANSFORM_TRANSPOSE"))->c_str())
			.property<static_cast<Ref<Texture2D> (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_texture), static_cast<void (TileSetAtlasSource::*)(const Ref<Texture2D> &)>(&TileSetAtlasSource::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<Vector2i (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_margins), static_cast<void (TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_margins)>((new std::string("margins"))->c_str())
			.property<static_cast<Vector2i (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_separation), static_cast<void (TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_separation)>((new std::string("separation"))->c_str())
			.property<static_cast<Vector2i (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_texture_region_size), static_cast<void (TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_texture_region_size)>((new std::string("texture_region_size"))->c_str())
			.property<static_cast<bool (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_use_texture_padding), static_cast<void (TileSetAtlasSource::*)(bool)>(&TileSetAtlasSource::set_use_texture_padding)>((new std::string("use_texture_padding"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, const Vector2i &)>(&TileSetAtlasSource::create_tile)>((new std::string("create_tile"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::remove_tile)>((new std::string("remove_tile"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, const Vector2i &, const Vector2i &)>(&TileSetAtlasSource::move_tile_in_atlas)>((new std::string("move_tile_in_atlas"))->c_str())
			.fun<static_cast<Vector2i (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_size_in_atlas)>((new std::string("get_tile_size_in_atlas"))->c_str())
			.fun<static_cast<bool (TileSetAtlasSource::*)(const Vector2i &, const Vector2i &, int32_t, const Vector2i &, int32_t, const Vector2i &) const>(&TileSetAtlasSource::has_room_for_tile)>((new std::string("has_room_for_tile"))->c_str())
			.fun<static_cast<PackedVector2Array (TileSetAtlasSource::*)(const Ref<Texture2D> &, const Vector2i &, const Vector2i &, const Vector2i &)>(&TileSetAtlasSource::get_tiles_to_be_removed_on_change)>((new std::string("get_tiles_to_be_removed_on_change"))->c_str())
			.fun<static_cast<Vector2i (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_at_coords)>((new std::string("get_tile_at_coords"))->c_str())
			.fun<static_cast<bool (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::has_tiles_outside_texture)>((new std::string("has_tiles_outside_texture"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)()>(&TileSetAtlasSource::clear_tiles_outside_texture)>((new std::string("clear_tiles_outside_texture"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, int32_t)>(&TileSetAtlasSource::set_tile_animation_columns)>((new std::string("set_tile_animation_columns"))->c_str())
			.fun<static_cast<int32_t (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_columns)>((new std::string("get_tile_animation_columns"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, const Vector2i &)>(&TileSetAtlasSource::set_tile_animation_separation)>((new std::string("set_tile_animation_separation"))->c_str())
			.fun<static_cast<Vector2i (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_separation)>((new std::string("get_tile_animation_separation"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, double)>(&TileSetAtlasSource::set_tile_animation_speed)>((new std::string("set_tile_animation_speed"))->c_str())
			.fun<static_cast<double (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_speed)>((new std::string("get_tile_animation_speed"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, TileSetAtlasSource::TileAnimationMode)>(&TileSetAtlasSource::set_tile_animation_mode)>((new std::string("set_tile_animation_mode"))->c_str())
			.fun<static_cast<TileSetAtlasSource::TileAnimationMode (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_mode)>((new std::string("get_tile_animation_mode"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, int32_t)>(&TileSetAtlasSource::set_tile_animation_frames_count)>((new std::string("set_tile_animation_frames_count"))->c_str())
			.fun<static_cast<int32_t (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_frames_count)>((new std::string("get_tile_animation_frames_count"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, int32_t, double)>(&TileSetAtlasSource::set_tile_animation_frame_duration)>((new std::string("set_tile_animation_frame_duration"))->c_str())
			.fun<static_cast<double (TileSetAtlasSource::*)(const Vector2i &, int32_t) const>(&TileSetAtlasSource::get_tile_animation_frame_duration)>((new std::string("get_tile_animation_frame_duration"))->c_str())
			.fun<static_cast<double (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_tile_animation_total_duration)>((new std::string("get_tile_animation_total_duration"))->c_str())
			.fun<static_cast<int32_t (TileSetAtlasSource::*)(const Vector2i &, int32_t)>(&TileSetAtlasSource::create_alternative_tile)>((new std::string("create_alternative_tile"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, int32_t)>(&TileSetAtlasSource::remove_alternative_tile)>((new std::string("remove_alternative_tile"))->c_str())
			.fun<static_cast<void (TileSetAtlasSource::*)(const Vector2i &, int32_t, int32_t)>(&TileSetAtlasSource::set_alternative_tile_id)>((new std::string("set_alternative_tile_id"))->c_str())
			.fun<static_cast<int32_t (TileSetAtlasSource::*)(const Vector2i &) const>(&TileSetAtlasSource::get_next_alternative_tile_id)>((new std::string("get_next_alternative_tile_id"))->c_str())
			.fun<static_cast<TileData *(TileSetAtlasSource::*)(const Vector2i &, int32_t) const>(&TileSetAtlasSource::get_tile_data)>((new std::string("get_tile_data"))->c_str())
			.fun<static_cast<Vector2i (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_atlas_grid_size)>((new std::string("get_atlas_grid_size"))->c_str())
			.fun<static_cast<Rect2i (TileSetAtlasSource::*)(const Vector2i &, int32_t) const>(&TileSetAtlasSource::get_tile_texture_region)>((new std::string("get_tile_texture_region"))->c_str())
			.fun<static_cast<Ref<Texture2D> (TileSetAtlasSource::*)() const>(&TileSetAtlasSource::get_runtime_texture)>((new std::string("get_runtime_texture"))->c_str())
			.fun<static_cast<Rect2i (TileSetAtlasSource::*)(const Vector2i &, int32_t) const>(&TileSetAtlasSource::get_runtime_tile_texture_region)>((new std::string("get_runtime_tile_texture_region"))->c_str());
	qjs::Value _TileAnimationMode = context->newObject();
	_TileAnimationMode[(new std::string("TILE_ANIMATION_MODE_DEFAULT"))->c_str()] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_DEFAULT;
	_TileAnimationMode[(new std::string("TILE_ANIMATION_MODE_RANDOM_START_TIMES"))->c_str()] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_RANDOM_START_TIMES;
	_TileAnimationMode[(new std::string("TILE_ANIMATION_MODE_MAX"))->c_str()] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_MAX;
	_module.add("TileAnimationMode", std::move(_TileAnimationMode));
}