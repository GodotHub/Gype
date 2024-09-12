import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mag_filter;
  method_get_mag_filter;
  method_set_min_filter;
  method_get_min_filter;
  method_set_mip_filter;
  method_get_mip_filter;
  method_set_repeat_u;
  method_get_repeat_u;
  method_set_repeat_v;
  method_get_repeat_v;
  method_set_repeat_w;
  method_get_repeat_w;
  method_set_lod_bias;
  method_get_lod_bias;
  method_set_use_anisotropy;
  method_get_use_anisotropy;
  method_set_anisotropy_max;
  method_get_anisotropy_max;
  method_set_enable_compare;
  method_get_enable_compare;
  method_set_compare_op;
  method_get_compare_op;
  method_set_min_lod;
  method_get_min_lod;
  method_set_max_lod;
  method_get_max_lod;
  method_set_border_color;
  method_get_border_color;
  method_set_unnormalized_uvw;
  method_get_unnormalized_uvw;
}
export class RDSamplerState extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RDSamplerState");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mag_filter() {
    if (!this.#_bindings.method_set_mag_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_mag_filter");
      this.#_bindings.method_set_mag_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1493420382
      );
    }
  }
  static init_method_get_mag_filter() {
    if (!this.#_bindings.method_get_mag_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_mag_filter");
      this.#_bindings.method_get_mag_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2209202801
      );
    }
  }
  static init_method_set_min_filter() {
    if (!this.#_bindings.method_set_min_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_min_filter");
      this.#_bindings.method_set_min_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1493420382
      );
    }
  }
  static init_method_get_min_filter() {
    if (!this.#_bindings.method_get_min_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_min_filter");
      this.#_bindings.method_get_min_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2209202801
      );
    }
  }
  static init_method_set_mip_filter() {
    if (!this.#_bindings.method_set_mip_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_mip_filter");
      this.#_bindings.method_set_mip_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1493420382
      );
    }
  }
  static init_method_get_mip_filter() {
    if (!this.#_bindings.method_get_mip_filter) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_mip_filter");
      this.#_bindings.method_get_mip_filter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2209202801
      );
    }
  }
  static init_method_set_repeat_u() {
    if (!this.#_bindings.method_set_repeat_u) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_u");
      this.#_bindings.method_set_repeat_u = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        246127626
      );
    }
  }
  static init_method_get_repeat_u() {
    if (!this.#_bindings.method_get_repeat_u) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_u");
      this.#_bindings.method_get_repeat_u = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227895872
      );
    }
  }
  static init_method_set_repeat_v() {
    if (!this.#_bindings.method_set_repeat_v) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_v");
      this.#_bindings.method_set_repeat_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        246127626
      );
    }
  }
  static init_method_get_repeat_v() {
    if (!this.#_bindings.method_get_repeat_v) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_v");
      this.#_bindings.method_get_repeat_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227895872
      );
    }
  }
  static init_method_set_repeat_w() {
    if (!this.#_bindings.method_set_repeat_w) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_w");
      this.#_bindings.method_set_repeat_w = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        246127626
      );
    }
  }
  static init_method_get_repeat_w() {
    if (!this.#_bindings.method_get_repeat_w) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_w");
      this.#_bindings.method_get_repeat_w = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3227895872
      );
    }
  }
  static init_method_set_lod_bias() {
    if (!this.#_bindings.method_set_lod_bias) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_lod_bias");
      this.#_bindings.method_set_lod_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_lod_bias() {
    if (!this.#_bindings.method_get_lod_bias) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_lod_bias");
      this.#_bindings.method_get_lod_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_anisotropy() {
    if (!this.#_bindings.method_set_use_anisotropy) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_use_anisotropy");
      this.#_bindings.method_set_use_anisotropy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_anisotropy() {
    if (!this.#_bindings.method_get_use_anisotropy) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_use_anisotropy");
      this.#_bindings.method_get_use_anisotropy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_anisotropy_max() {
    if (!this.#_bindings.method_set_anisotropy_max) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_anisotropy_max");
      this.#_bindings.method_set_anisotropy_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_anisotropy_max() {
    if (!this.#_bindings.method_get_anisotropy_max) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_anisotropy_max");
      this.#_bindings.method_get_anisotropy_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_enable_compare() {
    if (!this.#_bindings.method_set_enable_compare) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_enable_compare");
      this.#_bindings.method_set_enable_compare = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_compare() {
    if (!this.#_bindings.method_get_enable_compare) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_enable_compare");
      this.#_bindings.method_get_enable_compare = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_compare_op() {
    if (!this.#_bindings.method_set_compare_op) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_compare_op");
      this.#_bindings.method_set_compare_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2573711505
      );
    }
  }
  static init_method_get_compare_op() {
    if (!this.#_bindings.method_get_compare_op) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_compare_op");
      this.#_bindings.method_get_compare_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        269730778
      );
    }
  }
  static init_method_set_min_lod() {
    if (!this.#_bindings.method_set_min_lod) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_min_lod");
      this.#_bindings.method_set_min_lod = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_min_lod() {
    if (!this.#_bindings.method_get_min_lod) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_min_lod");
      this.#_bindings.method_get_min_lod = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_lod() {
    if (!this.#_bindings.method_set_max_lod) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_max_lod");
      this.#_bindings.method_set_max_lod = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_lod() {
    if (!this.#_bindings.method_get_max_lod) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_max_lod");
      this.#_bindings.method_get_max_lod = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_border_color() {
    if (!this.#_bindings.method_set_border_color) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_border_color");
      this.#_bindings.method_set_border_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1115869595
      );
    }
  }
  static init_method_get_border_color() {
    if (!this.#_bindings.method_get_border_color) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_border_color");
      this.#_bindings.method_get_border_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3514246478
      );
    }
  }
  static init_method_set_unnormalized_uvw() {
    if (!this.#_bindings.method_set_unnormalized_uvw) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_unnormalized_uvw");
      this.#_bindings.method_set_unnormalized_uvw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_unnormalized_uvw() {
    if (!this.#_bindings.method_get_unnormalized_uvw) {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_unnormalized_uvw");
      this.#_bindings.method_get_unnormalized_uvw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_mag_filter(_p_member) {
    RDSamplerState.init_method_set_mag_filter();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_mag_filter,
      this._owner,
      _p_member
    );
    
  }
  get_mag_filter() {
    RDSamplerState.init_method_get_mag_filter();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_mag_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_min_filter(_p_member) {
    RDSamplerState.init_method_set_min_filter();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_min_filter,
      this._owner,
      _p_member
    );
    
  }
  get_min_filter() {
    RDSamplerState.init_method_get_min_filter();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_min_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mip_filter(_p_member) {
    RDSamplerState.init_method_set_mip_filter();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_mip_filter,
      this._owner,
      _p_member
    );
    
  }
  get_mip_filter() {
    RDSamplerState.init_method_get_mip_filter();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_mip_filter,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_repeat_u(_p_member) {
    RDSamplerState.init_method_set_repeat_u();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_repeat_u,
      this._owner,
      _p_member
    );
    
  }
  get_repeat_u() {
    RDSamplerState.init_method_get_repeat_u();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_repeat_u,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_repeat_v(_p_member) {
    RDSamplerState.init_method_set_repeat_v();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_repeat_v,
      this._owner,
      _p_member
    );
    
  }
  get_repeat_v() {
    RDSamplerState.init_method_get_repeat_v();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_repeat_v,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_repeat_w(_p_member) {
    RDSamplerState.init_method_set_repeat_w();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_repeat_w,
      this._owner,
      _p_member
    );
    
  }
  get_repeat_w() {
    RDSamplerState.init_method_get_repeat_w();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_repeat_w,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_lod_bias(_p_member) {
    RDSamplerState.init_method_set_lod_bias();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_lod_bias,
      this._owner,
      _p_member
    );
    
  }
  get_lod_bias() {
    RDSamplerState.init_method_get_lod_bias();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_lod_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_anisotropy(_p_member) {
    RDSamplerState.init_method_set_use_anisotropy();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_use_anisotropy,
      this._owner,
      _p_member
    );
    
  }
  get_use_anisotropy() {
    RDSamplerState.init_method_get_use_anisotropy();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_use_anisotropy,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_anisotropy_max(_p_member) {
    RDSamplerState.init_method_set_anisotropy_max();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_anisotropy_max,
      this._owner,
      _p_member
    );
    
  }
  get_anisotropy_max() {
    RDSamplerState.init_method_get_anisotropy_max();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_anisotropy_max,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_enable_compare(_p_member) {
    RDSamplerState.init_method_set_enable_compare();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_enable_compare,
      this._owner,
      _p_member
    );
    
  }
  get_enable_compare() {
    RDSamplerState.init_method_get_enable_compare();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_enable_compare,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_compare_op(_p_member) {
    RDSamplerState.init_method_set_compare_op();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_compare_op,
      this._owner,
      _p_member
    );
    
  }
  get_compare_op() {
    RDSamplerState.init_method_get_compare_op();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_compare_op,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_min_lod(_p_member) {
    RDSamplerState.init_method_set_min_lod();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_min_lod,
      this._owner,
      _p_member
    );
    
  }
  get_min_lod() {
    RDSamplerState.init_method_get_min_lod();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_min_lod,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_lod(_p_member) {
    RDSamplerState.init_method_set_max_lod();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_max_lod,
      this._owner,
      _p_member
    );
    
  }
  get_max_lod() {
    RDSamplerState.init_method_get_max_lod();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_max_lod,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_border_color(_p_member) {
    RDSamplerState.init_method_set_border_color();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_border_color,
      this._owner,
      _p_member
    );
    
  }
  get_border_color() {
    RDSamplerState.init_method_get_border_color();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_border_color,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_unnormalized_uvw(_p_member) {
    RDSamplerState.init_method_set_unnormalized_uvw();
    return _call_native_mb_no_ret(
      RDSamplerState.#_bindings.method_set_unnormalized_uvw,
      this._owner,
      _p_member
    );
    
  }
  get_unnormalized_uvw() {
    RDSamplerState.init_method_get_unnormalized_uvw();
    return _call_native_mb_ret(
      RDSamplerState.#_bindings.method_get_unnormalized_uvw,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get mag_filter () {
  return this.get_mag_filter();
}
set mag_filter (new_value) {
  this.set_mag_filter(new_value);
}
get min_filter () {
  return this.get_min_filter();
}
set min_filter (new_value) {
  this.set_min_filter(new_value);
}
get mip_filter () {
  return this.get_mip_filter();
}
set mip_filter (new_value) {
  this.set_mip_filter(new_value);
}
get repeat_u () {
  return this.get_repeat_u();
}
set repeat_u (new_value) {
  this.set_repeat_u(new_value);
}
get repeat_v () {
  return this.get_repeat_v();
}
set repeat_v (new_value) {
  this.set_repeat_v(new_value);
}
get repeat_w () {
  return this.get_repeat_w();
}
set repeat_w (new_value) {
  this.set_repeat_w(new_value);
}
get lod_bias () {
  return this.get_lod_bias();
}
set lod_bias (new_value) {
  this.set_lod_bias(new_value);
}
get use_anisotropy () {
  return this.get_use_anisotropy();
}
set use_anisotropy (new_value) {
  this.set_use_anisotropy(new_value);
}
get anisotropy_max () {
  return this.get_anisotropy_max();
}
set anisotropy_max (new_value) {
  this.set_anisotropy_max(new_value);
}
get enable_compare () {
  return this.get_enable_compare();
}
set enable_compare (new_value) {
  this.set_enable_compare(new_value);
}
get compare_op () {
  return this.get_compare_op();
}
set compare_op (new_value) {
  this.set_compare_op(new_value);
}
get min_lod () {
  return this.get_min_lod();
}
set min_lod (new_value) {
  this.set_min_lod(new_value);
}
get max_lod () {
  return this.get_max_lod();
}
set max_lod (new_value) {
  this.set_max_lod(new_value);
}
get border_color () {
  return this.get_border_color();
}
set border_color (new_value) {
  this.set_border_color(new_value);
}
get unnormalized_uvw () {
  return this.get_unnormalized_uvw();
}
set unnormalized_uvw (new_value) {
  this.set_unnormalized_uvw(new_value);
}

}