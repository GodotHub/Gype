import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_setup;
  method_find_path;
  method_get_intersections;
  method_get_closest_point;
  method_is_point_inside;
  method_set_point_penalty;
  method_get_point_penalty;
  method_get_bounds;
}
@GodotClass
export class PolygonPathFinder extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PolygonPathFinder");
    } else {
      super(godot_object);
    }
  }
  static init_method_setup() {
    if (!this._bindings.method_setup) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("setup");
      this._bindings.method_setup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3251786936
      );
    }
  }
  static init_method_find_path() {
    if (!this._bindings.method_find_path) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("find_path");
      this._bindings.method_find_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1562168077
      );
    }
  }
  static init_method_get_intersections() {
    if (!this._bindings.method_get_intersections) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_intersections");
      this._bindings.method_get_intersections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3932192302
      );
    }
  }
  static init_method_get_closest_point() {
    if (!this._bindings.method_get_closest_point) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2656412154
      );
    }
  }
  static init_method_is_point_inside() {
    if (!this._bindings.method_is_point_inside) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("is_point_inside");
      this._bindings.method_is_point_inside = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        556197845
      );
    }
  }
  static init_method_set_point_penalty() {
    if (!this._bindings.method_set_point_penalty) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("set_point_penalty");
      this._bindings.method_set_point_penalty = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_point_penalty() {
    if (!this._bindings.method_get_point_penalty) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_point_penalty");
      this._bindings.method_get_point_penalty = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_get_bounds() {
    if (!this._bindings.method_get_bounds) {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_bounds");
      this._bindings.method_get_bounds = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }

  
  
  setup(_points, _connections) {
    PolygonPathFinder.init_method_setup();
    return _call_native_mb_no_ret(
      PolygonPathFinder._bindings.method_setup,
      this._owner,
      _points, _connections
    );
    
  }
  find_path(_from, _to) {
    PolygonPathFinder.init_method_find_path();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_find_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _from, _to
    );
    
  }
  get_intersections(_from, _to) {
    PolygonPathFinder.init_method_get_intersections();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_get_intersections,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _from, _to
    );
    
  }
  get_closest_point(_point) {
    PolygonPathFinder.init_method_get_closest_point();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point
    );
    
  }
  is_point_inside(_point) {
    PolygonPathFinder.init_method_is_point_inside();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_is_point_inside,
      this._owner,
			Variant.Type.BOOL,
    
      _point
    );
    
  }
  set_point_penalty(_idx, _penalty) {
    PolygonPathFinder.init_method_set_point_penalty();
    return _call_native_mb_no_ret(
      PolygonPathFinder._bindings.method_set_point_penalty,
      this._owner,
      _idx, _penalty
    );
    
  }
  get_point_penalty(_idx) {
    PolygonPathFinder.init_method_get_point_penalty();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_get_point_penalty,
      this._owner,
			Variant.Type.FLOAT,
    
      _idx
    );
    
  }
  get_bounds() {
    PolygonPathFinder.init_method_get_bounds();
    return _call_native_mb_ret(
      PolygonPathFinder._bindings.method_get_bounds,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  
get data () {
  return this._get_data();
}
set data (new_value) {
  this._set_data(new_value);
}

}