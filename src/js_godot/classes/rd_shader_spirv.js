import * as internal from '__internal__';
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
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
    method_set_stage_bytecode;
    method_get_stage_bytecode;
    method_set_stage_compile_error;
    method_get_stage_compile_error;
}


export class RDShaderSPIRV extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDShaderSPIRV");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
			Variant.Type.PACKED_BYTE_ARRAY
    ,
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
			Variant.Type.STRING
    ,
      _stage
    );
    
  }
}