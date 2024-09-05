import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class NavigationPathQueryResult3D extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPathQueryResult3D");
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
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("set_path");
      this._bindings.method_set_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("set_path_types");
      this._bindings.method_set_path_types = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("get_path_types");
      this._bindings.method_get_path_types = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("set_path_rids");
      this._bindings.method_set_path_rids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("get_path_rids");
      this._bindings.method_get_path_rids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("set_path_owner_ids");
      this._bindings.method_set_path_owner_ids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3709968205
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
      let methodname = new StringName("get_path_owner_ids");
      this._bindings.method_get_path_owner_ids = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        235988956
      );
    }
    {
      let classname = new StringName("NavigationPathQueryResult3D");
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
      NavigationPathQueryResult3D._bindings.method_set_path,
      this._owner,
      _path
    );
    
  }
  get_path() {
    return _call_native_mb_ret(
      NavigationPathQueryResult3D._bindings.method_get_path,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  set_path_types(_path_types) {
    return _call_native_mb_no_ret(
      NavigationPathQueryResult3D._bindings.method_set_path_types,
      this._owner,
      _path_types
    );
    
  }
  get_path_types() {
    return _call_native_mb_ret(
      NavigationPathQueryResult3D._bindings.method_get_path_types,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_path_rids(_path_rids) {
    return _call_native_mb_no_ret(
      NavigationPathQueryResult3D._bindings.method_set_path_rids,
      this._owner,
      _path_rids
    );
    
  }
  get_path_rids() {
    return _call_native_mb_ret(
      NavigationPathQueryResult3D._bindings.method_get_path_rids,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_path_owner_ids(_path_owner_ids) {
    return _call_native_mb_no_ret(
      NavigationPathQueryResult3D._bindings.method_set_path_owner_ids,
      this._owner,
      _path_owner_ids
    );
    
  }
  get_path_owner_ids() {
    return _call_native_mb_ret(
      NavigationPathQueryResult3D._bindings.method_get_path_owner_ids,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      
    );
    
  }
  reset() {
    return _call_native_mb_no_ret(
      NavigationPathQueryResult3D._bindings.method_reset,
      this._owner,
      
    );
    
  }
  
get path () {
  return this.get_path();
}
set path (new_value) {
  this.set_path(new_value);
}
get path_types () {
  return this.get_path_types();
}
set path_types (new_value) {
  this.set_path_types(new_value);
}
get path_rids () {
  return this.get_path_rids();
}
set path_rids (new_value) {
  this.set_path_rids(new_value);
}
get path_owner_ids () {
  return this.get_path_owner_ids();
}
set path_owner_ids (new_value) {
  this.set_path_owner_ids(new_value);
}

  static PathSegmentType = {
    PATH_SEGMENT_TYPE_REGION: 0,
    PATH_SEGMENT_TYPE_LINK: 1,
  }

  static {
    this._init_bindings();
  }
}