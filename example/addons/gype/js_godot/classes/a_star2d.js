import * as internal from '__internal__';
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
@GodotClass
export class AStar2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AStar2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_available_point_id() {
    if (!this._bindings.method_get_available_point_id) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_available_point_id");
      this._bindings.method_get_available_point_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_add_point() {
    if (!this._bindings.method_add_point) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("add_point");
      this._bindings.method_add_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4074201818
      );
    }
  }
  static init_method_get_point_position() {
    if (!this._bindings.method_get_point_position) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_position");
      this._bindings.method_get_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_point_position() {
    if (!this._bindings.method_set_point_position) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("set_point_position");
      this._bindings.method_set_point_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_point_weight_scale() {
    if (!this._bindings.method_get_point_weight_scale) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_weight_scale");
      this._bindings.method_get_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_point_weight_scale() {
    if (!this._bindings.method_set_point_weight_scale) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("set_point_weight_scale");
      this._bindings.method_set_point_weight_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_remove_point() {
    if (!this._bindings.method_remove_point) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("remove_point");
      this._bindings.method_remove_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_has_point() {
    if (!this._bindings.method_has_point) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("has_point");
      this._bindings.method_has_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_point_connections() {
    if (!this._bindings.method_get_point_connections) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_connections");
      this._bindings.method_get_point_connections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2865087369
      );
    }
  }
  static init_method_get_point_ids() {
    if (!this._bindings.method_get_point_ids) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_ids");
      this._bindings.method_get_point_ids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3851388692
      );
    }
  }
  static init_method_set_point_disabled() {
    if (!this._bindings.method_set_point_disabled) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("set_point_disabled");
      this._bindings.method_set_point_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        972357352
      );
    }
  }
  static init_method_is_point_disabled() {
    if (!this._bindings.method_is_point_disabled) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("is_point_disabled");
      this._bindings.method_is_point_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_connect_points() {
    if (!this._bindings.method_connect_points) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("connect_points");
      this._bindings.method_connect_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3710494224
      );
    }
  }
  static init_method_disconnect_points() {
    if (!this._bindings.method_disconnect_points) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("disconnect_points");
      this._bindings.method_disconnect_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3710494224
      );
    }
  }
  static init_method_are_points_connected() {
    if (!this._bindings.method_are_points_connected) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("are_points_connected");
      this._bindings.method_are_points_connected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2288175859
      );
    }
  }
  static init_method_get_point_count() {
    if (!this._bindings.method_get_point_count) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_count");
      this._bindings.method_get_point_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_point_capacity() {
    if (!this._bindings.method_get_point_capacity) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_capacity");
      this._bindings.method_get_point_capacity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_reserve_space() {
    if (!this._bindings.method_reserve_space) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("reserve_space");
      this._bindings.method_reserve_space = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_closest_point() {
    if (!this._bindings.method_get_closest_point) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2300324924
      );
    }
  }
  static init_method_get_closest_position_in_segment() {
    if (!this._bindings.method_get_closest_position_in_segment) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_closest_position_in_segment");
      this._bindings.method_get_closest_position_in_segment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2656412154
      );
    }
  }
  static init_method_get_point_path() {
    if (!this._bindings.method_get_point_path) {
      let classname = new StringName("AStar2D");
      let methodname = new StringName("get_point_path");
      this._bindings.method_get_point_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3427490392
      );
    }
  }
  static init_method_get_id_path() {
    if (!this._bindings.method_get_id_path) {
      let classname = new StringName("AStar2D");
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
    AStar2D.init_method_get_available_point_id();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_available_point_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_point(_id, _position, _weight_scale) {
    AStar2D.init_method_add_point();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_add_point,
      this._owner,
      _id, _position, _weight_scale
    );
    
  }
  get_point_position(_id) {
    AStar2D.init_method_get_point_position();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _id
    );
    
  }
  set_point_position(_id, _position) {
    AStar2D.init_method_set_point_position();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_set_point_position,
      this._owner,
      _id, _position
    );
    
  }
  get_point_weight_scale(_id) {
    AStar2D.init_method_get_point_weight_scale();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_weight_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      _id
    );
    
  }
  set_point_weight_scale(_id, _weight_scale) {
    AStar2D.init_method_set_point_weight_scale();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_set_point_weight_scale,
      this._owner,
      _id, _weight_scale
    );
    
  }
  remove_point(_id) {
    AStar2D.init_method_remove_point();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_remove_point,
      this._owner,
      _id
    );
    
  }
  has_point(_id) {
    AStar2D.init_method_has_point();
    return _call_native_mb_ret(
      AStar2D._bindings.method_has_point,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  get_point_connections(_id) {
    AStar2D.init_method_get_point_connections();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_connections,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _id
    );
    
  }
  get_point_ids() {
    AStar2D.init_method_get_point_ids();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_ids,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      
    );
    
  }
  set_point_disabled(_id, _disabled) {
    AStar2D.init_method_set_point_disabled();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_set_point_disabled,
      this._owner,
      _id, _disabled
    );
    
  }
  is_point_disabled(_id) {
    AStar2D.init_method_is_point_disabled();
    return _call_native_mb_ret(
      AStar2D._bindings.method_is_point_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  connect_points(_id, _to_id, _bidirectional) {
    AStar2D.init_method_connect_points();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_connect_points,
      this._owner,
      _id, _to_id, _bidirectional
    );
    
  }
  disconnect_points(_id, _to_id, _bidirectional) {
    AStar2D.init_method_disconnect_points();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_disconnect_points,
      this._owner,
      _id, _to_id, _bidirectional
    );
    
  }
  are_points_connected(_id, _to_id, _bidirectional) {
    AStar2D.init_method_are_points_connected();
    return _call_native_mb_ret(
      AStar2D._bindings.method_are_points_connected,
      this._owner,
			Variant.Type.BOOL,
    
      _id, _to_id, _bidirectional
    );
    
  }
  get_point_count() {
    AStar2D.init_method_get_point_count();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_point_capacity() {
    AStar2D.init_method_get_point_capacity();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_capacity,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  reserve_space(_num_nodes) {
    AStar2D.init_method_reserve_space();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_reserve_space,
      this._owner,
      _num_nodes
    );
    
  }
  clear() {
    AStar2D.init_method_clear();
    return _call_native_mb_no_ret(
      AStar2D._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_closest_point(_to_position, _include_disabled) {
    AStar2D.init_method_get_closest_point();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.INT,
    
      _to_position, _include_disabled
    );
    
  }
  get_closest_position_in_segment(_to_position) {
    AStar2D.init_method_get_closest_position_in_segment();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_closest_position_in_segment,
      this._owner,
			Variant.Type.VECTOR2,
    
      _to_position
    );
    
  }
  get_point_path(_from_id, _to_id, _allow_partial_path) {
    AStar2D.init_method_get_point_path();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_point_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  get_id_path(_from_id, _to_id, _allow_partial_path) {
    AStar2D.init_method_get_id_path();
    return _call_native_mb_ret(
      AStar2D._bindings.method_get_id_path,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      _from_id, _to_id, _allow_partial_path
    );
    
  }
  

}