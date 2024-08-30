import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class RDTextureView extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDTextureView");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("set_format_override");
        this._bindings.method_set_format_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          565531219
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("get_format_override");
        this._bindings.method_get_format_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2235804183
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("set_swizzle_r");
        this._bindings.method_set_swizzle_r = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3833362581
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("get_swizzle_r");
        this._bindings.method_get_swizzle_r = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4150792614
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("set_swizzle_g");
        this._bindings.method_set_swizzle_g = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3833362581
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("get_swizzle_g");
        this._bindings.method_get_swizzle_g = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4150792614
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("set_swizzle_b");
        this._bindings.method_set_swizzle_b = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3833362581
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("get_swizzle_b");
        this._bindings.method_get_swizzle_b = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4150792614
        );
      }
      {
        let classname = new StringName("RDTextureView");
        let methodname = new StringName("set_swizzle_a");
        this._bindings.method_set_swizzle_a = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3833362581
        );
      }
      {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_format_override,
      this._owner,
      _p_member
    );
    
  }
  get_format_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format_override,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_swizzle_r(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_swizzle_r,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_r() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_swizzle_r,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_swizzle_g(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_swizzle_g,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_g() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_swizzle_g,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_swizzle_b(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_swizzle_b,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_b() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_swizzle_b,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_swizzle_a(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_swizzle_a,
      this._owner,
      _p_member
    );
    
  }
  get_swizzle_a() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_swizzle_a,
      this._owner,
			Variant.INT,
      
    );
    
  }
}