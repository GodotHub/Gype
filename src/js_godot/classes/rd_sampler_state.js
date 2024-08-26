import * as internal from '__internal__';
import { RefCounted } from 'src/js_godot/classesref_counted'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDSamplerState");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_mag_filter");
      this._bindings.method_set_mag_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1493420382
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_mag_filter");
      this._bindings.method_get_mag_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2209202801
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_min_filter");
      this._bindings.method_set_min_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1493420382
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_min_filter");
      this._bindings.method_get_min_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2209202801
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_mip_filter");
      this._bindings.method_set_mip_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1493420382
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_mip_filter");
      this._bindings.method_get_mip_filter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2209202801
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_u");
      this._bindings.method_set_repeat_u = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        246127626
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_u");
      this._bindings.method_get_repeat_u = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227895872
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_v");
      this._bindings.method_set_repeat_v = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        246127626
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_v");
      this._bindings.method_get_repeat_v = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227895872
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_repeat_w");
      this._bindings.method_set_repeat_w = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        246127626
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_repeat_w");
      this._bindings.method_get_repeat_w = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227895872
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_lod_bias");
      this._bindings.method_set_lod_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_lod_bias");
      this._bindings.method_get_lod_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_use_anisotropy");
      this._bindings.method_set_use_anisotropy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_use_anisotropy");
      this._bindings.method_get_use_anisotropy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_anisotropy_max");
      this._bindings.method_set_anisotropy_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_anisotropy_max");
      this._bindings.method_get_anisotropy_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_enable_compare");
      this._bindings.method_set_enable_compare = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_enable_compare");
      this._bindings.method_get_enable_compare = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_compare_op");
      this._bindings.method_set_compare_op = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2573711505
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_compare_op");
      this._bindings.method_get_compare_op = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        269730778
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_min_lod");
      this._bindings.method_set_min_lod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_min_lod");
      this._bindings.method_get_min_lod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_max_lod");
      this._bindings.method_set_max_lod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_max_lod");
      this._bindings.method_get_max_lod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_border_color");
      this._bindings.method_set_border_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1115869595
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_border_color");
      this._bindings.method_get_border_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3514246478
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("set_unnormalized_uvw");
      this._bindings.method_set_unnormalized_uvw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RDSamplerState");
      let methodname = new StringName("get_unnormalized_uvw");
      this._bindings.method_get_unnormalized_uvw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_mag_filter(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mag_filter,
      this._owner,
      _p_member
    );
  }
  get_mag_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mag_filter,
      this._owner,
			Variant.INT,
      
    );
  }
  set_min_filter(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_filter,
      this._owner,
      _p_member
    );
  }
  get_min_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_filter,
      this._owner,
			Variant.INT,
      
    );
  }
  set_mip_filter(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mip_filter,
      this._owner,
      _p_member
    );
  }
  get_mip_filter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mip_filter,
      this._owner,
			Variant.INT,
      
    );
  }
  set_repeat_u(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_repeat_u,
      this._owner,
      _p_member
    );
  }
  get_repeat_u() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_repeat_u,
      this._owner,
			Variant.INT,
      
    );
  }
  set_repeat_v(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_repeat_v,
      this._owner,
      _p_member
    );
  }
  get_repeat_v() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_repeat_v,
      this._owner,
			Variant.INT,
      
    );
  }
  set_repeat_w(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_repeat_w,
      this._owner,
      _p_member
    );
  }
  get_repeat_w() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_repeat_w,
      this._owner,
			Variant.INT,
      
    );
  }
  set_lod_bias(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lod_bias,
      this._owner,
      _p_member
    );
  }
  get_lod_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lod_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_use_anisotropy(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_anisotropy,
      this._owner,
      _p_member
    );
  }
  get_use_anisotropy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_use_anisotropy,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_anisotropy_max(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_anisotropy_max,
      this._owner,
      _p_member
    );
  }
  get_anisotropy_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_anisotropy_max,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_enable_compare(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_compare,
      this._owner,
      _p_member
    );
  }
  get_enable_compare() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_compare,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_compare_op(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_compare_op,
      this._owner,
      _p_member
    );
  }
  get_compare_op() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_compare_op,
      this._owner,
			Variant.INT,
      
    );
  }
  set_min_lod(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_min_lod,
      this._owner,
      _p_member
    );
  }
  get_min_lod() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_min_lod,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_max_lod(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_lod,
      this._owner,
      _p_member
    );
  }
  get_max_lod() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_lod,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_border_color(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_border_color,
      this._owner,
      _p_member
    );
  }
  get_border_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_border_color,
      this._owner,
			Variant.INT,
      
    );
  }
  set_unnormalized_uvw(_p_member) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_unnormalized_uvw,
      this._owner,
      _p_member
    );
  }
  get_unnormalized_uvw() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_unnormalized_uvw,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}