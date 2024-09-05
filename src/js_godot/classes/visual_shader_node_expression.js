import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { VisualShaderNodeGroupBase } from '@js_godot/classes/visual_shader_node_group_base'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_expression;
  method_get_expression;
}
export class VisualShaderNodeExpression extends VisualShaderNodeGroupBase{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeExpression");
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
      VisualShaderNodeExpression._bindings.method_set_expression,
      this._owner,
      _expression
    );
    
  }
  get_expression() {
    return _call_native_mb_ret(
      VisualShaderNodeExpression._bindings.method_get_expression,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get expression () {
  return this.get_expression();
}
set expression (new_value) {
  this.set_expression(new_value);
}


  static {
    this._init_bindings();
  }
}