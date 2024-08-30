import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { Node2D } from 'src/js_godot/classes/node2d'
import { Color } from 'src/js_godot/variant/color'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_shape;
    method_get_shape;
    method_set_disabled;
    method_is_disabled;
    method_set_one_way_collision;
    method_is_one_way_collision_enabled;
    method_set_one_way_collision_margin;
    method_get_one_way_collision_margin;
    method_set_debug_color;
    method_get_debug_color;
}


export class CollisionShape2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionShape2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("set_shape");
        this._bindings.method_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          771364740
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("get_shape");
        this._bindings.method_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          522005891
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("set_disabled");
        this._bindings.method_set_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("is_disabled");
        this._bindings.method_is_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("set_one_way_collision");
        this._bindings.method_set_one_way_collision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("is_one_way_collision_enabled");
        this._bindings.method_is_one_way_collision_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("set_one_way_collision_margin");
        this._bindings.method_set_one_way_collision_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("get_one_way_collision_margin");
        this._bindings.method_get_one_way_collision_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("set_debug_color");
        this._bindings.method_set_debug_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("CollisionShape2D");
        let methodname = new StringName("get_debug_color");
        this._bindings.method_get_debug_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3444240500
        );
      }
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
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
  set_one_way_collision(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_one_way_collision,
      this._owner,
      _enabled
    );
    
  }
  is_one_way_collision_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_one_way_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_one_way_collision_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_one_way_collision_margin,
      this._owner,
      _margin
    );
    
  }
  get_one_way_collision_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_one_way_collision_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_debug_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_debug_color,
      this._owner,
      _color
    );
    
  }
  get_debug_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_debug_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
    
  }
}