import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_set_value;
    method_get_value;
    method_set_constant_id;
    method_get_constant_id;
}


export class RDPipelineSpecializationConstant extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineSpecializationConstant");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_value,
      this._owner,
      _value
    );
  }
  get_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      
    );
  }
  set_constant_id(_constant_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_id,
      this._owner,
      _constant_id
    );
  }
  get_constant_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}