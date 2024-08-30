import * as internal from '__internal__';
import { VisualShaderNodeGroupBase } from 'src/js_godot/classes/visual_shader_node_group_base'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_expression;
    method_get_expression;
}


export class VisualShaderNodeExpression extends VisualShaderNodeGroupBase{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeExpression");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeExpression");
        let methodname = new StringName("set_expression");
        this._bindings.method_set_expression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("VisualShaderNodeExpression");
        let methodname = new StringName("get_expression");
        this._bindings.method_get_expression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
  }
  set_expression(_expression) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_expression,
      this._owner,
      _expression
    );
    
  }
  get_expression() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_expression,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
}