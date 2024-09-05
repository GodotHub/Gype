import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineMultisampleState");
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
      RDPipelineMultisampleState._bindings.method_set_sample_count,
      this._owner,
      _p_member
    );
    
  }
  get_sample_count() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_sample_count,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_enable_sample_shading(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_sample_shading,
      this._owner,
      _p_member
    );
    
  }
  get_enable_sample_shading() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_sample_shading,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_min_sample_shading(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_min_sample_shading,
      this._owner,
      _p_member
    );
    
  }
  get_min_sample_shading() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_min_sample_shading,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_enable_alpha_to_coverage(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_alpha_to_coverage,
      this._owner,
      _p_member
    );
    
  }
  get_enable_alpha_to_coverage() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_alpha_to_coverage,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_enable_alpha_to_one(_p_member) {
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_alpha_to_one,
      this._owner,
      _p_member
    );
    
  }
  get_enable_alpha_to_one() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_alpha_to_one,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_sample_masks(_masks) {
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_sample_masks,
      this._owner,
      _masks
    );
    
  }
  get_sample_masks() {
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_sample_masks,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get sample_count () {
  return this.get_sample_count();
}
set sample_count (new_value) {
  this.set_sample_count(new_value);
}
get enable_sample_shading () {
  return this.get_enable_sample_shading();
}
set enable_sample_shading (new_value) {
  this.set_enable_sample_shading(new_value);
}
get min_sample_shading () {
  return this.get_min_sample_shading();
}
set min_sample_shading (new_value) {
  this.set_min_sample_shading(new_value);
}
get enable_alpha_to_coverage () {
  return this.get_enable_alpha_to_coverage();
}
set enable_alpha_to_coverage (new_value) {
  this.set_enable_alpha_to_coverage(new_value);
}
get enable_alpha_to_one () {
  return this.get_enable_alpha_to_one();
}
set enable_alpha_to_one (new_value) {
  this.set_enable_alpha_to_one(new_value);
}
get sample_masks () {
  return this.get_sample_masks();
}
set sample_masks (new_value) {
  this.set_sample_masks(new_value);
}


  static {
    this._init_bindings();
  }
}