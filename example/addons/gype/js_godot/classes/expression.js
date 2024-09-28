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
  method_parse;
  method_execute;
  method_has_execute_failed;
  method_get_error_text;
}
@GodotClass
export class Expression extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Expression");
    } else {
      super(godot_object);
    }
  }
  static init_method_parse() {
    if (!this._bindings.method_parse) {
      let classname = new StringName("Expression");
      let methodname = new StringName("parse");
      this._bindings.method_parse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3069722906
      );
    }
  }
  static init_method_execute() {
    if (!this._bindings.method_execute) {
      let classname = new StringName("Expression");
      let methodname = new StringName("execute");
      this._bindings.method_execute = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3712471238
      );
    }
  }
  static init_method_has_execute_failed() {
    if (!this._bindings.method_has_execute_failed) {
      let classname = new StringName("Expression");
      let methodname = new StringName("has_execute_failed");
      this._bindings.method_has_execute_failed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_error_text() {
    if (!this._bindings.method_get_error_text) {
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
    Expression.init_method_parse();
    return _call_native_mb_ret(
      Expression._bindings.method_parse,
      this._owner,
			Variant.Type.INT,
    
      _expression, _input_names
    );
    
  }
  execute(_inputs, _base_instance, _show_error, _const_calls_only) {
    Expression.init_method_execute();
    return _call_native_mb_ret(
      Expression._bindings.method_execute,
      this._owner,
			Variant.Type.VARIANT,
    
      _inputs, _base_instance, _show_error, _const_calls_only
    );
    
  }
  has_execute_failed() {
    Expression.init_method_has_execute_failed();
    return _call_native_mb_ret(
      Expression._bindings.method_has_execute_failed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_error_text() {
    Expression.init_method_get_error_text();
    return _call_native_mb_ret(
      Expression._bindings.method_get_error_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  

}