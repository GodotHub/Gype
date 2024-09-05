import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array'
import { Vector3 } from '@js_godot/variant/vector3'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_available_point_id;
  method_add_point;
  method_get_point_position;
  method_set_point_position;
  method_get_point_weight_scale;
  method_set_point_weight_scale;
  method_remove_point;
  method_has_point;
  method_get_point_connections;
  method_get_point_ids;
  method_set_point_disabled;
  method_is_point_disabled;
  method_connect_points;
  method_disconnect_points;
  method_are_points_connected;
  method_get_point_count;
  method_get_point_capacity;
  method_reserve_space;
  method_clear;
  method_get_closest_point;
  method_get_closest_position_in_segment;
  method_get_point_path;
  method_get_id_path;
}
export class AStar3D extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AStar3D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_available_point_id");
      this._bindings.method_get_available_point_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1038703438
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("set_point_position");
      this._bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_weight_scale");
      this._bindings.method_get_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("set_point_weight_scale");
      this._bindings.method_set_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("has_point");
      this._bindings.method_has_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_connections");
      this._bindings.method_get_point_connections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2865087369
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_ids");
      this._bindings.method_get_point_ids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3851388692
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("set_point_disabled");
      this._bindings.method_set_point_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        972357352
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("is_point_disabled");
      this._bindings.method_is_point_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("connect_points");
      this._bindings.method_connect_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3710494224
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("disconnect_points");
      this._bindings.method_disconnect_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3710494224
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("are_points_connected");
      this._bindings.method_are_points_connected = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2288175859
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_capacity");
      this._bindings.method_get_point_capacity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("reserve_space");
      this._bindings.method_reserve_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3241074317
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_closest_position_in_segment");
      this._bindings.method_get_closest_position_in_segment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        192990374
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_point_path");
      this._bindings.method_get_point_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1562654675
      );
    }
    {
      let classname = new StringName("AStar3D");
      let methodname = new StringName("get_id_path");
      this._bindings.method_get_id_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3136199648
      );
    }
  }
  
  _estimate_cost(_from_id, _to_id) {
  }
  _compute_cost(_from_id, _to_id) {
  }
  get_available_point_id() {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_available_point_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_point(_id, _position, _weight_scale) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_add_point,
      this._owner,
      _id, _position, _weight_scale
    );
    
  }
  get_point_position(_id) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _id
    );
    
  }
  set_point_position(_id, _position) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_set_point_position,
      this._owner,
      _id, _position
    );
    
  }
  get_point_weight_scale(_id) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_weight_scale,
      this._owner,
			Variant.Type.FLOAT,
      _id
    );
    
  }
  set_point_weight_scale(_id, _weight_scale) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_set_point_weight_scale,
      this._owner,
      _id, _weight_scale
    );
    
  }
  remove_point(_id) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_remove_point,
      this._owner,
      _id
    );
    
  }
  has_point(_id) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_has_point,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
    
  }
  get_point_connections(_id) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_connections,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _id
    );
    
  }
  get_point_ids() {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_ids,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      
    );
    
  }
  set_point_disabled(_id, _disabled) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_set_point_disabled,
      this._owner,
      _id, _disabled
    );
    
  }
  is_point_disabled(_id) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_is_point_disabled,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
    
  }
  connect_points(_id, _to_id, _bidirectional) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_connect_points,
      this._owner,
      _id, _to_id, _bidirectional
    );
    
  }
  disconnect_points(_id, _to_id, _bidirectional) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_disconnect_points,
      this._owner,
      _id, _to_id, _bidirectional
    );
    
  }
  are_points_connected(_id, _to_id, _bidirectional) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_are_points_connected,
      this._owner,
			Variant.Type.BOOL,
      _id, _to_id, _bidirectional
    );
    
  }
  get_point_count() {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_point_capacity() {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_capacity,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  reserve_space(_num_nodes) {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_reserve_space,
      this._owner,
      _num_nodes
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      AStar3D._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_closest_point(_to_position, _include_disabled) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.INT,
      _to_position, _include_disabled
    );
    
  }
  get_closest_position_in_segment(_to_position) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_closest_position_in_segment,
      this._owner,
			Variant.Type.VECTOR3,
    
      _to_position
    );
    
  }
  get_point_path(_from_id, _to_id, _allow_partial_path) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_point_path,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  get_id_path(_from_id, _to_id, _allow_partial_path) {
    return _call_native_mb_ret(
      AStar3D._bindings.method_get_id_path,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  


  static {
    this._init_bindings();
  }
}