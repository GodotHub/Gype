import * as internal from '__internal__';
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_diffuse_img;
  method_set_diffuse_img;
  method_get_diffuse_factor;
  method_set_diffuse_factor;
  method_get_gloss_factor;
  method_set_gloss_factor;
  method_get_specular_factor;
  method_set_specular_factor;
  method_get_spec_gloss_img;
  method_set_spec_gloss_img;
}
export class GLTFSpecGloss extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSpecGloss");
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
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_diffuse_img");
      this._bindings.method_get_diffuse_img = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        564927088
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_diffuse_img");
      this._bindings.method_set_diffuse_img = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        532598488
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_diffuse_factor");
      this._bindings.method_get_diffuse_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3200896285
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_diffuse_factor");
      this._bindings.method_set_diffuse_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_gloss_factor");
      this._bindings.method_get_gloss_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_gloss_factor");
      this._bindings.method_set_gloss_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_specular_factor");
      this._bindings.method_get_specular_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3200896285
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_specular_factor");
      this._bindings.method_set_specular_factor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_spec_gloss_img");
      this._bindings.method_get_spec_gloss_img = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        564927088
      );
    }
    {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_spec_gloss_img");
      this._bindings.method_set_spec_gloss_img = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        532598488
      );
    }
  }
  
  get_diffuse_img() {
    return _call_native_mb_ret(
      GLTFSpecGloss._bindings.method_get_diffuse_img,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_diffuse_img(_diffuse_img) {
    return _call_native_mb_no_ret(
      GLTFSpecGloss._bindings.method_set_diffuse_img,
      this._owner,
      _diffuse_img
    );
    
  }
  get_diffuse_factor() {
    return _call_native_mb_ret(
      GLTFSpecGloss._bindings.method_get_diffuse_factor,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_diffuse_factor(_diffuse_factor) {
    return _call_native_mb_no_ret(
      GLTFSpecGloss._bindings.method_set_diffuse_factor,
      this._owner,
      _diffuse_factor
    );
    
  }
  get_gloss_factor() {
    return _call_native_mb_ret(
      GLTFSpecGloss._bindings.method_get_gloss_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_gloss_factor(_gloss_factor) {
    return _call_native_mb_no_ret(
      GLTFSpecGloss._bindings.method_set_gloss_factor,
      this._owner,
      _gloss_factor
    );
    
  }
  get_specular_factor() {
    return _call_native_mb_ret(
      GLTFSpecGloss._bindings.method_get_specular_factor,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_specular_factor(_specular_factor) {
    return _call_native_mb_no_ret(
      GLTFSpecGloss._bindings.method_set_specular_factor,
      this._owner,
      _specular_factor
    );
    
  }
  get_spec_gloss_img() {
    return _call_native_mb_ret(
      GLTFSpecGloss._bindings.method_get_spec_gloss_img,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_spec_gloss_img(_spec_gloss_img) {
    return _call_native_mb_no_ret(
      GLTFSpecGloss._bindings.method_set_spec_gloss_img,
      this._owner,
      _spec_gloss_img
    );
    
  }
  
get diffuse_img () {
  return this.get_diffuse_img();
}
set diffuse_img (new_value) {
  this.set_diffuse_img(new_value);
}
get diffuse_factor () {
  return this.get_diffuse_factor();
}
set diffuse_factor (new_value) {
  this.set_diffuse_factor(new_value);
}
get gloss_factor () {
  return this.get_gloss_factor();
}
set gloss_factor (new_value) {
  this.set_gloss_factor(new_value);
}
get specular_factor () {
  return this.get_specular_factor();
}
set specular_factor (new_value) {
  this.set_specular_factor(new_value);
}
get spec_gloss_img () {
  return this.get_spec_gloss_img();
}
set spec_gloss_img (new_value) {
  this.set_spec_gloss_img(new_value);
}


  static {
    this._init_bindings();
  }
}