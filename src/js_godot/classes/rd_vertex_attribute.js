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
    method_set_location;
    method_get_location;
    method_set_offset;
    method_get_offset;
    method_set_format;
    method_get_format;
    method_set_stride;
    method_get_stride;
    method_set_frequency;
    method_get_frequency;
}


export class RDVertexAttribute extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDVertexAttribute");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("set_location");
        this._bindings.method_set_location = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("get_location");
        this._bindings.method_get_location = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("set_offset");
        this._bindings.method_set_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("get_offset");
        this._bindings.method_get_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("set_format");
        this._bindings.method_set_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          565531219
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("get_format");
        this._bindings.method_get_format = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2235804183
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("set_stride");
        this._bindings.method_set_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("get_stride");
        this._bindings.method_get_stride = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("set_frequency");
        this._bindings.method_set_frequency = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          522141836
        );
      }
      {
        let classname = new StringName("RDVertexAttribute");
        let methodname = new StringName("get_frequency");
        this._bindings.method_get_frequency = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4154106413
        );
      }
  }
  set_location(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_location,
      this._owner,
      _p_member
    );
    
  }
  get_location() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_location,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_offset(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_offset,
      this._owner,
      _p_member
    );
    
  }
  get_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_offset,
      this._owner,
			Variant.Type.INT,
      
    );
    
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
  set_stride(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stride,
      this._owner,
      _p_member
    );
    
  }
  get_stride() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stride,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_frequency(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frequency,
      this._owner,
      _p_member
    );
    
  }
  get_frequency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frequency,
      this._owner,
			Variant.INT,
      
    );
    
  }
}