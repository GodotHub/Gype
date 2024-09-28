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
  method_set_friction;
  method_get_friction;
  method_set_rough;
  method_is_rough;
  method_set_bounce;
  method_get_bounce;
  method_set_absorbent;
  method_is_absorbent;
}
@GodotClass
export class PhysicsMaterial extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsMaterial");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_friction() {
    if (!this._bindings.method_set_friction) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("set_friction");
      this._bindings.method_set_friction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_friction() {
    if (!this._bindings.method_get_friction) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("get_friction");
      this._bindings.method_get_friction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_rough() {
    if (!this._bindings.method_set_rough) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("set_rough");
      this._bindings.method_set_rough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_rough() {
    if (!this._bindings.method_is_rough) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("is_rough");
      this._bindings.method_is_rough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_bounce() {
    if (!this._bindings.method_set_bounce) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("set_bounce");
      this._bindings.method_set_bounce = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bounce() {
    if (!this._bindings.method_get_bounce) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("get_bounce");
      this._bindings.method_get_bounce = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_absorbent() {
    if (!this._bindings.method_set_absorbent) {
      let classname = new StringName("PhysicsMaterial");
      let methodname = new StringName("set_absorbent");
      this._bindings.method_set_absorbent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_absorbent() {
    if (!this._bindings.method_is_absorbent) {
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
    PhysicsMaterial.init_method_set_friction();
    return _call_native_mb_no_ret(
      PhysicsMaterial._bindings.method_set_friction,
      this._owner,
      _friction
    );
    
  }
  get_friction() {
    PhysicsMaterial.init_method_get_friction();
    return _call_native_mb_ret(
      PhysicsMaterial._bindings.method_get_friction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_rough(_rough) {
    PhysicsMaterial.init_method_set_rough();
    return _call_native_mb_no_ret(
      PhysicsMaterial._bindings.method_set_rough,
      this._owner,
      _rough
    );
    
  }
  is_rough() {
    PhysicsMaterial.init_method_is_rough();
    return _call_native_mb_ret(
      PhysicsMaterial._bindings.method_is_rough,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_bounce(_bounce) {
    PhysicsMaterial.init_method_set_bounce();
    return _call_native_mb_no_ret(
      PhysicsMaterial._bindings.method_set_bounce,
      this._owner,
      _bounce
    );
    
  }
  get_bounce() {
    PhysicsMaterial.init_method_get_bounce();
    return _call_native_mb_ret(
      PhysicsMaterial._bindings.method_get_bounce,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_absorbent(_absorbent) {
    PhysicsMaterial.init_method_set_absorbent();
    return _call_native_mb_no_ret(
      PhysicsMaterial._bindings.method_set_absorbent,
      this._owner,
      _absorbent
    );
    
  }
  is_absorbent() {
    PhysicsMaterial.init_method_is_absorbent();
    return _call_native_mb_ret(
      PhysicsMaterial._bindings.method_is_absorbent,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get friction () {
  return this.get_friction();
}
set friction (new_value) {
  this.set_friction(new_value);
}
get rough () {
  return this.is_rough();
}
set rough (new_value) {
  this.set_rough(new_value);
}
get bounce () {
  return this.get_bounce();
}
set bounce (new_value) {
  this.set_bounce(new_value);
}
get absorbent () {
  return this.is_absorbent();
}
set absorbent (new_value) {
  this.set_absorbent(new_value);
}

}