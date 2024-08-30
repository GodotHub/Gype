import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_enable_depth_test;
    method_get_enable_depth_test;
    method_set_enable_depth_write;
    method_get_enable_depth_write;
    method_set_depth_compare_operator;
    method_get_depth_compare_operator;
    method_set_enable_depth_range;
    method_get_enable_depth_range;
    method_set_depth_range_min;
    method_get_depth_range_min;
    method_set_depth_range_max;
    method_get_depth_range_max;
    method_set_enable_stencil;
    method_get_enable_stencil;
    method_set_front_op_fail;
    method_get_front_op_fail;
    method_set_front_op_pass;
    method_get_front_op_pass;
    method_set_front_op_depth_fail;
    method_get_front_op_depth_fail;
    method_set_front_op_compare;
    method_get_front_op_compare;
    method_set_front_op_compare_mask;
    method_get_front_op_compare_mask;
    method_set_front_op_write_mask;
    method_get_front_op_write_mask;
    method_set_front_op_reference;
    method_get_front_op_reference;
    method_set_back_op_fail;
    method_get_back_op_fail;
    method_set_back_op_pass;
    method_get_back_op_pass;
    method_set_back_op_depth_fail;
    method_get_back_op_depth_fail;
    method_set_back_op_compare;
    method_get_back_op_compare;
    method_set_back_op_compare_mask;
    method_get_back_op_compare_mask;
    method_set_back_op_write_mask;
    method_get_back_op_write_mask;
    method_set_back_op_reference;
    method_get_back_op_reference;
}


export class RDPipelineDepthStencilState extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineDepthStencilState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_enable_depth_test");
        this._bindings.method_set_enable_depth_test = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_enable_depth_test");
        this._bindings.method_get_enable_depth_test = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_enable_depth_write");
        this._bindings.method_set_enable_depth_write = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_enable_depth_write");
        this._bindings.method_get_enable_depth_write = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_depth_compare_operator");
        this._bindings.method_set_depth_compare_operator = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2573711505
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_depth_compare_operator");
        this._bindings.method_get_depth_compare_operator = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          269730778
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_enable_depth_range");
        this._bindings.method_set_enable_depth_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_enable_depth_range");
        this._bindings.method_get_enable_depth_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_depth_range_min");
        this._bindings.method_set_depth_range_min = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_depth_range_min");
        this._bindings.method_get_depth_range_min = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_depth_range_max");
        this._bindings.method_set_depth_range_max = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_depth_range_max");
        this._bindings.method_get_depth_range_max = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_enable_stencil");
        this._bindings.method_set_enable_stencil = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_enable_stencil");
        this._bindings.method_get_enable_stencil = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_fail");
        this._bindings.method_set_front_op_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_fail");
        this._bindings.method_get_front_op_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_pass");
        this._bindings.method_set_front_op_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_pass");
        this._bindings.method_get_front_op_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_depth_fail");
        this._bindings.method_set_front_op_depth_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_depth_fail");
        this._bindings.method_get_front_op_depth_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_compare");
        this._bindings.method_set_front_op_compare = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2573711505
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_compare");
        this._bindings.method_get_front_op_compare = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          269730778
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_compare_mask");
        this._bindings.method_set_front_op_compare_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_compare_mask");
        this._bindings.method_get_front_op_compare_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_write_mask");
        this._bindings.method_set_front_op_write_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_write_mask");
        this._bindings.method_get_front_op_write_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_front_op_reference");
        this._bindings.method_set_front_op_reference = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_front_op_reference");
        this._bindings.method_get_front_op_reference = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_fail");
        this._bindings.method_set_back_op_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_fail");
        this._bindings.method_get_back_op_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_pass");
        this._bindings.method_set_back_op_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_pass");
        this._bindings.method_get_back_op_pass = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_depth_fail");
        this._bindings.method_set_back_op_depth_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2092799566
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_depth_fail");
        this._bindings.method_get_back_op_depth_fail = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1714732389
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_compare");
        this._bindings.method_set_back_op_compare = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2573711505
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_compare");
        this._bindings.method_get_back_op_compare = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          269730778
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_compare_mask");
        this._bindings.method_set_back_op_compare_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_compare_mask");
        this._bindings.method_get_back_op_compare_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_write_mask");
        this._bindings.method_set_back_op_write_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_write_mask");
        this._bindings.method_get_back_op_write_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("set_back_op_reference");
        this._bindings.method_set_back_op_reference = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineDepthStencilState");
        let methodname = new StringName("get_back_op_reference");
        this._bindings.method_get_back_op_reference = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_enable_depth_test(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_depth_test,
      this._owner,
      _p_member
    );
    
  }
  get_enable_depth_test() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_depth_test,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_enable_depth_write(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_depth_write,
      this._owner,
      _p_member
    );
    
  }
  get_enable_depth_write() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_depth_write,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_depth_compare_operator(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_compare_operator,
      this._owner,
      _p_member
    );
    
  }
  get_depth_compare_operator() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_compare_operator,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_enable_depth_range(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_depth_range,
      this._owner,
      _p_member
    );
    
  }
  get_enable_depth_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_depth_range,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_depth_range_min(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_range_min,
      this._owner,
      _p_member
    );
    
  }
  get_depth_range_min() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_range_min,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_depth_range_max(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_range_max,
      this._owner,
      _p_member
    );
    
  }
  get_depth_range_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_range_max,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_enable_stencil(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_stencil,
      this._owner,
      _p_member
    );
    
  }
  get_enable_stencil() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_stencil,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_front_op_fail(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_fail,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_fail() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_fail,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_op_pass(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_pass,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_pass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_pass,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_op_depth_fail(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_depth_fail,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_depth_fail() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_depth_fail,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_op_compare(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_compare,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_compare() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_compare,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_op_compare_mask(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_compare_mask,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_compare_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_compare_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_front_op_write_mask(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_write_mask,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_write_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_write_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_front_op_reference(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_op_reference,
      this._owner,
      _p_member
    );
    
  }
  get_front_op_reference() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_op_reference,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_back_op_fail(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_fail,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_fail() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_fail,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_back_op_pass(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_pass,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_pass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_pass,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_back_op_depth_fail(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_depth_fail,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_depth_fail() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_depth_fail,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_back_op_compare(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_compare,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_compare() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_compare,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_back_op_compare_mask(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_compare_mask,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_compare_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_compare_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_back_op_write_mask(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_write_mask,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_write_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_write_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_back_op_reference(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_back_op_reference,
      this._owner,
      _p_member
    );
    
  }
  get_back_op_reference() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_back_op_reference,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}