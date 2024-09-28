import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { VisualShaderNode } from '@js_godot/classes/visual_shader_node'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_comparison_type;
  method_get_comparison_type;
  method_set_function;
  method_get_function;
  method_set_condition;
  method_get_condition;
}
@GodotClass
export class VisualShaderNodeCompare extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeCompare");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_comparison_type() {
    if (!this._bindings.method_set_comparison_type) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("set_comparison_type");
      this._bindings.method_set_comparison_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        516558320
      );
    }
  }
  static init_method_get_comparison_type() {
    if (!this._bindings.method_get_comparison_type) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("get_comparison_type");
      this._bindings.method_get_comparison_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3495315961
      );
    }
  }
  static init_method_set_function() {
    if (!this._bindings.method_set_function) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("set_function");
      this._bindings.method_set_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2370951349
      );
    }
  }
  static init_method_get_function() {
    if (!this._bindings.method_get_function) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("get_function");
      this._bindings.method_get_function = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4089164265
      );
    }
  }
  static init_method_set_condition() {
    if (!this._bindings.method_set_condition) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("set_condition");
      this._bindings.method_set_condition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        918742392
      );
    }
  }
  static init_method_get_condition() {
    if (!this._bindings.method_get_condition) {
      let classname = new StringName("VisualShaderNodeCompare");
      let methodname = new StringName("get_condition");
      this._bindings.method_get_condition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3281078941
      );
    }
  }

  
  
  set_comparison_type(_type) {
    VisualShaderNodeCompare.init_method_set_comparison_type();
    return _call_native_mb_no_ret(
      VisualShaderNodeCompare._bindings.method_set_comparison_type,
      this._owner,
      _type
    );
    
  }
  get_comparison_type() {
    VisualShaderNodeCompare.init_method_get_comparison_type();
    return _call_native_mb_ret(
      VisualShaderNodeCompare._bindings.method_get_comparison_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_function(_func) {
    VisualShaderNodeCompare.init_method_set_function();
    return _call_native_mb_no_ret(
      VisualShaderNodeCompare._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    VisualShaderNodeCompare.init_method_get_function();
    return _call_native_mb_ret(
      VisualShaderNodeCompare._bindings.method_get_function,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_condition(_condition) {
    VisualShaderNodeCompare.init_method_set_condition();
    return _call_native_mb_no_ret(
      VisualShaderNodeCompare._bindings.method_set_condition,
      this._owner,
      _condition
    );
    
  }
  get_condition() {
    VisualShaderNodeCompare.init_method_get_condition();
    return _call_native_mb_ret(
      VisualShaderNodeCompare._bindings.method_get_condition,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get type () {
  return this.get_comparison_type();
}
set type (new_value) {
  this.set_comparison_type(new_value);
}
get function () {
  return this.get_function();
}
set function (new_value) {
  this.set_function(new_value);
}
get condition () {
  return this.get_condition();
}
set condition (new_value) {
  this.set_condition(new_value);
}

  static ComparisonType = {
    CTYPE_SCALAR: 0,
    CTYPE_SCALAR_INT: 1,
    CTYPE_SCALAR_UINT: 2,
    CTYPE_VECTOR_2D: 3,
    CTYPE_VECTOR_3D: 4,
    CTYPE_VECTOR_4D: 5,
    CTYPE_BOOLEAN: 6,
    CTYPE_TRANSFORM: 7,
    CTYPE_MAX: 8,
  }
  static Function = {
    FUNC_EQUAL: 0,
    FUNC_NOT_EQUAL: 1,
    FUNC_GREATER_THAN: 2,
    FUNC_GREATER_THAN_EQUAL: 3,
    FUNC_LESS_THAN: 4,
    FUNC_LESS_THAN_EQUAL: 5,
    FUNC_MAX: 6,
  }
  static Condition = {
    COND_ALL: 0,
    COND_ANY: 1,
    COND_MAX: 2,
  }
}