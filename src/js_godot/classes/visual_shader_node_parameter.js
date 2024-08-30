import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classes/visual_shader_node'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_parameter_name;
    method_get_parameter_name;
    method_set_qualifier;
    method_get_qualifier;
}


export class VisualShaderNodeParameter extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeParameter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeParameter");
        let methodname = new StringName("set_parameter_name");
        this._bindings.method_set_parameter_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParameter");
        let methodname = new StringName("get_parameter_name");
        this._bindings.method_get_parameter_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParameter");
        let methodname = new StringName("set_qualifier");
        this._bindings.method_set_qualifier = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1276489447
        );
      }
      {
        let classname = new StringName("VisualShaderNodeParameter");
        let methodname = new StringName("get_qualifier");
        this._bindings.method_get_qualifier = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3558406205
        );
      }
  }
  set_parameter_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_parameter_name,
      this._owner,
      _name
    );
    
  }
  get_parameter_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_parameter_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_qualifier(_qualifier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_qualifier,
      this._owner,
      _qualifier
    );
    
  }
  get_qualifier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_qualifier,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static Qualifier = {
    QUAL_NONE: 0,
    QUAL_GLOBAL: 1,
    QUAL_INSTANCE: 2,
    QUAL_MAX: 3,
  }
}