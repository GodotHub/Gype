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
    method_set_enable_depth_clamp;
    method_get_enable_depth_clamp;
    method_set_discard_primitives;
    method_get_discard_primitives;
    method_set_wireframe;
    method_get_wireframe;
    method_set_cull_mode;
    method_get_cull_mode;
    method_set_front_face;
    method_get_front_face;
    method_set_depth_bias_enabled;
    method_get_depth_bias_enabled;
    method_set_depth_bias_constant_factor;
    method_get_depth_bias_constant_factor;
    method_set_depth_bias_clamp;
    method_get_depth_bias_clamp;
    method_set_depth_bias_slope_factor;
    method_get_depth_bias_slope_factor;
    method_set_line_width;
    method_get_line_width;
    method_set_patch_control_points;
    method_get_patch_control_points;
}


export class RDPipelineRasterizationState extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineRasterizationState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_enable_depth_clamp");
        this._bindings.method_set_enable_depth_clamp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_enable_depth_clamp");
        this._bindings.method_get_enable_depth_clamp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_discard_primitives");
        this._bindings.method_set_discard_primitives = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_discard_primitives");
        this._bindings.method_get_discard_primitives = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_wireframe");
        this._bindings.method_set_wireframe = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_wireframe");
        this._bindings.method_get_wireframe = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_cull_mode");
        this._bindings.method_set_cull_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2662586502
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_cull_mode");
        this._bindings.method_get_cull_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2192484313
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_front_face");
        this._bindings.method_set_front_face = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2637251213
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_front_face");
        this._bindings.method_get_front_face = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          708793786
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_depth_bias_enabled");
        this._bindings.method_set_depth_bias_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_depth_bias_enabled");
        this._bindings.method_get_depth_bias_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_depth_bias_constant_factor");
        this._bindings.method_set_depth_bias_constant_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_depth_bias_constant_factor");
        this._bindings.method_get_depth_bias_constant_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_depth_bias_clamp");
        this._bindings.method_set_depth_bias_clamp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_depth_bias_clamp");
        this._bindings.method_get_depth_bias_clamp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_depth_bias_slope_factor");
        this._bindings.method_set_depth_bias_slope_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_depth_bias_slope_factor");
        this._bindings.method_get_depth_bias_slope_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_line_width");
        this._bindings.method_set_line_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_line_width");
        this._bindings.method_get_line_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("set_patch_control_points");
        this._bindings.method_set_patch_control_points = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("RDPipelineRasterizationState");
        let methodname = new StringName("get_patch_control_points");
        this._bindings.method_get_patch_control_points = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_enable_depth_clamp(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_depth_clamp,
      this._owner,
      _p_member
    );
    
  }
  get_enable_depth_clamp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_depth_clamp,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_discard_primitives(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_discard_primitives,
      this._owner,
      _p_member
    );
    
  }
  get_discard_primitives() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_discard_primitives,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_wireframe(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wireframe,
      this._owner,
      _p_member
    );
    
  }
  get_wireframe() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wireframe,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cull_mode(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mode,
      this._owner,
      _p_member
    );
    
  }
  get_cull_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_face(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_front_face,
      this._owner,
      _p_member
    );
    
  }
  get_front_face() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_front_face,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_depth_bias_enabled(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_bias_enabled,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_bias_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_depth_bias_constant_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_bias_constant_factor,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_constant_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_bias_constant_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_depth_bias_clamp(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_bias_clamp,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_clamp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_bias_clamp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_depth_bias_slope_factor(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth_bias_slope_factor,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_slope_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_bias_slope_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_line_width(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_width,
      this._owner,
      _p_member
    );
    
  }
  get_line_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_patch_control_points(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_patch_control_points,
      this._owner,
      _p_member
    );
    
  }
  get_patch_control_points() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_patch_control_points,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}