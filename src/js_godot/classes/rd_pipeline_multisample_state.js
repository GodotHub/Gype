import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
class _MethodBindings {
    method_set_sample_count;
    method_get_sample_count;
    method_set_enable_sample_shading;
    method_get_enable_sample_shading;
    method_set_min_sample_shading;
    method_get_min_sample_shading;
    method_set_enable_alpha_to_coverage;
    method_get_enable_alpha_to_coverage;
    method_set_enable_alpha_to_one;
    method_get_enable_alpha_to_one;
    method_set_sample_masks;
    method_get_sample_masks;
}


export class RDPipelineMultisampleState extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineMultisampleState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_sample_count");
      this._bindings.method_set_sample_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3774171498
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_sample_count");
      this._bindings.method_get_sample_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        407791724
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_sample_shading");
      this._bindings.method_set_enable_sample_shading = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_sample_shading");
      this._bindings.method_get_enable_sample_shading = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_min_sample_shading");
      this._bindings.method_set_min_sample_shading = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_min_sample_shading");
      this._bindings.method_get_min_sample_shading = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_alpha_to_coverage");
      this._bindings.method_set_enable_alpha_to_coverage = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_alpha_to_coverage");
      this._bindings.method_get_enable_alpha_to_coverage = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_alpha_to_one");
      this._bindings.method_set_enable_alpha_to_one = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_alpha_to_one");
      this._bindings.method_get_enable_alpha_to_one = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_sample_masks");
      this._bindings.method_set_sample_masks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_sample_masks");
      this._bindings.method_get_sample_masks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  set_sample_count(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sample_count,
      this._owner,
      _p_member
    );
  }
  get_sample_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sample_count,
      this._owner,
			Variant.INT,
      
    );
  }
  set_enable_sample_shading(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_sample_shading,
      this._owner,
      _p_member
    );
  }
  get_enable_sample_shading() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_sample_shading,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_min_sample_shading(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_sample_shading,
      this._owner,
      _p_member
    );
  }
  get_min_sample_shading() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_sample_shading,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_enable_alpha_to_coverage(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_alpha_to_coverage,
      this._owner,
      _p_member
    );
  }
  get_enable_alpha_to_coverage() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_alpha_to_coverage,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_enable_alpha_to_one(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_alpha_to_one,
      this._owner,
      _p_member
    );
  }
  get_enable_alpha_to_one() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_alpha_to_one,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_sample_masks(_masks) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sample_masks,
      this._owner,
      _masks
    );
  }
  get_sample_masks() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sample_masks,
      this._owner,
			Variant.INT,
      
    );
  }
}