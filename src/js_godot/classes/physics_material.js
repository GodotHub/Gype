import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_friction;
    method_get_friction;
    method_set_rough;
    method_is_rough;
    method_set_bounce;
    method_get_bounce;
    method_set_absorbent;
    method_is_absorbent;
}


export class PhysicsMaterial extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("set_friction");
        this._bindings.method_set_friction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("get_friction");
        this._bindings.method_get_friction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("set_rough");
        this._bindings.method_set_rough = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("is_rough");
        this._bindings.method_is_rough = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("set_bounce");
        this._bindings.method_set_bounce = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("get_bounce");
        this._bindings.method_get_bounce = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("set_absorbent");
        this._bindings.method_set_absorbent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsMaterial");
        let methodname = new StringName("is_absorbent");
        this._bindings.method_is_absorbent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_friction(_friction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_friction,
      this._owner,
      _friction
    );
    
  }
  get_friction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_friction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_rough(_rough) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rough,
      this._owner,
      _rough
    );
    
  }
  is_rough() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_rough,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_bounce(_bounce) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bounce,
      this._owner,
      _bounce
    );
    
  }
  get_bounce() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bounce,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_absorbent(_absorbent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_absorbent,
      this._owner,
      _absorbent
    );
    
  }
  is_absorbent() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_absorbent,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}