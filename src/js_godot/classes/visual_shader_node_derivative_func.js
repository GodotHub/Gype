import * as internal from '__internal__';
import { VisualShaderNode } from 'src/js_godot/classes/visual_shader_node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_op_type;
    method_get_op_type;
    method_set_function;
    method_get_function;
    method_set_precision;
    method_get_precision;
}


export class VisualShaderNodeDerivativeFunc extends VisualShaderNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualShaderNodeDerivativeFunc");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("set_op_type");
        this._bindings.method_set_op_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          377800221
        );
      }
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("get_op_type");
        this._bindings.method_get_op_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3997800514
        );
      }
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("set_function");
        this._bindings.method_set_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1944704156
        );
      }
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("get_function");
        this._bindings.method_get_function = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2389093396
        );
      }
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("set_precision");
        this._bindings.method_set_precision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          797270566
        );
      }
      {
        let classname = new StringName("VisualShaderNodeDerivativeFunc");
        let methodname = new StringName("get_precision");
        this._bindings.method_get_precision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3822547323
        );
      }
  }
  set_op_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_op_type,
      this._owner,
      _type
    );
    
  }
  get_op_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_op_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_function(_func) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_function,
      this._owner,
      _func
    );
    
  }
  get_function() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_function,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_precision(_precision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_precision,
      this._owner,
      _precision
    );
    
  }
  get_precision() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_precision,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static OpType = {
    OP_TYPE_SCALAR: 0,
    OP_TYPE_VECTOR_2D: 1,
    OP_TYPE_VECTOR_3D: 2,
    OP_TYPE_VECTOR_4D: 3,
    OP_TYPE_MAX: 4,
  }
  static Function = {
    FUNC_SUM: 0,
    FUNC_X: 1,
    FUNC_Y: 2,
    FUNC_MAX: 3,
  }
  static Precision = {
    PRECISION_NONE: 0,
    PRECISION_COARSE: 1,
    PRECISION_FINE: 2,
    PRECISION_MAX: 3,
  }
}