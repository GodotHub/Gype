import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_bytecode;
    method_get_spirv;
    method_get_version_list;
    method_set_base_error;
    method_get_base_error;
}


export class RDShaderFile extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderFile");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDShaderFile");
        let methodname = new StringName("set_bytecode");
        this._bindings.method_set_bytecode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1558064255
        );
      }
      {
        let classname = new StringName("RDShaderFile");
        let methodname = new StringName("get_spirv");
        this._bindings.method_get_spirv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3340165340
        );
      }
      {
        let classname = new StringName("RDShaderFile");
        let methodname = new StringName("get_version_list");
        this._bindings.method_get_version_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("RDShaderFile");
        let methodname = new StringName("set_base_error");
        this._bindings.method_set_base_error = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("RDShaderFile");
        let methodname = new StringName("get_base_error");
        this._bindings.method_get_base_error = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
  }
  set_bytecode(_bytecode, _version) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bytecode,
      this._owner,
      _bytecode, _version
    );
    
  }
  get_spirv(_version) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spirv,
      this._owner,
			Variant.INT,
      _version
    );
    
  }
  get_version_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_version_list,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_base_error(_error) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_base_error,
      this._owner,
      _error
    );
    
  }
  get_base_error() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base_error,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
}