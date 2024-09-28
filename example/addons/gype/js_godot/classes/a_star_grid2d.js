import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
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
@GodotClass
export class AStarGrid2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AStarGrid2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_region() {
    if (!this._bindings.method_set_region) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_region");
      this._bindings.method_set_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1763793166
      );
    }
  }
  static init_method_get_region() {
    if (!this._bindings.method_get_region) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_region");
      this._bindings.method_get_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        410525958
      );
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_offset() {
    if (!this._bindings.method_set_offset) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_offset");
      this._bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this._bindings.method_get_offset) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_offset");
      this._bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_cell_size() {
    if (!this._bindings.method_set_cell_size) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_cell_size");
      this._bindings.method_set_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_cell_size() {
    if (!this._bindings.method_get_cell_size) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_cell_size");
      this._bindings.method_get_cell_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_cell_shape() {
    if (!this._bindings.method_set_cell_shape) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_cell_shape");
      this._bindings.method_set_cell_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4130591146
      );
    }
  }
  static init_method_get_cell_shape() {
    if (!this._bindings.method_get_cell_shape) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_cell_shape");
      this._bindings.method_get_cell_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3293463634
      );
    }
  }
  static init_method_is_in_bounds() {
    if (!this._bindings.method_is_in_bounds) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_in_bounds");
      this._bindings.method_is_in_bounds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_is_in_boundsv() {
    if (!this._bindings.method_is_in_boundsv) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_in_boundsv");
      this._bindings.method_is_in_boundsv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900751641
      );
    }
  }
  static init_method_is_dirty() {
    if (!this._bindings.method_is_dirty) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_dirty");
      this._bindings.method_is_dirty = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_update() {
    if (!this._bindings.method_update) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("update");
      this._bindings.method_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_jumping_enabled() {
    if (!this._bindings.method_set_jumping_enabled) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_jumping_enabled");
      this._bindings.method_set_jumping_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_jumping_enabled() {
    if (!this._bindings.method_is_jumping_enabled) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_jumping_enabled");
      this._bindings.method_is_jumping_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_diagonal_mode() {
    if (!this._bindings.method_set_diagonal_mode) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_diagonal_mode");
      this._bindings.method_set_diagonal_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1017829798
      );
    }
  }
  static init_method_get_diagonal_mode() {
    if (!this._bindings.method_get_diagonal_mode) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_diagonal_mode");
      this._bindings.method_get_diagonal_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3129282674
      );
    }
  }
  static init_method_set_default_compute_heuristic() {
    if (!this._bindings.method_set_default_compute_heuristic) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_default_compute_heuristic");
      this._bindings.method_set_default_compute_heuristic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1044375519
      );
    }
  }
  static init_method_get_default_compute_heuristic() {
    if (!this._bindings.method_get_default_compute_heuristic) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_default_compute_heuristic");
      this._bindings.method_get_default_compute_heuristic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2074731422
      );
    }
  }
  static init_method_set_default_estimate_heuristic() {
    if (!this._bindings.method_set_default_estimate_heuristic) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_default_estimate_heuristic");
      this._bindings.method_set_default_estimate_heuristic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1044375519
      );
    }
  }
  static init_method_get_default_estimate_heuristic() {
    if (!this._bindings.method_get_default_estimate_heuristic) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_default_estimate_heuristic");
      this._bindings.method_get_default_estimate_heuristic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2074731422
      );
    }
  }
  static init_method_set_point_solid() {
    if (!this._bindings.method_set_point_solid) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_point_solid");
      this._bindings.method_set_point_solid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1765703753
      );
    }
  }
  static init_method_is_point_solid() {
    if (!this._bindings.method_is_point_solid) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("is_point_solid");
      this._bindings.method_is_point_solid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900751641
      );
    }
  }
  static init_method_set_point_weight_scale() {
    if (!this._bindings.method_set_point_weight_scale) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("set_point_weight_scale");
      this._bindings.method_set_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2262553149
      );
    }
  }
  static init_method_get_point_weight_scale() {
    if (!this._bindings.method_get_point_weight_scale) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_weight_scale");
      this._bindings.method_get_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        719993801
      );
    }
  }
  static init_method_fill_solid_region() {
    if (!this._bindings.method_fill_solid_region) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("fill_solid_region");
      this._bindings.method_fill_solid_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2261970063
      );
    }
  }
  static init_method_fill_weight_scale_region() {
    if (!this._bindings.method_fill_weight_scale_region) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("fill_weight_scale_region");
      this._bindings.method_fill_weight_scale_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2793244083
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_point_position() {
    if (!this._bindings.method_get_point_position) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        108438297
      );
    }
  }
  static init_method_get_point_path() {
    if (!this._bindings.method_get_point_path) {
      let classname = new StringName("AStarGrid2D");
      let methodname = new StringName("get_point_path");
      this._bindings.method_get_point_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1641925693
      );
    }
  }
  static init_method_get_id_path() {
    if (!this._bindings.method_get_id_path) {
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
  }
  _compute_cost(_from_id, _to_id) {
  }
  set_region(_region) {
    AStarGrid2D.init_method_set_region();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_region,
      this._owner,
      _region
    );
    
  }
  get_region() {
    AStarGrid2D.init_method_get_region();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_region,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  set_size(_size) {
    AStarGrid2D.init_method_set_size();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    AStarGrid2D.init_method_get_size();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_offset(_offset) {
    AStarGrid2D.init_method_set_offset();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    AStarGrid2D.init_method_get_offset();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_cell_size(_cell_size) {
    AStarGrid2D.init_method_set_cell_size();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_cell_size,
      this._owner,
      _cell_size
    );
    
  }
  get_cell_size() {
    AStarGrid2D.init_method_get_cell_size();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_cell_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_cell_shape(_cell_shape) {
    AStarGrid2D.init_method_set_cell_shape();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_cell_shape,
      this._owner,
      _cell_shape
    );
    
  }
  get_cell_shape() {
    AStarGrid2D.init_method_get_cell_shape();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_cell_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_in_bounds(_x, _y) {
    AStarGrid2D.init_method_is_in_bounds();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_is_in_bounds,
      this._owner,
			Variant.Type.BOOL,
    
      _x, _y
    );
    
  }
  is_in_boundsv(_id) {
    AStarGrid2D.init_method_is_in_boundsv();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_is_in_boundsv,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  is_dirty() {
    AStarGrid2D.init_method_is_dirty();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_is_dirty,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  update() {
    AStarGrid2D.init_method_update();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_update,
      this._owner,
      
    );
    
  }
  set_jumping_enabled(_enabled) {
    AStarGrid2D.init_method_set_jumping_enabled();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_jumping_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_jumping_enabled() {
    AStarGrid2D.init_method_is_jumping_enabled();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_is_jumping_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_diagonal_mode(_mode) {
    AStarGrid2D.init_method_set_diagonal_mode();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_diagonal_mode,
      this._owner,
      _mode
    );
    
  }
  get_diagonal_mode() {
    AStarGrid2D.init_method_get_diagonal_mode();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_diagonal_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_default_compute_heuristic(_heuristic) {
    AStarGrid2D.init_method_set_default_compute_heuristic();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_default_compute_heuristic,
      this._owner,
      _heuristic
    );
    
  }
  get_default_compute_heuristic() {
    AStarGrid2D.init_method_get_default_compute_heuristic();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_default_compute_heuristic,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_default_estimate_heuristic(_heuristic) {
    AStarGrid2D.init_method_set_default_estimate_heuristic();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_default_estimate_heuristic,
      this._owner,
      _heuristic
    );
    
  }
  get_default_estimate_heuristic() {
    AStarGrid2D.init_method_get_default_estimate_heuristic();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_default_estimate_heuristic,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_point_solid(_id, _solid) {
    AStarGrid2D.init_method_set_point_solid();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_point_solid,
      this._owner,
      _id, _solid
    );
    
  }
  is_point_solid(_id) {
    AStarGrid2D.init_method_is_point_solid();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_is_point_solid,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  set_point_weight_scale(_id, _weight_scale) {
    AStarGrid2D.init_method_set_point_weight_scale();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_set_point_weight_scale,
      this._owner,
      _id, _weight_scale
    );
    
  }
  get_point_weight_scale(_id) {
    AStarGrid2D.init_method_get_point_weight_scale();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_point_weight_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      _id
    );
    
  }
  fill_solid_region(_region, _solid) {
    AStarGrid2D.init_method_fill_solid_region();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_fill_solid_region,
      this._owner,
      _region, _solid
    );
    
  }
  fill_weight_scale_region(_region, _weight_scale) {
    AStarGrid2D.init_method_fill_weight_scale_region();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_fill_weight_scale_region,
      this._owner,
      _region, _weight_scale
    );
    
  }
  clear() {
    AStarGrid2D.init_method_clear();
    return _call_native_mb_no_ret(
      AStarGrid2D._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_point_position(_id) {
    AStarGrid2D.init_method_get_point_position();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _id
    );
    
  }
  get_point_path(_from_id, _to_id, _allow_partial_path) {
    AStarGrid2D.init_method_get_point_path();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_point_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  get_id_path(_from_id, _to_id, _allow_partial_path) {
    AStarGrid2D.init_method_get_id_path();
    return _call_native_mb_ret(
      AStarGrid2D._bindings.method_get_id_path,
      this._owner,
			Variant.Type.ARRAY,
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  
get region () {
  return this.get_region();
}
set region (new_value) {
  this.set_region(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get cell_size () {
  return this.get_cell_size();
}
set cell_size (new_value) {
  this.set_cell_size(new_value);
}
get cell_shape () {
  return this.get_cell_shape();
}
set cell_shape (new_value) {
  this.set_cell_shape(new_value);
}
get jumping_enabled () {
  return this.is_jumping_enabled();
}
set jumping_enabled (new_value) {
  this.set_jumping_enabled(new_value);
}
get default_compute_heuristic () {
  return this.get_default_compute_heuristic();
}
set default_compute_heuristic (new_value) {
  this.set_default_compute_heuristic(new_value);
}
get default_estimate_heuristic () {
  return this.get_default_estimate_heuristic();
}
set default_estimate_heuristic (new_value) {
  this.set_default_estimate_heuristic(new_value);
}
get diagonal_mode () {
  return this.get_diagonal_mode();
}
set diagonal_mode (new_value) {
  this.set_diagonal_mode(new_value);
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