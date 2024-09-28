import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_polygon;
  method_get_polygon;
  method_set_build_mode;
  method_get_build_mode;
  method_set_disabled;
  method_is_disabled;
  method_set_one_way_collision;
  method_is_one_way_collision_enabled;
  method_set_one_way_collision_margin;
  method_get_one_way_collision_margin;
}
@GodotClass
export class CollisionPolygon2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionPolygon2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_polygon() {
    if (!this._bindings.method_set_polygon) {
      let classname = new StringName("CollisionPolygon2D");
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
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("get_polygon");
      this._bindings.method_get_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2961356807
      );
    }
  }
  static init_method_set_build_mode() {
    if (!this._bindings.method_set_build_mode) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("set_build_mode");
      this._bindings.method_set_build_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2780803135
      );
    }
  }
  static init_method_get_build_mode() {
    if (!this._bindings.method_get_build_mode) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("get_build_mode");
      this._bindings.method_get_build_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3044948800
      );
    }
  }
  static init_method_set_disabled() {
    if (!this._bindings.method_set_disabled) {
      let classname = new StringName("CollisionPolygon2D");
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
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_one_way_collision() {
    if (!this._bindings.method_set_one_way_collision) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("set_one_way_collision");
      this._bindings.method_set_one_way_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_one_way_collision_enabled() {
    if (!this._bindings.method_is_one_way_collision_enabled) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("is_one_way_collision_enabled");
      this._bindings.method_is_one_way_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_one_way_collision_margin() {
    if (!this._bindings.method_set_one_way_collision_margin) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("set_one_way_collision_margin");
      this._bindings.method_set_one_way_collision_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_one_way_collision_margin() {
    if (!this._bindings.method_get_one_way_collision_margin) {
      let classname = new StringName("CollisionPolygon2D");
      let methodname = new StringName("get_one_way_collision_margin");
      this._bindings.method_get_one_way_collision_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_polygon(_polygon) {
    CollisionPolygon2D.init_method_set_polygon();
    return _call_native_mb_no_ret(
      CollisionPolygon2D._bindings.method_set_polygon,
      this._owner,
      _polygon
    );
    
  }
  get_polygon() {
    CollisionPolygon2D.init_method_get_polygon();
    return _call_native_mb_ret(
      CollisionPolygon2D._bindings.method_get_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
    );
    
  }
  set_build_mode(_build_mode) {
    CollisionPolygon2D.init_method_set_build_mode();
    return _call_native_mb_no_ret(
      CollisionPolygon2D._bindings.method_set_build_mode,
      this._owner,
      _build_mode
    );
    
  }
  get_build_mode() {
    CollisionPolygon2D.init_method_get_build_mode();
    return _call_native_mb_ret(
      CollisionPolygon2D._bindings.method_get_build_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_disabled(_disabled) {
    CollisionPolygon2D.init_method_set_disabled();
    return _call_native_mb_no_ret(
      CollisionPolygon2D._bindings.method_set_disabled,
      this._owner,
      _disabled
    );
    
  }
  is_disabled() {
    CollisionPolygon2D.init_method_is_disabled();
    return _call_native_mb_ret(
      CollisionPolygon2D._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_one_way_collision(_enabled) {
    CollisionPolygon2D.init_method_set_one_way_collision();
    return _call_native_mb_no_ret(
      CollisionPolygon2D._bindings.method_set_one_way_collision,
      this._owner,
      _enabled
    );
    
  }
  is_one_way_collision_enabled() {
    CollisionPolygon2D.init_method_is_one_way_collision_enabled();
    return _call_native_mb_ret(
      CollisionPolygon2D._bindings.method_is_one_way_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_one_way_collision_margin(_margin) {
    CollisionPolygon2D.init_method_set_one_way_collision_margin();
    return _call_native_mb_no_ret(
      CollisionPolygon2D._bindings.method_set_one_way_collision_margin,
      this._owner,
      _margin
    );
    
  }
  get_one_way_collision_margin() {
    CollisionPolygon2D.init_method_get_one_way_collision_margin();
    return _call_native_mb_ret(
      CollisionPolygon2D._bindings.method_get_one_way_collision_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get build_mode () {
  return this.get_build_mode();
}
set build_mode (new_value) {
  this.set_build_mode(new_value);
}
get polygon () {
  return this.get_polygon();
}
set polygon (new_value) {
  this.set_polygon(new_value);
}
get disabled () {
  return this.is_disabled();
}
set disabled (new_value) {
  this.set_disabled(new_value);
}
get one_way_collision () {
  return this.is_one_way_collision_enabled();
}
set one_way_collision (new_value) {
  this.set_one_way_collision(new_value);
}
get one_way_collision_margin () {
  return this.get_one_way_collision_margin();
}
set one_way_collision_margin (new_value) {
  this.set_one_way_collision_margin(new_value);
}

  static BuildMode = {
    BUILD_SOLIDS: 0,
    BUILD_SEGMENTS: 1,
  }
}