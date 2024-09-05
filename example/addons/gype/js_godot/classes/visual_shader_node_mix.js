import * as internal from '__internal__';
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_op_type;
  method_get_op_type;
}
export class VisualShaderNodeMix extends VisualShaderNode{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeMix");
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
      let classname = new StringName("VisualShaderNodeMix");
      let methodname = new StringName("set_op_type");
      this._bindings.method_set_op_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3397501671
      );
    }
    {
      let classname = new StringName("VisualShaderNodeMix");
      let methodname = new StringName("get_op_type");
      this._bindings.method_get_op_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4013957297
      );
    }
  }
  
  set_op_type(_op_type) {
    return _call_native_mb_no_ret(
      VisualShaderNodeMix._bindings.method_set_op_type,
      this._owner,
      _op_type
    );
    
  }
  get_op_type() {
    return _call_native_mb_ret(
      VisualShaderNodeMix._bindings.method_get_op_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get op_type () {
  return this.get_op_type();
}
set op_type (new_value) {
  this.set_op_type(new_value);
}

  static OpType = {
    OP_TYPE_SCALAR: 0,
    OP_TYPE_VECTOR_2D: 1,
    OP_TYPE_VECTOR_2D_SCALAR: 2,
    OP_TYPE_VECTOR_3D: 3,
    OP_TYPE_VECTOR_3D_SCALAR: 4,
    OP_TYPE_VECTOR_4D: 5,
    OP_TYPE_VECTOR_4D_SCALAR: 6,
    OP_TYPE_MAX: 7,
  }

  static {
    this._init_bindings();
  }
}