import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineRasterizationState");
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
      RDPipelineRasterizationState._bindings.method_set_enable_depth_clamp,
      this._owner,
      _p_member
    );
    
  }
  get_enable_depth_clamp() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_enable_depth_clamp,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_discard_primitives(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_discard_primitives,
      this._owner,
      _p_member
    );
    
  }
  get_discard_primitives() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_discard_primitives,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_wireframe(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_wireframe,
      this._owner,
      _p_member
    );
    
  }
  get_wireframe() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_wireframe,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cull_mode(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_cull_mode,
      this._owner,
      _p_member
    );
    
  }
  get_cull_mode() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_cull_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_front_face(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_front_face,
      this._owner,
      _p_member
    );
    
  }
  get_front_face() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_front_face,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_depth_bias_enabled(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_depth_bias_enabled,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_enabled() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_depth_bias_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_depth_bias_constant_factor(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_depth_bias_constant_factor,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_constant_factor() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_depth_bias_constant_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_depth_bias_clamp(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_depth_bias_clamp,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_clamp() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_depth_bias_clamp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_depth_bias_slope_factor(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_depth_bias_slope_factor,
      this._owner,
      _p_member
    );
    
  }
  get_depth_bias_slope_factor() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_depth_bias_slope_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_line_width(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_line_width,
      this._owner,
      _p_member
    );
    
  }
  get_line_width() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_line_width,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_patch_control_points(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineRasterizationState._bindings.method_set_patch_control_points,
      this._owner,
      _p_member
    );
    
  }
  get_patch_control_points() {
    return _call_native_mb_ret(
      RDPipelineRasterizationState._bindings.method_get_patch_control_points,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get enable_depth_clamp () {
  return this.get_enable_depth_clamp();
}
set enable_depth_clamp (new_value) {
  this.set_enable_depth_clamp(new_value);
}
get discard_primitives () {
  return this.get_discard_primitives();
}
set discard_primitives (new_value) {
  this.set_discard_primitives(new_value);
}
get wireframe () {
  return this.get_wireframe();
}
set wireframe (new_value) {
  this.set_wireframe(new_value);
}
get cull_mode () {
  return this.get_cull_mode();
}
set cull_mode (new_value) {
  this.set_cull_mode(new_value);
}
get front_face () {
  return this.get_front_face();
}
set front_face (new_value) {
  this.set_front_face(new_value);
}
get depth_bias_enabled () {
  return this.get_depth_bias_enabled();
}
set depth_bias_enabled (new_value) {
  this.set_depth_bias_enabled(new_value);
}
get depth_bias_constant_factor () {
  return this.get_depth_bias_constant_factor();
}
set depth_bias_constant_factor (new_value) {
  this.set_depth_bias_constant_factor(new_value);
}
get depth_bias_clamp () {
  return this.get_depth_bias_clamp();
}
set depth_bias_clamp (new_value) {
  this.set_depth_bias_clamp(new_value);
}
get depth_bias_slope_factor () {
  return this.get_depth_bias_slope_factor();
}
set depth_bias_slope_factor (new_value) {
  this.set_depth_bias_slope_factor(new_value);
}
get line_width () {
  return this.get_line_width();
}
set line_width (new_value) {
  this.set_line_width(new_value);
}
get patch_control_points () {
  return this.get_patch_control_points();
}
set patch_control_points (new_value) {
  this.set_patch_control_points(new_value);
}


  static {
    this._init_bindings();
  }
}