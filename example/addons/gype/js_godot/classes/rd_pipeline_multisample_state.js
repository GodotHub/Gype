import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class RDPipelineMultisampleState extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineMultisampleState");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_sample_count() {
    if (!this._bindings.method_set_sample_count) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_sample_count");
      this._bindings.method_set_sample_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3774171498
      );
    }
  }
  static init_method_get_sample_count() {
    if (!this._bindings.method_get_sample_count) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_sample_count");
      this._bindings.method_get_sample_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        407791724
      );
    }
  }
  static init_method_set_enable_sample_shading() {
    if (!this._bindings.method_set_enable_sample_shading) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_sample_shading");
      this._bindings.method_set_enable_sample_shading = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_sample_shading() {
    if (!this._bindings.method_get_enable_sample_shading) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_sample_shading");
      this._bindings.method_get_enable_sample_shading = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_min_sample_shading() {
    if (!this._bindings.method_set_min_sample_shading) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_min_sample_shading");
      this._bindings.method_set_min_sample_shading = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_min_sample_shading() {
    if (!this._bindings.method_get_min_sample_shading) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_min_sample_shading");
      this._bindings.method_get_min_sample_shading = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_enable_alpha_to_coverage() {
    if (!this._bindings.method_set_enable_alpha_to_coverage) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_alpha_to_coverage");
      this._bindings.method_set_enable_alpha_to_coverage = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_alpha_to_coverage() {
    if (!this._bindings.method_get_enable_alpha_to_coverage) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_alpha_to_coverage");
      this._bindings.method_get_enable_alpha_to_coverage = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_enable_alpha_to_one() {
    if (!this._bindings.method_set_enable_alpha_to_one) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_enable_alpha_to_one");
      this._bindings.method_set_enable_alpha_to_one = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_alpha_to_one() {
    if (!this._bindings.method_get_enable_alpha_to_one) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("get_enable_alpha_to_one");
      this._bindings.method_get_enable_alpha_to_one = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_sample_masks() {
    if (!this._bindings.method_set_sample_masks) {
      let classname = new StringName("RDPipelineMultisampleState");
      let methodname = new StringName("set_sample_masks");
      this._bindings.method_set_sample_masks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_sample_masks() {
    if (!this._bindings.method_get_sample_masks) {
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
    RDPipelineMultisampleState.init_method_set_sample_count();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_sample_count,
      this._owner,
      _p_member
    );
    
  }
  get_sample_count() {
    RDPipelineMultisampleState.init_method_get_sample_count();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_sample_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_enable_sample_shading(_p_member) {
    RDPipelineMultisampleState.init_method_set_enable_sample_shading();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_sample_shading,
      this._owner,
      _p_member
    );
    
  }
  get_enable_sample_shading() {
    RDPipelineMultisampleState.init_method_get_enable_sample_shading();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_sample_shading,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_min_sample_shading(_p_member) {
    RDPipelineMultisampleState.init_method_set_min_sample_shading();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_min_sample_shading,
      this._owner,
      _p_member
    );
    
  }
  get_min_sample_shading() {
    RDPipelineMultisampleState.init_method_get_min_sample_shading();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_min_sample_shading,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_enable_alpha_to_coverage(_p_member) {
    RDPipelineMultisampleState.init_method_set_enable_alpha_to_coverage();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_alpha_to_coverage,
      this._owner,
      _p_member
    );
    
  }
  get_enable_alpha_to_coverage() {
    RDPipelineMultisampleState.init_method_get_enable_alpha_to_coverage();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_alpha_to_coverage,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_enable_alpha_to_one(_p_member) {
    RDPipelineMultisampleState.init_method_set_enable_alpha_to_one();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_enable_alpha_to_one,
      this._owner,
      _p_member
    );
    
  }
  get_enable_alpha_to_one() {
    RDPipelineMultisampleState.init_method_get_enable_alpha_to_one();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_enable_alpha_to_one,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_sample_masks(_masks) {
    RDPipelineMultisampleState.init_method_set_sample_masks();
    return _call_native_mb_no_ret(
      RDPipelineMultisampleState._bindings.method_set_sample_masks,
      this._owner,
      _masks
    );
    
  }
  get_sample_masks() {
    RDPipelineMultisampleState.init_method_get_sample_masks();
    return _call_native_mb_ret(
      RDPipelineMultisampleState._bindings.method_get_sample_masks,
      this._owner,
			Variant.Type.ARRAY,
      
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

}