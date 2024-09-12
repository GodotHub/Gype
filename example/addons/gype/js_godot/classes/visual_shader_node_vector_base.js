import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import { StringName } from '@js_godot/variant/string_name'
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
export class VisualShaderNodeVectorBase extends VisualShaderNode{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeVectorBase");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_op_type() {
    if (!this.#_bindings.method_set_op_type) {
      let classname = new StringName("VisualShaderNodeVectorBase");
      let methodname = new StringName("set_op_type");
      this.#_bindings.method_set_op_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1692596998
      );
    }
  }
  static init_method_get_op_type() {
    if (!this.#_bindings.method_get_op_type) {
      let classname = new StringName("VisualShaderNodeVectorBase");
      let methodname = new StringName("get_op_type");
      this.#_bindings.method_get_op_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2568738462
      );
    }
  }

  
  
  set_op_type(_type) {
    VisualShaderNodeVectorBase.init_method_set_op_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeVectorBase.#_bindings.method_set_op_type,
      this._owner,
      _type
    );
    
  }
  get_op_type() {
    VisualShaderNodeVectorBase.init_method_get_op_type();
    return _call_native_mb_ret(
      VisualShaderNodeVectorBase.#_bindings.method_get_op_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get op_type () {
  return this.get_op_type();
}
set op_type (new_value) {
  this.set_op_type(new_value);
}

  static OpType = {
    OP_TYPE_VECTOR_2D: 0,
    OP_TYPE_VECTOR_3D: 1,
    OP_TYPE_VECTOR_4D: 2,
    OP_TYPE_MAX: 3,
  }
}