import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFSpecGloss");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_diffuse_img() {
    if (!this.#_bindings.method_get_diffuse_img) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_diffuse_img");
      this.#_bindings.method_get_diffuse_img = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        564927088
      );
    }
  }
  static init_method_set_diffuse_img() {
    if (!this.#_bindings.method_set_diffuse_img) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_diffuse_img");
      this.#_bindings.method_set_diffuse_img = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        532598488
      );
    }
  }
  static init_method_get_diffuse_factor() {
    if (!this.#_bindings.method_get_diffuse_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_diffuse_factor");
      this.#_bindings.method_get_diffuse_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200896285
      );
    }
  }
  static init_method_set_diffuse_factor() {
    if (!this.#_bindings.method_set_diffuse_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_diffuse_factor");
      this.#_bindings.method_set_diffuse_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_gloss_factor() {
    if (!this.#_bindings.method_get_gloss_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_gloss_factor");
      this.#_bindings.method_get_gloss_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_gloss_factor() {
    if (!this.#_bindings.method_set_gloss_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_gloss_factor");
      this.#_bindings.method_set_gloss_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_specular_factor() {
    if (!this.#_bindings.method_get_specular_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_specular_factor");
      this.#_bindings.method_get_specular_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3200896285
      );
    }
  }
  static init_method_set_specular_factor() {
    if (!this.#_bindings.method_set_specular_factor) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_specular_factor");
      this.#_bindings.method_set_specular_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_spec_gloss_img() {
    if (!this.#_bindings.method_get_spec_gloss_img) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("get_spec_gloss_img");
      this.#_bindings.method_get_spec_gloss_img = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        564927088
      );
    }
  }
  static init_method_set_spec_gloss_img() {
    if (!this.#_bindings.method_set_spec_gloss_img) {
      let classname = new StringName("GLTFSpecGloss");
      let methodname = new StringName("set_spec_gloss_img");
      this.#_bindings.method_set_spec_gloss_img = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        532598488
      );
    }
  }

  
  
  get_diffuse_img() {
    GLTFSpecGloss.init_method_get_diffuse_img();
    return _call_native_mb_ret(
      GLTFSpecGloss.#_bindings.method_get_diffuse_img,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_diffuse_img(_diffuse_img) {
    GLTFSpecGloss.init_method_set_diffuse_img();
    return _call_native_mb_no_ret(
      GLTFSpecGloss.#_bindings.method_set_diffuse_img,
      this._owner,
      _diffuse_img
    );
    
  }
  get_diffuse_factor() {
    GLTFSpecGloss.init_method_get_diffuse_factor();
    return _call_native_mb_ret(
      GLTFSpecGloss.#_bindings.method_get_diffuse_factor,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_diffuse_factor(_diffuse_factor) {
    GLTFSpecGloss.init_method_set_diffuse_factor();
    return _call_native_mb_no_ret(
      GLTFSpecGloss.#_bindings.method_set_diffuse_factor,
      this._owner,
      _diffuse_factor
    );
    
  }
  get_gloss_factor() {
    GLTFSpecGloss.init_method_get_gloss_factor();
    return _call_native_mb_ret(
      GLTFSpecGloss.#_bindings.method_get_gloss_factor,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_gloss_factor(_gloss_factor) {
    GLTFSpecGloss.init_method_set_gloss_factor();
    return _call_native_mb_no_ret(
      GLTFSpecGloss.#_bindings.method_set_gloss_factor,
      this._owner,
      _gloss_factor
    );
    
  }
  get_specular_factor() {
    GLTFSpecGloss.init_method_get_specular_factor();
    return _call_native_mb_ret(
      GLTFSpecGloss.#_bindings.method_get_specular_factor,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_specular_factor(_specular_factor) {
    GLTFSpecGloss.init_method_set_specular_factor();
    return _call_native_mb_no_ret(
      GLTFSpecGloss.#_bindings.method_set_specular_factor,
      this._owner,
      _specular_factor
    );
    
  }
  get_spec_gloss_img() {
    GLTFSpecGloss.init_method_get_spec_gloss_img();
    return _call_native_mb_ret(
      GLTFSpecGloss.#_bindings.method_get_spec_gloss_img,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_spec_gloss_img(_spec_gloss_img) {
    GLTFSpecGloss.init_method_set_spec_gloss_img();
    return _call_native_mb_no_ret(
      GLTFSpecGloss.#_bindings.method_set_spec_gloss_img,
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

}