import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
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
  method_set_bytecode;
  method_get_spirv;
  method_get_version_list;
  method_set_base_error;
  method_get_base_error;
}
@GodotClass
export class RDShaderFile extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderFile");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_bytecode() {
    if (!this._bindings.method_set_bytecode) {
      let classname = new StringName("RDShaderFile");
      let methodname = new StringName("set_bytecode");
      this._bindings.method_set_bytecode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558064255
      );
    }
  }
  static init_method_get_spirv() {
    if (!this._bindings.method_get_spirv) {
      let classname = new StringName("RDShaderFile");
      let methodname = new StringName("get_spirv");
      this._bindings.method_get_spirv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3340165340
      );
    }
  }
  static init_method_get_version_list() {
    if (!this._bindings.method_get_version_list) {
      let classname = new StringName("RDShaderFile");
      let methodname = new StringName("get_version_list");
      this._bindings.method_get_version_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_base_error() {
    if (!this._bindings.method_set_base_error) {
      let classname = new StringName("RDShaderFile");
      let methodname = new StringName("set_base_error");
      this._bindings.method_set_base_error = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_base_error() {
    if (!this._bindings.method_get_base_error) {
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
    RDShaderFile.init_method_set_bytecode();
    return _call_native_mb_no_ret(
      RDShaderFile._bindings.method_set_bytecode,
      this._owner,
      _bytecode, _version
    );
    
  }
  get_spirv(_version) {
    RDShaderFile.init_method_get_spirv();
    return _call_native_mb_ret(
      RDShaderFile._bindings.method_get_spirv,
      this._owner,
			Variant.Type.OBJECT,
      _version
    );
    
  }
  get_version_list() {
    RDShaderFile.init_method_get_version_list();
    return _call_native_mb_ret(
      RDShaderFile._bindings.method_get_version_list,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_base_error(_error) {
    RDShaderFile.init_method_set_base_error();
    return _call_native_mb_no_ret(
      RDShaderFile._bindings.method_set_base_error,
      this._owner,
      _error
    );
    
  }
  get_base_error() {
    RDShaderFile.init_method_get_base_error();
    return _call_native_mb_ret(
      RDShaderFile._bindings.method_get_base_error,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get base_error () {
  return this.get_base_error();
}
set base_error (new_value) {
  this.set_base_error(new_value);
}

}