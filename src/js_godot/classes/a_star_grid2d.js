import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method__estimate_cost;
    method__compute_cost;
    method_set_region;
    method_get_region;
    method_set_size;
    method_get_size;
    method_set_offset;
    method_get_offset;
    method_set_cell_size;
    method_get_cell_size;
    method_set_cell_shape;
    method_get_cell_shape;
    method_is_in_bounds;
    method_is_in_boundsv;
    method_is_dirty;
    method_update;
    method_set_jumping_enabled;
    method_is_jumping_enabled;
    method_set_diagonal_mode;
    method_get_diagonal_mode;
    method_set_default_compute_heuristic;
    method_get_default_compute_heuristic;
    method_set_default_estimate_heuristic;
    method_get_default_estimate_heuristic;
    method_set_point_solid;
    method_is_point_solid;
    method_set_point_weight_scale;
    method_get_point_weight_scale;
    method_fill_solid_region;
    method_fill_weight_scale_region;
    method_clear;
    method_get_point_position;
    method_get_point_path;
    method_get_id_path;
}


export class AStarGrid2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AStarGrid2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("_estimate_cost");
      this._bindings.method__estimate_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("_compute_cost");
      this._bindings.method__compute_cost = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_region");
      this._bindings.method_set_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1763793166
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_region");
      this._bindings.method_get_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        410525958
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_cell_size");
      this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_cell_size");
      this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_cell_shape");
      this._bindings.method_set_cell_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4130591146
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_cell_shape");
      this._bindings.method_get_cell_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3293463634
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_in_bounds");
      this._bindings.method_is_in_bounds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2522259332
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_in_boundsv");
      this._bindings.method_is_in_boundsv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3900751641
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_dirty");
      this._bindings.method_is_dirty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_jumping_enabled");
      this._bindings.method_set_jumping_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_jumping_enabled");
      this._bindings.method_is_jumping_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_diagonal_mode");
      this._bindings.method_set_diagonal_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1017829798
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_diagonal_mode");
      this._bindings.method_get_diagonal_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3129282674
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_default_compute_heuristic");
      this._bindings.method_set_default_compute_heuristic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1044375519
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_default_compute_heuristic");
      this._bindings.method_get_default_compute_heuristic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2074731422
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_default_estimate_heuristic");
      this._bindings.method_set_default_estimate_heuristic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1044375519
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_default_estimate_heuristic");
      this._bindings.method_get_default_estimate_heuristic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2074731422
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_point_solid");
      this._bindings.method_set_point_solid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1765703753
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_point_solid");
      this._bindings.method_is_point_solid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3900751641
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_point_weight_scale");
      this._bindings.method_set_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2262553149
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_weight_scale");
      this._bindings.method_get_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        719993801
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("fill_solid_region");
      this._bindings.method_fill_solid_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2261970063
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("fill_weight_scale_region");
      this._bindings.method_fill_weight_scale_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2793244083
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        108438297
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_path");
      this._bindings.method_get_point_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1641925693
      );
    }
    {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_id_path");
      this._bindings.method_get_id_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1918132273
      );
    }
  }
  _estimate_cost(_from_id, _to_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__estimate_cost,
      this._owner,
			Variant.Type.FLOAT,
      _from_id, _to_id
    );
  }
  _compute_cost(_from_id, _to_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__compute_cost,
      this._owner,
			Variant.Type.FLOAT,
      _from_id, _to_id
    );
  }
  set_region(_region) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_region,
      this._owner,
      _region
    );
  }
  get_region() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_region,
      this._owner,
			Variant.Type.RECT2I
    ,
      
    );
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _offset
    );
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_cell_size(_cell_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_size,
      this._owner,
      _cell_size
    );
  }
  get_cell_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_cell_shape(_cell_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell_shape,
      this._owner,
      _cell_shape
    );
  }
  get_cell_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_shape,
      this._owner,
			Variant.INT,
      
    );
  }
  is_in_bounds(_x, _y) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_in_bounds,
      this._owner,
			Variant.Type.BOOL,
      _x, _y
    );
  }
  is_in_boundsv(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_in_boundsv,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
  }
  is_dirty() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_dirty,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update,
      this._owner,
      
    );
  }
  set_jumping_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_jumping_enabled,
      this._owner,
      _enabled
    );
  }
  is_jumping_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_jumping_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_diagonal_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_diagonal_mode,
      this._owner,
      _mode
    );
  }
  get_diagonal_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_diagonal_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_default_compute_heuristic(_heuristic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_compute_heuristic,
      this._owner,
      _heuristic
    );
  }
  get_default_compute_heuristic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_compute_heuristic,
      this._owner,
			Variant.INT,
      
    );
  }
  set_default_estimate_heuristic(_heuristic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_estimate_heuristic,
      this._owner,
      _heuristic
    );
  }
  get_default_estimate_heuristic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_estimate_heuristic,
      this._owner,
			Variant.INT,
      
    );
  }
  set_point_solid(_id, _solid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_solid,
      this._owner,
      _id, _solid
    );
  }
  is_point_solid(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_point_solid,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
  }
  set_point_weight_scale(_id, _weight_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_weight_scale,
      this._owner,
      _id, _weight_scale
    );
  }
  get_point_weight_scale(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_weight_scale,
      this._owner,
			Variant.Type.FLOAT,
      _id
    );
  }
  fill_solid_region(_region, _solid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fill_solid_region,
      this._owner,
      _region, _solid
    );
  }
  fill_weight_scale_region(_region, _weight_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fill_weight_scale_region,
      this._owner,
      _region, _weight_scale
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  get_point_position(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _id
    );
  }
  get_point_path(_from_id, _to_id, _allow_partial_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _from_id, _to_id, _allow_partial_path
    );
  }
  get_id_path(_from_id, _to_id, _allow_partial_path) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_id_path,
      this._owner,
			Variant.INT,
      _from_id, _to_id, _allow_partial_path
    );
  }
  static Heuristic = {
    HEURISTIC_EUCLIDEAN: 0,
    HEURISTIC_MANHATTAN: 1,
    HEURISTIC_OCTILE: 2,
    HEURISTIC_CHEBYSHEV: 3,
    HEURISTIC_MAX: 4,
  }
  static DiagonalMode = {
    DIAGONAL_MODE_ALWAYS: 0,
    DIAGONAL_MODE_NEVER: 1,
    DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE: 2,
    DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES: 3,
    DIAGONAL_MODE_MAX: 4,
  }
  static CellShape = {
    CELL_SHAPE_SQUARE: 0,
    CELL_SHAPE_ISOMETRIC_RIGHT: 1,
    CELL_SHAPE_ISOMETRIC_DOWN: 2,
    CELL_SHAPE_MAX: 3,
  }
}