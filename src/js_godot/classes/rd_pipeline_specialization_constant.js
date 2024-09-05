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

class _MethodBindings {
  method_set_value;
  method_get_value;
  method_set_constant_id;
  method_get_constant_id;
}
export class RDPipelineSpecializationConstant extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineSpecializationConstant");
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
      let classname = new StringName("RDPipelineSpecializationConstant");
      let methodname = new StringName("set_value");
      this._bindings.method_set_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1114965689
      );
    }
    {
      let classname = new StringName("RDPipelineSpecializationConstant");
      let methodname = new StringName("get_value");
      this._bindings.method_get_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1214101251
      );
    }
    {
      let classname = new StringName("RDPipelineSpecializationConstant");
      let methodname = new StringName("set_constant_id");
      this._bindings.method_set_constant_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RDPipelineSpecializationConstant");
      let methodname = new StringName("get_constant_id");
      this._bindings.method_get_constant_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_value(_value) {
    return _call_native_mb_no_ret(
      RDPipelineSpecializationConstant._bindings.method_set_value,
      this._owner,
      _value
    );
    
  }
  get_value() {
    return _call_native_mb_ret(
      RDPipelineSpecializationConstant._bindings.method_get_value,
      this._owner,
			Variant.Type.VARIANT,
    
      
    );
    
  }
  set_constant_id(_constant_id) {
    return _call_native_mb_no_ret(
      RDPipelineSpecializationConstant._bindings.method_set_constant_id,
      this._owner,
      _constant_id
    );
    
  }
  get_constant_id() {
    return _call_native_mb_ret(
      RDPipelineSpecializationConstant._bindings.method_get_constant_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get value () {
  return this.get_value();
}
set value (new_value) {
  this.set_value(new_value);
}
get constant_id () {
  return this.get_constant_id();
}
set constant_id (new_value) {
  this.set_constant_id(new_value);
}


  static {
    this._init_bindings();
  }
}