import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_stage_bytecode;
  method_get_stage_bytecode;
  method_set_stage_compile_error;
  method_get_stage_compile_error;
}
export class RDShaderSPIRV extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderSPIRV");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("RDShaderSPIRV");
      let methodname = new StringName("set_stage_bytecode");
      this._bindings.method_set_stage_bytecode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3514097977
      );
    }
    {
      let classname = new StringName("RDShaderSPIRV");
      let methodname = new StringName("get_stage_bytecode");
      this._bindings.method_get_stage_bytecode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3816765404
      );
    }
    {
      let classname = new StringName("RDShaderSPIRV");
      let methodname = new StringName("set_stage_compile_error");
      this._bindings.method_set_stage_compile_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        620821314
      );
    }
    {
      let classname = new StringName("RDShaderSPIRV");
      let methodname = new StringName("get_stage_compile_error");
      this._bindings.method_get_stage_compile_error = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3354920045
      );
    }
  }
  set_stage_bytecode(_stage, _bytecode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stage_bytecode,
      this._owner,
      _stage, _bytecode
    );
    
  }
  get_stage_bytecode(_stage) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stage_bytecode,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      _stage
    );
    
  }
  set_stage_compile_error(_stage, _compile_error) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stage_compile_error,
      this._owner,
      _stage, _compile_error
    );
    
  }
  get_stage_compile_error(_stage) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stage_compile_error,
      this._owner,
			Variant.Type.STRING,
    
      _stage
    );
    
  }
  
get bytecode_vertex () {
  return this.get_stage_bytecode();
}
set bytecode_vertex (new_value) {
  this.set_stage_bytecode(new_value);
}
get bytecode_fragment () {
  return this.get_stage_bytecode();
}
set bytecode_fragment (new_value) {
  this.set_stage_bytecode(new_value);
}
get bytecode_tesselation_control () {
  return this.get_stage_bytecode();
}
set bytecode_tesselation_control (new_value) {
  this.set_stage_bytecode(new_value);
}
get bytecode_tesselation_evaluation () {
  return this.get_stage_bytecode();
}
set bytecode_tesselation_evaluation (new_value) {
  this.set_stage_bytecode(new_value);
}
get bytecode_compute () {
  return this.get_stage_bytecode();
}
set bytecode_compute (new_value) {
  this.set_stage_bytecode(new_value);
}
get compile_error_vertex () {
  return this.get_stage_compile_error();
}
set compile_error_vertex (new_value) {
  this.set_stage_compile_error(new_value);
}
get compile_error_fragment () {
  return this.get_stage_compile_error();
}
set compile_error_fragment (new_value) {
  this.set_stage_compile_error(new_value);
}
get compile_error_tesselation_control () {
  return this.get_stage_compile_error();
}
set compile_error_tesselation_control (new_value) {
  this.set_stage_compile_error(new_value);
}
get compile_error_tesselation_evaluation () {
  return this.get_stage_compile_error();
}
set compile_error_tesselation_evaluation (new_value) {
  this.set_stage_compile_error(new_value);
}
get compile_error_compute () {
  return this.get_stage_compile_error();
}
set compile_error_compute (new_value) {
  this.set_stage_compile_error(new_value);
}


  static {
    this._init_bindings();
  }
}