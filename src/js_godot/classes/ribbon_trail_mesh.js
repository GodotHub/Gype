import * as internal from '__internal__';
import { PrimitiveMesh } from 'src/js_godot/classesprimitive_mesh'
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


export class RibbonTrailMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RibbonTrailMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_sections");
      this._bindings.method_set_sections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_sections");
      this._bindings.method_get_sections = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_section_length");
      this._bindings.method_set_section_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_section_length");
      this._bindings.method_get_section_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_section_segments");
      this._bindings.method_set_section_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_section_segments");
      this._bindings.method_get_section_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_curve");
      this._bindings.method_set_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("get_curve");
      this._bindings.method_get_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("RibbonTrailMesh");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1684440262
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sections(_sections) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sections,
      this._owner,
      _sections
    );
  }
  get_sections() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sections,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_section_length(_section_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_section_length,
      this._owner,
      _section_length
    );
  }
  get_section_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_section_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_section_segments(_section_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_section_segments,
      this._owner,
      _section_segments
    );
  }
  get_section_segments() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_section_segments,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve,
      this._owner,
      _curve
    );
  }
  get_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve,
      this._owner,
			Variant.INT,
      
    );
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
  }
  static Shape = {
    SHAPE_FLAT: 0,
    SHAPE_CROSS: 1,
  }
}