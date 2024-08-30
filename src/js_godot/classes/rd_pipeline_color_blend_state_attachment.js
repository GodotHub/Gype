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
    method_set_as_mix;
    method_set_enable_blend;
    method_get_enable_blend;
    method_set_src_color_blend_factor;
    method_get_src_color_blend_factor;
    method_set_dst_color_blend_factor;
    method_get_dst_color_blend_factor;
    method_set_color_blend_op;
    method_get_color_blend_op;
    method_set_src_alpha_blend_factor;
    method_get_src_alpha_blend_factor;
    method_set_dst_alpha_blend_factor;
    method_get_dst_alpha_blend_factor;
    method_set_alpha_blend_op;
    method_get_alpha_blend_op;
    method_set_write_r;
    method_get_write_r;
    method_set_write_g;
    method_get_write_g;
    method_set_write_b;
    method_get_write_b;
    method_set_write_a;
    method_get_write_a;
}


export class RDPipelineColorBlendStateAttachment extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineColorBlendStateAttachment");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_as_mix");
        this._bindings.method_set_as_mix = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_enable_blend");
        this._bindings.method_set_enable_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_enable_blend");
        this._bindings.method_get_enable_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_src_color_blend_factor");
        this._bindings.method_set_src_color_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2251019273
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_src_color_blend_factor");
        this._bindings.method_get_src_color_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3691288359
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_dst_color_blend_factor");
        this._bindings.method_set_dst_color_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2251019273
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_dst_color_blend_factor");
        this._bindings.method_get_dst_color_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3691288359
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_color_blend_op");
        this._bindings.method_set_color_blend_op = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3073022720
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_color_blend_op");
        this._bindings.method_get_color_blend_op = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1385093561
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_src_alpha_blend_factor");
        this._bindings.method_set_src_alpha_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2251019273
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_src_alpha_blend_factor");
        this._bindings.method_get_src_alpha_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3691288359
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_dst_alpha_blend_factor");
        this._bindings.method_set_dst_alpha_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2251019273
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_dst_alpha_blend_factor");
        this._bindings.method_get_dst_alpha_blend_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3691288359
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_alpha_blend_op");
        this._bindings.method_set_alpha_blend_op = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3073022720
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_alpha_blend_op");
        this._bindings.method_get_alpha_blend_op = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1385093561
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_write_r");
        this._bindings.method_set_write_r = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_write_r");
        this._bindings.method_get_write_r = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_write_g");
        this._bindings.method_set_write_g = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_write_g");
        this._bindings.method_get_write_g = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_write_b");
        this._bindings.method_set_write_b = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_write_b");
        this._bindings.method_get_write_b = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("set_write_a");
        this._bindings.method_set_write_a = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineColorBlendStateAttachment");
        let methodname = new StringName("get_write_a");
        this._bindings.method_get_write_a = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_as_mix() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_mix,
      this._owner,
      
    );
    
  }
  set_enable_blend(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_blend,
      this._owner,
      _p_member
    );
    
  }
  get_enable_blend() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_blend,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_src_color_blend_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_src_color_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_src_color_blend_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_src_color_blend_factor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_dst_color_blend_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dst_color_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_dst_color_blend_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dst_color_blend_factor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_color_blend_op(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_blend_op,
      this._owner,
      _p_member
    );
    
  }
  get_color_blend_op() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_blend_op,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_src_alpha_blend_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_src_alpha_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_src_alpha_blend_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_src_alpha_blend_factor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_dst_alpha_blend_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dst_alpha_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_dst_alpha_blend_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dst_alpha_blend_factor,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_alpha_blend_op(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_blend_op,
      this._owner,
      _p_member
    );
    
  }
  get_alpha_blend_op() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_blend_op,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_write_r(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_write_r,
      this._owner,
      _p_member
    );
    
  }
  get_write_r() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_write_r,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_write_g(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_write_g,
      this._owner,
      _p_member
    );
    
  }
  get_write_g() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_write_g,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_write_b(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_write_b,
      this._owner,
      _p_member
    );
    
  }
  get_write_b() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_write_b,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_write_a(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_write_a,
      this._owner,
      _p_member
    );
    
  }
  get_write_a() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_write_a,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}