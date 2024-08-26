import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Resource } from 'src/js_godot/classesresource'
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


export class PolygonPathFinder extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PolygonPathFinder");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("setup");
      this._bindings.method_setup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3251786936
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("find_path");
      this._bindings.method_find_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1562168077
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_intersections");
      this._bindings.method_get_intersections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3932192302
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_closest_point");
      this._bindings.method_get_closest_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2656412154
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("is_point_inside");
      this._bindings.method_is_point_inside = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        556197845
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("set_point_penalty");
      this._bindings.method_set_point_penalty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("PolygonPathFinder");
      let methodname = new StringName("get_point_penalty");
      this._bindings.method_get_point_penalty = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_setup,
      this._owner,
      _points, _connections
    );
  }
  find_path(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_path,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _from, _to
    );
  }
  get_intersections(_from, _to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_intersections,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      _from, _to
    );
  }
  get_closest_point(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_point,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _point
    );
  }
  is_point_inside(_point) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_point_inside,
      this._owner,
			Variant.Type.BOOL,
      _point
    );
  }
  set_point_penalty(_idx, _penalty) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_penalty,
      this._owner,
      _idx, _penalty
    );
  }
  get_point_penalty(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_point_penalty,
      this._owner,
			Variant.Type.FLOAT,
      _idx
    );
  }
  get_bounds() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bounds,
      this._owner,
			Variant.Type.RECT2
    ,
      
    );
  }
}