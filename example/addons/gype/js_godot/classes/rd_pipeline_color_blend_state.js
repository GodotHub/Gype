import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_enable_logic_op;
  method_get_enable_logic_op;
  method_set_logic_op;
  method_get_logic_op;
  method_set_blend_constant;
  method_get_blend_constant;
  method_set_attachments;
  method_get_attachments;
}
export class RDPipelineColorBlendState extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineColorBlendState");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_enable_logic_op() {
    if (!this.#_bindings.method_set_enable_logic_op) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("set_enable_logic_op");
      this.#_bindings.method_set_enable_logic_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_logic_op() {
    if (!this.#_bindings.method_get_enable_logic_op) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("get_enable_logic_op");
      this.#_bindings.method_get_enable_logic_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_logic_op() {
    if (!this.#_bindings.method_set_logic_op) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("set_logic_op");
      this.#_bindings.method_set_logic_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3610841058
      );
    }
  }
  static init_method_get_logic_op() {
    if (!this.#_bindings.method_get_logic_op) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("get_logic_op");
      this.#_bindings.method_get_logic_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        988254690
      );
    }
  }
  static init_method_set_blend_constant() {
    if (!this.#_bindings.method_set_blend_constant) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("set_blend_constant");
      this.#_bindings.method_set_blend_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_blend_constant() {
    if (!this.#_bindings.method_get_blend_constant) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("get_blend_constant");
      this.#_bindings.method_get_blend_constant = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_attachments() {
    if (!this.#_bindings.method_set_attachments) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("set_attachments");
      this.#_bindings.method_set_attachments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_attachments() {
    if (!this.#_bindings.method_get_attachments) {
      let classname = new StringName("RDPipelineColorBlendState");
      let methodname = new StringName("get_attachments");
      this.#_bindings.method_get_attachments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  set_enable_logic_op(_p_member) {
    RDPipelineColorBlendState.init_method_set_enable_logic_op();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendState.#_bindings.method_set_enable_logic_op,
      this._owner,
      _p_member
    );
    
  }
  get_enable_logic_op() {
    RDPipelineColorBlendState.init_method_get_enable_logic_op();
    return _call_native_mb_ret(
      RDPipelineColorBlendState.#_bindings.method_get_enable_logic_op,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_logic_op(_p_member) {
    RDPipelineColorBlendState.init_method_set_logic_op();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendState.#_bindings.method_set_logic_op,
      this._owner,
      _p_member
    );
    
  }
  get_logic_op() {
    RDPipelineColorBlendState.init_method_get_logic_op();
    return _call_native_mb_ret(
      RDPipelineColorBlendState.#_bindings.method_get_logic_op,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_blend_constant(_p_member) {
    RDPipelineColorBlendState.init_method_set_blend_constant();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendState.#_bindings.method_set_blend_constant,
      this._owner,
      _p_member
    );
    
  }
  get_blend_constant() {
    RDPipelineColorBlendState.init_method_get_blend_constant();
    return _call_native_mb_ret(
      RDPipelineColorBlendState.#_bindings.method_get_blend_constant,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_attachments(_attachments) {
    RDPipelineColorBlendState.init_method_set_attachments();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendState.#_bindings.method_set_attachments,
      this._owner,
      _attachments
    );
    
  }
  get_attachments() {
    RDPipelineColorBlendState.init_method_get_attachments();
    return _call_native_mb_ret(
      RDPipelineColorBlendState.#_bindings.method_get_attachments,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  
get enable_logic_op () {
  return this.get_enable_logic_op();
}
set enable_logic_op (new_value) {
  this.set_enable_logic_op(new_value);
}
get logic_op () {
  return this.get_logic_op();
}
set logic_op (new_value) {
  this.set_logic_op(new_value);
}
get blend_constant () {
  return this.get_blend_constant();
}
set blend_constant (new_value) {
  this.set_blend_constant(new_value);
}
get attachments () {
  return this.get_attachments();
}
set attachments (new_value) {
  this.set_attachments(new_value);
}

}