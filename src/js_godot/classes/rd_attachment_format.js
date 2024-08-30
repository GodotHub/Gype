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
    method_set_format;
    method_get_format;
    method_set_samples;
    method_get_samples;
    method_set_usage_flags;
    method_get_usage_flags;
}


export class RDAttachmentFormat extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDAttachmentFormat");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("set_format");
        this._bindings.method_set_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          565531219
        );
      }
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("get_format");
        this._bindings.method_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2235804183
        );
      }
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("set_samples");
        this._bindings.method_set_samples = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3774171498
        );
      }
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("get_samples");
        this._bindings.method_get_samples = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          407791724
        );
      }
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("set_usage_flags");
        this._bindings.method_set_usage_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDAttachmentFormat");
        let methodname = new StringName("get_usage_flags");
        this._bindings.method_get_usage_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_format(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_format,
      this._owner,
      _p_member
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_samples(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_samples,
      this._owner,
      _p_member
    );
    
  }
  get_samples() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_samples,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_usage_flags(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_usage_flags,
      this._owner,
      _p_member
    );
    
  }
  get_usage_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_usage_flags,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}