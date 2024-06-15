#include <godot_cpp/classes/tile_set_atlas_source.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileSetAtlasSource() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TileSetAtlasSource>("TileSetAtlasSource")
            .constructor<>()
            .base<TileSetSource>()
            .static_fun<&TileSetAtlasSource::TRANSFORM_FLIP_H>("TRANSFORM_FLIP_H")
            .static_fun<&TileSetAtlasSource::TRANSFORM_FLIP_V>("TRANSFORM_FLIP_V")
            .static_fun<&TileSetAtlasSource::TRANSFORM_TRANSPOSE>("TRANSFORM_TRANSPOSE")
            .property<static_cast<Ref<Texture2D>(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_texture),static_cast<void(TileSetAtlasSource::*)(const Ref<Texture2D> &)>(&TileSetAtlasSource::set_texture)>("texture")
            .property<static_cast<Vector2i(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_margins),static_cast<void(TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_margins)>("margins")
            .property<static_cast<Vector2i(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_separation),static_cast<void(TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_separation)>("separation")
            .property<static_cast<Vector2i(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_texture_region_size),static_cast<void(TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::set_texture_region_size)>("texture_region_size")
            .property<static_cast<bool(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_use_texture_padding),static_cast<void(TileSetAtlasSource::*)(bool)>(&TileSetAtlasSource::set_use_texture_padding)>("use_texture_padding")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,const Vector2i &)>(&TileSetAtlasSource::create_tile)>("create_tile")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &)>(&TileSetAtlasSource::remove_tile)>("remove_tile")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,const Vector2i &,const Vector2i &)>(&TileSetAtlasSource::move_tile_in_atlas)>("move_tile_in_atlas")
            .fun<static_cast<Vector2i(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_size_in_atlas)>("get_tile_size_in_atlas")
            .fun<static_cast<bool(TileSetAtlasSource::*)(const Vector2i &,const Vector2i &,int32_t,const Vector2i &,int32_t,const Vector2i &)const>(&TileSetAtlasSource::has_room_for_tile)>("has_room_for_tile")
            .fun<static_cast<PackedVector2Array(TileSetAtlasSource::*)(const Ref<Texture2D> &,const Vector2i &,const Vector2i &,const Vector2i &)>(&TileSetAtlasSource::get_tiles_to_be_removed_on_change)>("get_tiles_to_be_removed_on_change")
            .fun<static_cast<Vector2i(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_at_coords)>("get_tile_at_coords")
            .fun<static_cast<bool(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::has_tiles_outside_texture)>("has_tiles_outside_texture")
            .fun<static_cast<void(TileSetAtlasSource::*)()>(&TileSetAtlasSource::clear_tiles_outside_texture)>("clear_tiles_outside_texture")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,int32_t)>(&TileSetAtlasSource::set_tile_animation_columns)>("set_tile_animation_columns")
            .fun<static_cast<int32_t(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_columns)>("get_tile_animation_columns")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,const Vector2i &)>(&TileSetAtlasSource::set_tile_animation_separation)>("set_tile_animation_separation")
            .fun<static_cast<Vector2i(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_separation)>("get_tile_animation_separation")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,double)>(&TileSetAtlasSource::set_tile_animation_speed)>("set_tile_animation_speed")
            .fun<static_cast<double(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_speed)>("get_tile_animation_speed")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,TileSetAtlasSource::TileAnimationMode)>(&TileSetAtlasSource::set_tile_animation_mode)>("set_tile_animation_mode")
            .fun<static_cast<TileSetAtlasSource::TileAnimationMode(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_mode)>("get_tile_animation_mode")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,int32_t)>(&TileSetAtlasSource::set_tile_animation_frames_count)>("set_tile_animation_frames_count")
            .fun<static_cast<int32_t(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_frames_count)>("get_tile_animation_frames_count")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,int32_t,double)>(&TileSetAtlasSource::set_tile_animation_frame_duration)>("set_tile_animation_frame_duration")
            .fun<static_cast<double(TileSetAtlasSource::*)(const Vector2i &,int32_t)const>(&TileSetAtlasSource::get_tile_animation_frame_duration)>("get_tile_animation_frame_duration")
            .fun<static_cast<double(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_tile_animation_total_duration)>("get_tile_animation_total_duration")
            .fun<static_cast<int32_t(TileSetAtlasSource::*)(const Vector2i &,int32_t)>(&TileSetAtlasSource::create_alternative_tile)>("create_alternative_tile")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,int32_t)>(&TileSetAtlasSource::remove_alternative_tile)>("remove_alternative_tile")
            .fun<static_cast<void(TileSetAtlasSource::*)(const Vector2i &,int32_t,int32_t)>(&TileSetAtlasSource::set_alternative_tile_id)>("set_alternative_tile_id")
            .fun<static_cast<int32_t(TileSetAtlasSource::*)(const Vector2i &)const>(&TileSetAtlasSource::get_next_alternative_tile_id)>("get_next_alternative_tile_id")
            .fun<static_cast<TileData *(TileSetAtlasSource::*)(const Vector2i &,int32_t)const>(&TileSetAtlasSource::get_tile_data)>("get_tile_data")
            .fun<static_cast<Vector2i(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_atlas_grid_size)>("get_atlas_grid_size")
            .fun<static_cast<Rect2i(TileSetAtlasSource::*)(const Vector2i &,int32_t)const>(&TileSetAtlasSource::get_tile_texture_region)>("get_tile_texture_region")
            .fun<static_cast<Ref<Texture2D>(TileSetAtlasSource::*)()const>(&TileSetAtlasSource::get_runtime_texture)>("get_runtime_texture")
            .fun<static_cast<Rect2i(TileSetAtlasSource::*)(const Vector2i &,int32_t)const>(&TileSetAtlasSource::get_runtime_tile_texture_region)>("get_runtime_tile_texture_region")
;    qjs::Value _TileAnimationMode = context->newObject();
    _TileAnimationMode["TILE_ANIMATION_MODE_DEFAULT"] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_DEFAULT;
    _TileAnimationMode["TILE_ANIMATION_MODE_RANDOM_START_TIMES"] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_RANDOM_START_TIMES;
    _TileAnimationMode["TILE_ANIMATION_MODE_MAX"] = TileSetAtlasSource::TileAnimationMode::TILE_ANIMATION_MODE_MAX;
    _module.add("TileAnimationMode", std::move(_TileAnimationMode));
}