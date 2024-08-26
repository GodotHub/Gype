import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
class _MethodBindings {
    method_set_depth;
    method_get_depth;
    method_set_polygon;
    method_get_polygon;
    method_set_disabled;
    method_is_disabled;
    method_set_margin;
    method_get_margin;
}


export class CollisionPolygon3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionPolygon3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_disabled");
      this._bindings.method_set_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_polygon(_polygon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
  }
  get_polygon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_disabled(_disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disabled,
      this._owner,
      _disabled
    );
  }
  is_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}