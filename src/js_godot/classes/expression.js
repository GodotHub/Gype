import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_parse;
    method_execute;
    method_has_execute_failed;
    method_get_error_text;
}


export class Expression extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Expression");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Expression");
        let methodname = new StringName("parse");
        this._bindings.method_parse = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3069722906
        );
      }
      {
        let classname = new StringName("Expression");
        let methodname = new StringName("execute");
        this._bindings.method_execute = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3712471238
        );
      }
      {
        let classname = new StringName("Expression");
        let methodname = new StringName("has_execute_failed");
        this._bindings.method_has_execute_failed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Expression");
        let methodname = new StringName("get_error_text");
        this._bindings.method_get_error_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
  }
  parse(_expression, _input_names) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parse,
      this._owner,
			Variant.INT,
      _expression, _input_names
    );
    
  }
  execute(_inputs, _base_instance, _show_error, _const_calls_only) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_execute,
      this._owner,
			Variant.Type.VARIANT
    ,
      _inputs, _base_instance, _show_error, _const_calls_only
    );
    
  }
  has_execute_failed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_execute_failed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_error_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_error_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
}