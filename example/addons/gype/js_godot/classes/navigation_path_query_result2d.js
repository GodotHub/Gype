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
@GodotClass
export class NavigationPathQueryResult2D extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationPathQueryResult2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_path() {
    if (!this._bindings.method_set_path) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("set_path");
      this._bindings.method_set_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_path() {
    if (!this._bindings.method_get_path) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("get_path");
      this._bindings.method_get_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_path_types() {
    if (!this._bindings.method_set_path_types) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("set_path_types");
      this._bindings.method_set_path_types = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_path_types() {
    if (!this._bindings.method_get_path_types) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("get_path_types");
      this._bindings.method_get_path_types = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_set_path_rids() {
    if (!this._bindings.method_set_path_rids) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("set_path_rids");
      this._bindings.method_set_path_rids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_path_rids() {
    if (!this._bindings.method_get_path_rids) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("get_path_rids");
      this._bindings.method_get_path_rids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_path_owner_ids() {
    if (!this._bindings.method_set_path_owner_ids) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("set_path_owner_ids");
      this._bindings.method_set_path_owner_ids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3709968205
      );
    }
  }
  static init_method_get_path_owner_ids() {
    if (!this._bindings.method_get_path_owner_ids) {
      let classname = new StringName("NavigationPathQueryResult2D");
      let methodname = new StringName("get_path_owner_ids");
      this._bindings.method_get_path_owner_ids = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        235988956
      );
    }
  }
  static init_method_reset() {
    if (!this._bindings.method_reset) {
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
    NavigationPathQueryResult2D.init_method_set_path();
    return _call_native_mb_no_ret(
      NavigationPathQueryResult2D._bindings.method_set_path,
      this._owner,
      _path
    );
    
  }
  get_path() {
    NavigationPathQueryResult2D.init_method_get_path();
    return _call_native_mb_ret(
      NavigationPathQueryResult2D._bindings.method_get_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_path_types(_path_types) {
    NavigationPathQueryResult2D.init_method_set_path_types();
    return _call_native_mb_no_ret(
      NavigationPathQueryResult2D._bindings.method_set_path_types,
      this._owner,
      _path_types
    );
    
  }
  get_path_types() {
    NavigationPathQueryResult2D.init_method_get_path_types();
    return _call_native_mb_ret(
      NavigationPathQueryResult2D._bindings.method_get_path_types,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_path_rids(_path_rids) {
    NavigationPathQueryResult2D.init_method_set_path_rids();
    return _call_native_mb_no_ret(
      NavigationPathQueryResult2D._bindings.method_set_path_rids,
      this._owner,
      _path_rids
    );
    
  }
  get_path_rids() {
    NavigationPathQueryResult2D.init_method_get_path_rids();
    return _call_native_mb_ret(
      NavigationPathQueryResult2D._bindings.method_get_path_rids,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_path_owner_ids(_path_owner_ids) {
    NavigationPathQueryResult2D.init_method_set_path_owner_ids();
    return _call_native_mb_no_ret(
      NavigationPathQueryResult2D._bindings.method_set_path_owner_ids,
      this._owner,
      _path_owner_ids
    );
    
  }
  get_path_owner_ids() {
    NavigationPathQueryResult2D.init_method_get_path_owner_ids();
    return _call_native_mb_ret(
      NavigationPathQueryResult2D._bindings.method_get_path_owner_ids,
      this._owner,
			Variant.Type.PACKED_INT64_ARRAY,
    
      
    );
    
  }
  reset() {
    NavigationPathQueryResult2D.init_method_reset();
    return _call_native_mb_no_ret(
      NavigationPathQueryResult2D._bindings.method_reset,
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
}