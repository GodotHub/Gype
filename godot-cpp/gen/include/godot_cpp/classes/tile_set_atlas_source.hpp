/**************************************************************************/
/*  tile_set_atlas_source.hpp                                             */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_TILE_SET_ATLAS_SOURCE_HPP
#define GODOT_CPP_TILE_SET_ATLAS_SOURCE_HPP

#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.h>
namespace godot {

class Texture2D;
class TileData;

class TileSetAtlasSource : public TileSetSource {
	GDEXTENSION_CLASS(TileSetAtlasSource, TileSetSource)

public:

	enum TileAnimationMode {
		TILE_ANIMATION_MODE_DEFAULT = 0,
		TILE_ANIMATION_MODE_RANDOM_START_TIMES = 1,
		TILE_ANIMATION_MODE_MAX = 2,
	};

	static const int TRANSFORM_FLIP_H = 4096;
	static const int TRANSFORM_FLIP_V = 8192;
	static const int TRANSFORM_TRANSPOSE = 16384;

	void set_texture(const Ref<Texture2D> &texture);
	Ref<Texture2D> get_texture() const;
	void set_margins(const Vector2i &margins);
	Vector2i get_margins() const;
	void set_separation(const Vector2i &separation);
	Vector2i get_separation() const;
	void set_texture_region_size(const Vector2i &texture_region_size);
	Vector2i get_texture_region_size() const;
	void set_use_texture_padding(bool use_texture_padding);
	bool get_use_texture_padding() const;
	void create_tile(const Vector2i &atlas_coords, const Vector2i &size = Vector2i(1, 1));
	void remove_tile(const Vector2i &atlas_coords);
	void move_tile_in_atlas(const Vector2i &atlas_coords, const Vector2i &new_atlas_coords = Vector2i(-1, -1), const Vector2i &new_size = Vector2i(-1, -1));
	Vector2i get_tile_size_in_atlas(const Vector2i &atlas_coords) const;
	bool has_room_for_tile(const Vector2i &atlas_coords, const Vector2i &size, int32_t animation_columns, const Vector2i &animation_separation, int32_t frames_count, const Vector2i &ignored_tile = Vector2i(-1, -1)) const;
	PackedVector2Array get_tiles_to_be_removed_on_change(const Ref<Texture2D> &texture, const Vector2i &margins, const Vector2i &separation, const Vector2i &texture_region_size);
	Vector2i get_tile_at_coords(const Vector2i &atlas_coords) const;
	bool has_tiles_outside_texture() const;
	void clear_tiles_outside_texture();
	void set_tile_animation_columns(const Vector2i &atlas_coords, int32_t frame_columns);
	int32_t get_tile_animation_columns(const Vector2i &atlas_coords) const;
	void set_tile_animation_separation(const Vector2i &atlas_coords, const Vector2i &separation);
	Vector2i get_tile_animation_separation(const Vector2i &atlas_coords) const;
	void set_tile_animation_speed(const Vector2i &atlas_coords, double speed);
	double get_tile_animation_speed(const Vector2i &atlas_coords) const;
	void set_tile_animation_mode(const Vector2i &atlas_coords, TileSetAtlasSource::TileAnimationMode mode);
	TileSetAtlasSource::TileAnimationMode get_tile_animation_mode(const Vector2i &atlas_coords) const;
	void set_tile_animation_frames_count(const Vector2i &atlas_coords, int32_t frames_count);
	int32_t get_tile_animation_frames_count(const Vector2i &atlas_coords) const;
	void set_tile_animation_frame_duration(const Vector2i &atlas_coords, int32_t frame_index, double duration);
	double get_tile_animation_frame_duration(const Vector2i &atlas_coords, int32_t frame_index) const;
	double get_tile_animation_total_duration(const Vector2i &atlas_coords) const;
	int32_t create_alternative_tile(const Vector2i &atlas_coords, int32_t alternative_id_override = -1);
	void remove_alternative_tile(const Vector2i &atlas_coords, int32_t alternative_tile);
	void set_alternative_tile_id(const Vector2i &atlas_coords, int32_t alternative_tile, int32_t new_id);
	int32_t get_next_alternative_tile_id(const Vector2i &atlas_coords) const;
	TileData *get_tile_data(const Vector2i &atlas_coords, int32_t alternative_tile) const;
	Vector2i get_atlas_grid_size() const;
	Rect2i get_tile_texture_region(const Vector2i &atlas_coords, int32_t frame = 0) const;
	Ref<Texture2D> get_runtime_texture() const;
	Rect2i get_runtime_tile_texture_region(const Vector2i &atlas_coords, int32_t frame) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		TileSetSource::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(TileSetAtlasSource::TileAnimationMode);

#endif // ! GODOT_CPP_TILE_SET_ATLAS_SOURCE_HPP