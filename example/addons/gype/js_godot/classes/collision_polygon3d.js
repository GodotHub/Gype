import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_set_depth;
  method_get_depth;
  method_set_polygon;
  method_get_polygon;
  method_set_disabled;
  method_is_disabled;
  method_set_margin;
  method_get_margin;
}
@GodotClass
export class CollisionPolygon3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionPolygon3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_depth() {
    if (!this._bindings.method_set_depth) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth() {
    if (!this._bindings.method_get_depth) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_polygon() {
    if (!this._bindings.method_set_polygon) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_polygon");
      this._bindings.method_set_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1509147220
      );
    }
  }
  static init_method_get_polygon() {
    if (!this._bindings.method_get_polygon) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_disabled() {
    if (!this._bindings.method_set_disabled) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_disabled");
      this._bindings.method_set_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_disabled() {
    if (!this._bindings.method_is_disabled) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("CollisionPolygon3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
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
    CollisionPolygon3D.init_method_set_depth();
    return _call_native_mb_no_ret(
      CollisionPolygon3D._bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    CollisionPolygon3D.init_method_get_depth();
    return _call_native_mb_ret(
      CollisionPolygon3D._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_polygon(_polygon) {
    CollisionPolygon3D.init_method_set_polygon();
    return _call_native_mb_no_ret(
      CollisionPolygon3D._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    CollisionPolygon3D.init_method_get_polygon();
    return _call_native_mb_ret(
      CollisionPolygon3D._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_disabled(_disabled) {
    CollisionPolygon3D.init_method_set_disabled();
    return _call_native_mb_no_ret(
      CollisionPolygon3D._bindings.method_set_disabled,
      this._owner,
      _disabled
    );
    
  }
  is_disabled() {
    CollisionPolygon3D.init_method_is_disabled();
    return _call_native_mb_ret(
      CollisionPolygon3D._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_margin(_margin) {
    CollisionPolygon3D.init_method_set_margin();
    return _call_native_mb_no_ret(
      CollisionPolygon3D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    CollisionPolygon3D.init_method_get_margin();
    return _call_native_mb_ret(
      CollisionPolygon3D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}
get disabled () {
  return this.is_disabled();
}
set disabled (new_value) {
  this.set_disabled(new_value);
}
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}

}