import * as internal from '__internal__';
import { PrimitiveMesh } from '@js_godot/classes/primitive_mesh'
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
  method_set_size;
  method_get_size;
  method_set_sections;
  method_get_sections;
  method_set_section_length;
  method_get_section_length;
  method_set_section_segments;
  method_get_section_segments;
  method_set_curve;
  method_get_curve;
  method_set_shape;
  method_get_shape;
}
@GodotClass
export class RibbonTrailMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RibbonTrailMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_size() {
    if (!this._bindings.method_set_size) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_size() {
    if (!this._bindings.method_get_size) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_sections() {
    if (!this._bindings.method_set_sections) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_sections");
      this._bindings.method_set_sections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_sections() {
    if (!this._bindings.method_get_sections) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_sections");
      this._bindings.method_get_sections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_section_length() {
    if (!this._bindings.method_set_section_length) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_section_length");
      this._bindings.method_set_section_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_section_length() {
    if (!this._bindings.method_get_section_length) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_section_length");
      this._bindings.method_get_section_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_section_segments() {
    if (!this._bindings.method_set_section_segments) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_section_segments");
      this._bindings.method_set_section_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_section_segments() {
    if (!this._bindings.method_get_section_segments) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_section_segments");
      this._bindings.method_get_section_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_curve() {
    if (!this._bindings.method_set_curve) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_curve");
      this._bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_curve() {
    if (!this._bindings.method_get_curve) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_curve");
      this._bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1684440262
      );
    }
  }
  static init_method_get_shape() {
    if (!this._bindings.method_get_shape) {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1317484155
      );
    }
  }

  
  
  set_size(_size) {
    RibbonTrailMesh.init_method_set_size();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    RibbonTrailMesh.init_method_get_size();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_sections(_sections) {
    RibbonTrailMesh.init_method_set_sections();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_sections,
      this._owner,
      _sections
    );
    
  }
  get_sections() {
    RibbonTrailMesh.init_method_get_sections();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_sections,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_section_length(_section_length) {
    RibbonTrailMesh.init_method_set_section_length();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_section_length,
      this._owner,
      _section_length
    );
    
  }
  get_section_length() {
    RibbonTrailMesh.init_method_get_section_length();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_section_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_section_segments(_section_segments) {
    RibbonTrailMesh.init_method_set_section_segments();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_section_segments,
      this._owner,
      _section_segments
    );
    
  }
  get_section_segments() {
    RibbonTrailMesh.init_method_get_section_segments();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_section_segments,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_curve(_curve) {
    RibbonTrailMesh.init_method_set_curve();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_curve,
      this._owner,
      _curve
    );
    
  }
  get_curve() {
    RibbonTrailMesh.init_method_get_curve();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_shape(_shape) {
    RibbonTrailMesh.init_method_set_shape();
    return _call_native_mb_no_ret(
      RibbonTrailMesh._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    RibbonTrailMesh.init_method_get_shape();
    return _call_native_mb_ret(
      RibbonTrailMesh._bindings.method_get_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get sections () {
  return this.get_sections();
}
set sections (new_value) {
  this.set_sections(new_value);
}
get section_length () {
  return this.get_section_length();
}
set section_length (new_value) {
  this.set_section_length(new_value);
}
get section_segments () {
  return this.get_section_segments();
}
set section_segments (new_value) {
  this.set_section_segments(new_value);
}
get curve () {
  return this.get_curve();
}
set curve (new_value) {
  this.set_curve(new_value);
}

  static Shape = {
    SHAPE_FLAT: 0,
    SHAPE_CROSS: 1,
  }
}