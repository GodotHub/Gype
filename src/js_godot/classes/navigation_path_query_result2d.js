import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedInt64Array } from 'src/js_godot/variant/packed_int64_array'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_path;
    method_get_path;
    method_set_path_types;
    method_get_path_types;
    method_set_path_rids;
    method_get_path_rids;
    method_set_path_owner_ids;
    method_get_path_owner_ids;
    method_reset;
}


export class NavigationPathQueryResult2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPathQueryResult2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("set_path");
        this._bindings.method_set_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1509147220
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("get_path");
        this._bindings.method_get_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2961356807
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("set_path_types");
        this._bindings.method_set_path_types = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("get_path_types");
        this._bindings.method_get_path_types = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1930428628
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("set_path_rids");
        this._bindings.method_set_path_rids = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("get_path_rids");
        this._bindings.method_get_path_rids = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("set_path_owner_ids");
        this._bindings.method_set_path_owner_ids = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3709968205
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("get_path_owner_ids");
        this._bindings.method_get_path_owner_ids = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          235988956
        );
      }
      {
        let classname = new StringName("NavigationPathQueryResult2D");
        let methodname = new StringName("reset");
        this._bindings.method_reset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  set_path(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path,
      this._owner,
      _path
    );
    
  }
  get_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
    
  }
  set_path_types(_path_types) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_types,
      this._owner,
      _path_types
    );
    
  }
  get_path_types() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_types,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  set_path_rids(_path_rids) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_rids,
      this._owner,
      _path_rids
    );
    
  }
  get_path_rids() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_rids,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_path_owner_ids(_path_owner_ids) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_path_owner_ids,
      this._owner,
      _path_owner_ids
    );
    
  }
  get_path_owner_ids() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_path_owner_ids,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY
    ,
      
    );
    
  }
  reset() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_reset,
      this._owner,
      
    );
    
  }
  static PathSegmentType = {
    PATH_SEGMENT_TYPE_REGION: 0,
    PATH_SEGMENT_TYPE_LINK: 1,
  }
}