import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { TileSetSource } from '@js_godot/classes/tile_set_source'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_texture;
  method_get_texture;
  method_set_margins;
  method_get_margins;
  method_set_separation;
  method_get_separation;
  method_set_texture_region_size;
  method_get_texture_region_size;
  method_set_use_texture_padding;
  method_get_use_texture_padding;
  method_create_tile;
  method_remove_tile;
  method_move_tile_in_atlas;
  method_get_tile_size_in_atlas;
  method_has_room_for_tile;
  method_get_tiles_to_be_removed_on_change;
  method_get_tile_at_coords;
  method_has_tiles_outside_texture;
  method_clear_tiles_outside_texture;
  method_set_tile_animation_columns;
  method_get_tile_animation_columns;
  method_set_tile_animation_separation;
  method_get_tile_animation_separation;
  method_set_tile_animation_speed;
  method_get_tile_animation_speed;
  method_set_tile_animation_mode;
  method_get_tile_animation_mode;
  method_set_tile_animation_frames_count;
  method_get_tile_animation_frames_count;
  method_set_tile_animation_frame_duration;
  method_get_tile_animation_frame_duration;
  method_get_tile_animation_total_duration;
  method_create_alternative_tile;
  method_remove_alternative_tile;
  method_set_alternative_tile_id;
  method_get_next_alternative_tile_id;
  method_get_tile_data;
  method_get_atlas_grid_size;
  method_get_tile_texture_region;
  method_get_runtime_texture;
  method_get_runtime_tile_texture_region;
}
export class TileSetAtlasSource extends TileSetSource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TileSetAtlasSource");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_set_margins() {
    if (!this.#_bindings.method_set_margins) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_margins");
      this.#_bindings.method_set_margins = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_margins() {
    if (!this.#_bindings.method_get_margins) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_margins");
      this.#_bindings.method_get_margins = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_separation() {
    if (!this.#_bindings.method_set_separation) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_separation");
      this.#_bindings.method_set_separation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_separation() {
    if (!this.#_bindings.method_get_separation) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_separation");
      this.#_bindings.method_get_separation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_texture_region_size() {
    if (!this.#_bindings.method_set_texture_region_size) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_texture_region_size");
      this.#_bindings.method_set_texture_region_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_texture_region_size() {
    if (!this.#_bindings.method_get_texture_region_size) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_texture_region_size");
      this.#_bindings.method_get_texture_region_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_use_texture_padding() {
    if (!this.#_bindings.method_set_use_texture_padding) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_use_texture_padding");
      this.#_bindings.method_set_use_texture_padding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_texture_padding() {
    if (!this.#_bindings.method_get_use_texture_padding) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_use_texture_padding");
      this.#_bindings.method_get_use_texture_padding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_create_tile() {
    if (!this.#_bindings.method_create_tile) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("create_tile");
      this.#_bindings.method_create_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        190528769
      );
    }
  }
  static init_method_remove_tile() {
    if (!this.#_bindings.method_remove_tile) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("remove_tile");
      this.#_bindings.method_remove_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_move_tile_in_atlas() {
    if (!this.#_bindings.method_move_tile_in_atlas) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("move_tile_in_atlas");
      this.#_bindings.method_move_tile_in_atlas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3870111920
      );
    }
  }
  static init_method_get_tile_size_in_atlas() {
    if (!this.#_bindings.method_get_tile_size_in_atlas) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_size_in_atlas");
      this.#_bindings.method_get_tile_size_in_atlas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050897911
      );
    }
  }
  static init_method_has_room_for_tile() {
    if (!this.#_bindings.method_has_room_for_tile) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("has_room_for_tile");
      this.#_bindings.method_has_room_for_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3018597268
      );
    }
  }
  static init_method_get_tiles_to_be_removed_on_change() {
    if (!this.#_bindings.method_get_tiles_to_be_removed_on_change) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tiles_to_be_removed_on_change");
      this.#_bindings.method_get_tiles_to_be_removed_on_change = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1240378054
      );
    }
  }
  static init_method_get_tile_at_coords() {
    if (!this.#_bindings.method_get_tile_at_coords) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_at_coords");
      this.#_bindings.method_get_tile_at_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050897911
      );
    }
  }
  static init_method_has_tiles_outside_texture() {
    if (!this.#_bindings.method_has_tiles_outside_texture) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("has_tiles_outside_texture");
      this.#_bindings.method_has_tiles_outside_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_clear_tiles_outside_texture() {
    if (!this.#_bindings.method_clear_tiles_outside_texture) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("clear_tiles_outside_texture");
      this.#_bindings.method_clear_tiles_outside_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_tile_animation_columns() {
    if (!this.#_bindings.method_set_tile_animation_columns) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_columns");
      this.#_bindings.method_set_tile_animation_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200960707
      );
    }
  }
  static init_method_get_tile_animation_columns() {
    if (!this.#_bindings.method_get_tile_animation_columns) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_columns");
      this.#_bindings.method_get_tile_animation_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_set_tile_animation_separation() {
    if (!this.#_bindings.method_set_tile_animation_separation) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_separation");
      this.#_bindings.method_set_tile_animation_separation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1941061099
      );
    }
  }
  static init_method_get_tile_animation_separation() {
    if (!this.#_bindings.method_get_tile_animation_separation) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_separation");
      this.#_bindings.method_get_tile_animation_separation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050897911
      );
    }
  }
  static init_method_set_tile_animation_speed() {
    if (!this.#_bindings.method_set_tile_animation_speed) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_speed");
      this.#_bindings.method_set_tile_animation_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2262553149
      );
    }
  }
  static init_method_get_tile_animation_speed() {
    if (!this.#_bindings.method_get_tile_animation_speed) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_speed");
      this.#_bindings.method_get_tile_animation_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        719993801
      );
    }
  }
  static init_method_set_tile_animation_mode() {
    if (!this.#_bindings.method_set_tile_animation_mode) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_mode");
      this.#_bindings.method_set_tile_animation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3192753483
      );
    }
  }
  static init_method_get_tile_animation_mode() {
    if (!this.#_bindings.method_get_tile_animation_mode) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_mode");
      this.#_bindings.method_get_tile_animation_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4025349959
      );
    }
  }
  static init_method_set_tile_animation_frames_count() {
    if (!this.#_bindings.method_set_tile_animation_frames_count) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_frames_count");
      this.#_bindings.method_set_tile_animation_frames_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200960707
      );
    }
  }
  static init_method_get_tile_animation_frames_count() {
    if (!this.#_bindings.method_get_tile_animation_frames_count) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_frames_count");
      this.#_bindings.method_get_tile_animation_frames_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_set_tile_animation_frame_duration() {
    if (!this.#_bindings.method_set_tile_animation_frame_duration) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_tile_animation_frame_duration");
      this.#_bindings.method_set_tile_animation_frame_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2843487787
      );
    }
  }
  static init_method_get_tile_animation_frame_duration() {
    if (!this.#_bindings.method_get_tile_animation_frame_duration) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_frame_duration");
      this.#_bindings.method_get_tile_animation_frame_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1802448425
      );
    }
  }
  static init_method_get_tile_animation_total_duration() {
    if (!this.#_bindings.method_get_tile_animation_total_duration) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_animation_total_duration");
      this.#_bindings.method_get_tile_animation_total_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        719993801
      );
    }
  }
  static init_method_create_alternative_tile() {
    if (!this.#_bindings.method_create_alternative_tile) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("create_alternative_tile");
      this.#_bindings.method_create_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2226298068
      );
    }
  }
  static init_method_remove_alternative_tile() {
    if (!this.#_bindings.method_remove_alternative_tile) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("remove_alternative_tile");
      this.#_bindings.method_remove_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200960707
      );
    }
  }
  static init_method_set_alternative_tile_id() {
    if (!this.#_bindings.method_set_alternative_tile_id) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("set_alternative_tile_id");
      this.#_bindings.method_set_alternative_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1499785778
      );
    }
  }
  static init_method_get_next_alternative_tile_id() {
    if (!this.#_bindings.method_get_next_alternative_tile_id) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_next_alternative_tile_id");
      this.#_bindings.method_get_next_alternative_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_tile_data() {
    if (!this.#_bindings.method_get_tile_data) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_data");
      this.#_bindings.method_get_tile_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3534028207
      );
    }
  }
  static init_method_get_atlas_grid_size() {
    if (!this.#_bindings.method_get_atlas_grid_size) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_atlas_grid_size");
      this.#_bindings.method_get_atlas_grid_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_get_tile_texture_region() {
    if (!this.#_bindings.method_get_tile_texture_region) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_tile_texture_region");
      this.#_bindings.method_get_tile_texture_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        241857547
      );
    }
  }
  static init_method_get_runtime_texture() {
    if (!this.#_bindings.method_get_runtime_texture) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_runtime_texture");
      this.#_bindings.method_get_runtime_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_get_runtime_tile_texture_region() {
    if (!this.#_bindings.method_get_runtime_tile_texture_region) {
      let classname = new StringName("TileSetAtlasSource");
      let methodname = new StringName("get_runtime_tile_texture_region");
      this.#_bindings.method_get_runtime_tile_texture_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        104874263
      );
    }
  }

  
  
  set_texture(_texture) {
    TileSetAtlasSource.init_method_set_texture();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    TileSetAtlasSource.init_method_get_texture();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_margins(_margins) {
    TileSetAtlasSource.init_method_set_margins();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_margins,
      this._owner,
      _margins
    );
    
  }
  get_margins() {
    TileSetAtlasSource.init_method_get_margins();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_margins,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_separation(_separation) {
    TileSetAtlasSource.init_method_set_separation();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_separation,
      this._owner,
      _separation
    );
    
  }
  get_separation() {
    TileSetAtlasSource.init_method_get_separation();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_separation,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_texture_region_size(_texture_region_size) {
    TileSetAtlasSource.init_method_set_texture_region_size();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_texture_region_size,
      this._owner,
      _texture_region_size
    );
    
  }
  get_texture_region_size() {
    TileSetAtlasSource.init_method_get_texture_region_size();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_texture_region_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_use_texture_padding(_use_texture_padding) {
    TileSetAtlasSource.init_method_set_use_texture_padding();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_use_texture_padding,
      this._owner,
      _use_texture_padding
    );
    
  }
  get_use_texture_padding() {
    TileSetAtlasSource.init_method_get_use_texture_padding();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_use_texture_padding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  create_tile(_atlas_coords, _size) {
    TileSetAtlasSource.init_method_create_tile();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_create_tile,
      this._owner,
      _atlas_coords, _size
    );
    
  }
  remove_tile(_atlas_coords) {
    TileSetAtlasSource.init_method_remove_tile();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_remove_tile,
      this._owner,
      _atlas_coords
    );
    
  }
  move_tile_in_atlas(_atlas_coords, _new_atlas_coords, _new_size) {
    TileSetAtlasSource.init_method_move_tile_in_atlas();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_move_tile_in_atlas,
      this._owner,
      _atlas_coords, _new_atlas_coords, _new_size
    );
    
  }
  get_tile_size_in_atlas(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_size_in_atlas();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_size_in_atlas,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _atlas_coords
    );
    
  }
  has_room_for_tile(_atlas_coords, _size, _animation_columns, _animation_separation, _frames_count, _ignored_tile) {
    TileSetAtlasSource.init_method_has_room_for_tile();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_has_room_for_tile,
      this._owner,
			Variant.Type.BOOL,
    
      _atlas_coords, _size, _animation_columns, _animation_separation, _frames_count, _ignored_tile
    );
    
  }
  get_tiles_to_be_removed_on_change(_texture, _margins, _separation, _texture_region_size) {
    TileSetAtlasSource.init_method_get_tiles_to_be_removed_on_change();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tiles_to_be_removed_on_change,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _texture, _margins, _separation, _texture_region_size
    );
    
  }
  get_tile_at_coords(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_at_coords();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_at_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _atlas_coords
    );
    
  }
  has_tiles_outside_texture() {
    TileSetAtlasSource.init_method_has_tiles_outside_texture();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_has_tiles_outside_texture,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  clear_tiles_outside_texture() {
    TileSetAtlasSource.init_method_clear_tiles_outside_texture();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_clear_tiles_outside_texture,
      this._owner,
      
    );
    
  }
  set_tile_animation_columns(_atlas_coords, _frame_columns) {
    TileSetAtlasSource.init_method_set_tile_animation_columns();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_columns,
      this._owner,
      _atlas_coords, _frame_columns
    );
    
  }
  get_tile_animation_columns(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_columns();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_columns,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords
    );
    
  }
  set_tile_animation_separation(_atlas_coords, _separation) {
    TileSetAtlasSource.init_method_set_tile_animation_separation();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_separation,
      this._owner,
      _atlas_coords, _separation
    );
    
  }
  get_tile_animation_separation(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_separation();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_separation,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _atlas_coords
    );
    
  }
  set_tile_animation_speed(_atlas_coords, _speed) {
    TileSetAtlasSource.init_method_set_tile_animation_speed();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_speed,
      this._owner,
      _atlas_coords, _speed
    );
    
  }
  get_tile_animation_speed(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_speed();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      _atlas_coords
    );
    
  }
  set_tile_animation_mode(_atlas_coords, _mode) {
    TileSetAtlasSource.init_method_set_tile_animation_mode();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_mode,
      this._owner,
      _atlas_coords, _mode
    );
    
  }
  get_tile_animation_mode(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_mode();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_mode,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords
    );
    
  }
  set_tile_animation_frames_count(_atlas_coords, _frames_count) {
    TileSetAtlasSource.init_method_set_tile_animation_frames_count();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_frames_count,
      this._owner,
      _atlas_coords, _frames_count
    );
    
  }
  get_tile_animation_frames_count(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_frames_count();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_frames_count,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords
    );
    
  }
  set_tile_animation_frame_duration(_atlas_coords, _frame_index, _duration) {
    TileSetAtlasSource.init_method_set_tile_animation_frame_duration();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_tile_animation_frame_duration,
      this._owner,
      _atlas_coords, _frame_index, _duration
    );
    
  }
  get_tile_animation_frame_duration(_atlas_coords, _frame_index) {
    TileSetAtlasSource.init_method_get_tile_animation_frame_duration();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_frame_duration,
      this._owner,
			Variant.Type.FLOAT,
    
      _atlas_coords, _frame_index
    );
    
  }
  get_tile_animation_total_duration(_atlas_coords) {
    TileSetAtlasSource.init_method_get_tile_animation_total_duration();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_animation_total_duration,
      this._owner,
			Variant.Type.FLOAT,
    
      _atlas_coords
    );
    
  }
  create_alternative_tile(_atlas_coords, _alternative_id_override) {
    TileSetAtlasSource.init_method_create_alternative_tile();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_create_alternative_tile,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords, _alternative_id_override
    );
    
  }
  remove_alternative_tile(_atlas_coords, _alternative_tile) {
    TileSetAtlasSource.init_method_remove_alternative_tile();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_remove_alternative_tile,
      this._owner,
      _atlas_coords, _alternative_tile
    );
    
  }
  set_alternative_tile_id(_atlas_coords, _alternative_tile, _new_id) {
    TileSetAtlasSource.init_method_set_alternative_tile_id();
    return _call_native_mb_no_ret(
      TileSetAtlasSource.#_bindings.method_set_alternative_tile_id,
      this._owner,
      _atlas_coords, _alternative_tile, _new_id
    );
    
  }
  get_next_alternative_tile_id(_atlas_coords) {
    TileSetAtlasSource.init_method_get_next_alternative_tile_id();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_next_alternative_tile_id,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords
    );
    
  }
  get_tile_data(_atlas_coords, _alternative_tile) {
    TileSetAtlasSource.init_method_get_tile_data();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_data,
      this._owner,
			Variant.Type.OBJECT,
      _atlas_coords, _alternative_tile
    );
    
  }
  get_atlas_grid_size() {
    TileSetAtlasSource.init_method_get_atlas_grid_size();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_atlas_grid_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  get_tile_texture_region(_atlas_coords, _frame) {
    TileSetAtlasSource.init_method_get_tile_texture_region();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_tile_texture_region,
      this._owner,
			Variant.Type.RECT2I,
    
      _atlas_coords, _frame
    );
    
  }
  get_runtime_texture() {
    TileSetAtlasSource.init_method_get_runtime_texture();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_runtime_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_runtime_tile_texture_region(_atlas_coords, _frame) {
    TileSetAtlasSource.init_method_get_runtime_tile_texture_region();
    return _call_native_mb_ret(
      TileSetAtlasSource.#_bindings.method_get_runtime_tile_texture_region,
      this._owner,
			Variant.Type.RECT2I,
    
      _atlas_coords, _frame
    );
    
  }
  
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
}
get margins () {
  return this.get_margins();
}
set margins (new_value) {
  this.set_margins(new_value);
}
get separation () {
  return this.get_separation();
}
set separation (new_value) {
  this.set_separation(new_value);
}
get texture_region_size () {
  return this.get_texture_region_size();
}
set texture_region_size (new_value) {
  this.set_texture_region_size(new_value);
}
get use_texture_padding () {
  return this.get_use_texture_padding();
}
set use_texture_padding (new_value) {
  this.set_use_texture_padding(new_value);
}

  static TileAnimationMode = {
    TILE_ANIMATION_MODE_DEFAULT: 0,
    TILE_ANIMATION_MODE_RANDOM_START_TIMES: 1,
    TILE_ANIMATION_MODE_MAX: 2,
  }
}