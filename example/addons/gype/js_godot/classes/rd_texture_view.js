import * as internal from '__internal__';
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
  method_set_format_override;
  method_get_format_override;
  method_set_swizzle_r;
  method_get_swizzle_r;
  method_set_swizzle_g;
  method_get_swizzle_g;
  method_set_swizzle_b;
  method_get_swizzle_b;
  method_set_swizzle_a;
  method_get_swizzle_a;
}
@GodotClass
export class RDTextureView extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDTextureView");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_format_override() {
    if (!this._bindings.method_set_format_override) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("set_format_override");
      this._bindings.method_set_format_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        565531219
      );
    }
  }
  static init_method_get_format_override() {
    if (!this._bindings.method_get_format_override) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("get_format_override");
      this._bindings.method_get_format_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2235804183
      );
    }
  }
  static init_method_set_swizzle_r() {
    if (!this._bindings.method_set_swizzle_r) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("set_swizzle_r");
      this._bindings.method_set_swizzle_r = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3833362581
      );
    }
  }
  static init_method_get_swizzle_r() {
    if (!this._bindings.method_get_swizzle_r) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("get_swizzle_r");
      this._bindings.method_get_swizzle_r = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4150792614
      );
    }
  }
  static init_method_set_swizzle_g() {
    if (!this._bindings.method_set_swizzle_g) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("set_swizzle_g");
      this._bindings.method_set_swizzle_g = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3833362581
      );
    }
  }
  static init_method_get_swizzle_g() {
    if (!this._bindings.method_get_swizzle_g) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("get_swizzle_g");
      this._bindings.method_get_swizzle_g = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4150792614
      );
    }
  }
  static init_method_set_swizzle_b() {
    if (!this._bindings.method_set_swizzle_b) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("set_swizzle_b");
      this._bindings.method_set_swizzle_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3833362581
      );
    }
  }
  static init_method_get_swizzle_b() {
    if (!this._bindings.method_get_swizzle_b) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("get_swizzle_b");
      this._bindings.method_get_swizzle_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4150792614
      );
    }
  }
  static init_method_set_swizzle_a() {
    if (!this._bindings.method_set_swizzle_a) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("set_swizzle_a");
      this._bindings.method_set_swizzle_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3833362581
      );
    }
  }
  static init_method_get_swizzle_a() {
    if (!this._bindings.method_get_swizzle_a) {
      let classname = new StringName("RDTextureView");
      let methodname = new StringName("get_swizzle_a");
      this._bindings.method_get_swizzle_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4150792614
      );
    }
  }

  
  
  set_format_override(_p_member) {
    RDTextureView.init_method_set_format_override();
    return _call_native_mb_no_ret(
      RDTextureView._bindings.method_set_format_override,
      this._owner,
      _p_member
    );
    
  }
  get_format_override() {
    RDTextureView.init_method_get_format_override();
    return _call_native_mb_ret(
      RDTextureView._bindings.method_get_format_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_swizzle_r(_p_member) {
    RDTextureView.init_method_set_swizzle_r();
    return _call_native_mb_no_ret(
      RDTextureView._bindings.method_set_swizzle_r,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_r() {
    RDTextureView.init_method_get_swizzle_r();
    return _call_native_mb_ret(
      RDTextureView._bindings.method_get_swizzle_r,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_swizzle_g(_p_member) {
    RDTextureView.init_method_set_swizzle_g();
    return _call_native_mb_no_ret(
      RDTextureView._bindings.method_set_swizzle_g,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_g() {
    RDTextureView.init_method_get_swizzle_g();
    return _call_native_mb_ret(
      RDTextureView._bindings.method_get_swizzle_g,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_swizzle_b(_p_member) {
    RDTextureView.init_method_set_swizzle_b();
    return _call_native_mb_no_ret(
      RDTextureView._bindings.method_set_swizzle_b,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_b() {
    RDTextureView.init_method_get_swizzle_b();
    return _call_native_mb_ret(
      RDTextureView._bindings.method_get_swizzle_b,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_swizzle_a(_p_member) {
    RDTextureView.init_method_set_swizzle_a();
    return _call_native_mb_no_ret(
      RDTextureView._bindings.method_set_swizzle_a,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_a() {
    RDTextureView.init_method_get_swizzle_a();
    return _call_native_mb_ret(
      RDTextureView._bindings.method_get_swizzle_a,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get format_override () {
  return this.get_format_override();
}
set format_override (new_value) {
  this.set_format_override(new_value);
}
get swizzle_r () {
  return this.get_swizzle_r();
}
set swizzle_r (new_value) {
  this.set_swizzle_r(new_value);
}
get swizzle_g () {
  return this.get_swizzle_g();
}
set swizzle_g (new_value) {
  this.set_swizzle_g(new_value);
}
get swizzle_b () {
  return this.get_swizzle_b();
}
set swizzle_b (new_value) {
  this.set_swizzle_b(new_value);
}
get swizzle_a () {
  return this.get_swizzle_a();
}
set swizzle_a (new_value) {
  this.set_swizzle_a(new_value);
}

}