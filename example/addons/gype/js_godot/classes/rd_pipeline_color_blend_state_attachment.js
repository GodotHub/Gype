import * as internal from '__internal__';
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
@GodotClass
export class RDPipelineColorBlendStateAttachment extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RDPipelineColorBlendStateAttachment");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_as_mix() {
    if (!this._bindings.method_set_as_mix) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_as_mix");
      this._bindings.method_set_as_mix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_enable_blend() {
    if (!this._bindings.method_set_enable_blend) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_enable_blend");
      this._bindings.method_set_enable_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_blend() {
    if (!this._bindings.method_get_enable_blend) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_enable_blend");
      this._bindings.method_get_enable_blend = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_src_color_blend_factor() {
    if (!this._bindings.method_set_src_color_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_src_color_blend_factor");
      this._bindings.method_set_src_color_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2251019273
      );
    }
  }
  static init_method_get_src_color_blend_factor() {
    if (!this._bindings.method_get_src_color_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_src_color_blend_factor");
      this._bindings.method_get_src_color_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3691288359
      );
    }
  }
  static init_method_set_dst_color_blend_factor() {
    if (!this._bindings.method_set_dst_color_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_dst_color_blend_factor");
      this._bindings.method_set_dst_color_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2251019273
      );
    }
  }
  static init_method_get_dst_color_blend_factor() {
    if (!this._bindings.method_get_dst_color_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_dst_color_blend_factor");
      this._bindings.method_get_dst_color_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3691288359
      );
    }
  }
  static init_method_set_color_blend_op() {
    if (!this._bindings.method_set_color_blend_op) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_color_blend_op");
      this._bindings.method_set_color_blend_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3073022720
      );
    }
  }
  static init_method_get_color_blend_op() {
    if (!this._bindings.method_get_color_blend_op) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_color_blend_op");
      this._bindings.method_get_color_blend_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1385093561
      );
    }
  }
  static init_method_set_src_alpha_blend_factor() {
    if (!this._bindings.method_set_src_alpha_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_src_alpha_blend_factor");
      this._bindings.method_set_src_alpha_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2251019273
      );
    }
  }
  static init_method_get_src_alpha_blend_factor() {
    if (!this._bindings.method_get_src_alpha_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_src_alpha_blend_factor");
      this._bindings.method_get_src_alpha_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3691288359
      );
    }
  }
  static init_method_set_dst_alpha_blend_factor() {
    if (!this._bindings.method_set_dst_alpha_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_dst_alpha_blend_factor");
      this._bindings.method_set_dst_alpha_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2251019273
      );
    }
  }
  static init_method_get_dst_alpha_blend_factor() {
    if (!this._bindings.method_get_dst_alpha_blend_factor) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_dst_alpha_blend_factor");
      this._bindings.method_get_dst_alpha_blend_factor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3691288359
      );
    }
  }
  static init_method_set_alpha_blend_op() {
    if (!this._bindings.method_set_alpha_blend_op) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_alpha_blend_op");
      this._bindings.method_set_alpha_blend_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3073022720
      );
    }
  }
  static init_method_get_alpha_blend_op() {
    if (!this._bindings.method_get_alpha_blend_op) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_alpha_blend_op");
      this._bindings.method_get_alpha_blend_op = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1385093561
      );
    }
  }
  static init_method_set_write_r() {
    if (!this._bindings.method_set_write_r) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_write_r");
      this._bindings.method_set_write_r = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_write_r() {
    if (!this._bindings.method_get_write_r) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_write_r");
      this._bindings.method_get_write_r = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_write_g() {
    if (!this._bindings.method_set_write_g) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_write_g");
      this._bindings.method_set_write_g = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_write_g() {
    if (!this._bindings.method_get_write_g) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_write_g");
      this._bindings.method_get_write_g = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_write_b() {
    if (!this._bindings.method_set_write_b) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_write_b");
      this._bindings.method_set_write_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_write_b() {
    if (!this._bindings.method_get_write_b) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("get_write_b");
      this._bindings.method_get_write_b = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_write_a() {
    if (!this._bindings.method_set_write_a) {
      let classname = new StringName("RDPipelineColorBlendStateAttachment");
      let methodname = new StringName("set_write_a");
      this._bindings.method_set_write_a = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_write_a() {
    if (!this._bindings.method_get_write_a) {
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
    RDPipelineColorBlendStateAttachment.init_method_set_as_mix();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_as_mix,
      this._owner,
      
    );
    
  }
  set_enable_blend(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_enable_blend();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_enable_blend,
      this._owner,
      _p_member
    );
    
  }
  get_enable_blend() {
    RDPipelineColorBlendStateAttachment.init_method_get_enable_blend();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_enable_blend,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_src_color_blend_factor(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_src_color_blend_factor();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_src_color_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_src_color_blend_factor() {
    RDPipelineColorBlendStateAttachment.init_method_get_src_color_blend_factor();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_src_color_blend_factor,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_dst_color_blend_factor(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_dst_color_blend_factor();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_dst_color_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_dst_color_blend_factor() {
    RDPipelineColorBlendStateAttachment.init_method_get_dst_color_blend_factor();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_dst_color_blend_factor,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_color_blend_op(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_color_blend_op();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_color_blend_op,
      this._owner,
      _p_member
    );
    
  }
  get_color_blend_op() {
    RDPipelineColorBlendStateAttachment.init_method_get_color_blend_op();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_color_blend_op,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_src_alpha_blend_factor(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_src_alpha_blend_factor();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_src_alpha_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_src_alpha_blend_factor() {
    RDPipelineColorBlendStateAttachment.init_method_get_src_alpha_blend_factor();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_src_alpha_blend_factor,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_dst_alpha_blend_factor(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_dst_alpha_blend_factor();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_dst_alpha_blend_factor,
      this._owner,
      _p_member
    );
    
  }
  get_dst_alpha_blend_factor() {
    RDPipelineColorBlendStateAttachment.init_method_get_dst_alpha_blend_factor();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_dst_alpha_blend_factor,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_alpha_blend_op(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_alpha_blend_op();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_alpha_blend_op,
      this._owner,
      _p_member
    );
    
  }
  get_alpha_blend_op() {
    RDPipelineColorBlendStateAttachment.init_method_get_alpha_blend_op();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_alpha_blend_op,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_write_r(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_write_r();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_write_r,
      this._owner,
      _p_member
    );
    
  }
  get_write_r() {
    RDPipelineColorBlendStateAttachment.init_method_get_write_r();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_write_r,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_write_g(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_write_g();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_write_g,
      this._owner,
      _p_member
    );
    
  }
  get_write_g() {
    RDPipelineColorBlendStateAttachment.init_method_get_write_g();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_write_g,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_write_b(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_write_b();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_write_b,
      this._owner,
      _p_member
    );
    
  }
  get_write_b() {
    RDPipelineColorBlendStateAttachment.init_method_get_write_b();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_write_b,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_write_a(_p_member) {
    RDPipelineColorBlendStateAttachment.init_method_set_write_a();
    return _call_native_mb_no_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_set_write_a,
      this._owner,
      _p_member
    );
    
  }
  get_write_a() {
    RDPipelineColorBlendStateAttachment.init_method_get_write_a();
    return _call_native_mb_ret(
      RDPipelineColorBlendStateAttachment._bindings.method_get_write_a,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get enable_blend () {
  return this.get_enable_blend();
}
set enable_blend (new_value) {
  this.set_enable_blend(new_value);
}
get src_color_blend_factor () {
  return this.get_src_color_blend_factor();
}
set src_color_blend_factor (new_value) {
  this.set_src_color_blend_factor(new_value);
}
get dst_color_blend_factor () {
  return this.get_dst_color_blend_factor();
}
set dst_color_blend_factor (new_value) {
  this.set_dst_color_blend_factor(new_value);
}
get color_blend_op () {
  return this.get_color_blend_op();
}
set color_blend_op (new_value) {
  this.set_color_blend_op(new_value);
}
get src_alpha_blend_factor () {
  return this.get_src_alpha_blend_factor();
}
set src_alpha_blend_factor (new_value) {
  this.set_src_alpha_blend_factor(new_value);
}
get dst_alpha_blend_factor () {
  return this.get_dst_alpha_blend_factor();
}
set dst_alpha_blend_factor (new_value) {
  this.set_dst_alpha_blend_factor(new_value);
}
get alpha_blend_op () {
  return this.get_alpha_blend_op();
}
set alpha_blend_op (new_value) {
  this.set_alpha_blend_op(new_value);
}
get write_r () {
  return this.get_write_r();
}
set write_r (new_value) {
  this.set_write_r(new_value);
}
get write_g () {
  return this.get_write_g();
}
set write_g (new_value) {
  this.set_write_g(new_value);
}
get write_b () {
  return this.get_write_b();
}
set write_b (new_value) {
  this.set_write_b(new_value);
}
get write_a () {
  return this.get_write_a();
}
set write_a (new_value) {
  this.set_write_a(new_value);
}

}