import * as internal from '__internal__';
import { PrimitiveMesh } from 'src/js_godot/classes/primitive_mesh'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_radius;
    method_get_radius;
    method_set_radial_steps;
    method_get_radial_steps;
    method_set_sections;
    method_get_sections;
    method_set_section_length;
    method_get_section_length;
    method_set_section_rings;
    method_get_section_rings;
    method_set_cap_top;
    method_is_cap_top;
    method_set_cap_bottom;
    method_is_cap_bottom;
    method_set_curve;
    method_get_curve;
}


export class TubeTrailMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TubeTrailMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_radius");
        this._bindings.method_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_radius");
        this._bindings.method_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_radial_steps");
        this._bindings.method_set_radial_steps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_radial_steps");
        this._bindings.method_get_radial_steps = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_sections");
        this._bindings.method_set_sections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_sections");
        this._bindings.method_get_sections = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_section_length");
        this._bindings.method_set_section_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_section_length");
        this._bindings.method_get_section_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_section_rings");
        this._bindings.method_set_section_rings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_section_rings");
        this._bindings.method_get_section_rings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_cap_top");
        this._bindings.method_set_cap_top = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("is_cap_top");
        this._bindings.method_is_cap_top = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_cap_bottom");
        this._bindings.method_set_cap_bottom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("is_cap_bottom");
        this._bindings.method_is_cap_bottom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("set_curve");
        this._bindings.method_set_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          270443179
        );
      }
      {
        let classname = new StringName("TubeTrailMesh");
        let methodname = new StringName("get_curve");
        this._bindings.method_get_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2460114913
        );
      }
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_radial_steps(_radial_steps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radial_steps,
      this._owner,
      _radial_steps
    );
    
  }
  get_radial_steps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radial_steps,
      this._owner,
			Variant.Type.INT,
      
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
  set_section_rings(_section_rings) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_section_rings,
      this._owner,
      _section_rings
    );
    
  }
  get_section_rings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_section_rings,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_cap_top(_cap_top) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cap_top,
      this._owner,
      _cap_top
    );
    
  }
  is_cap_top() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_cap_top,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_cap_bottom(_cap_bottom) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cap_bottom,
      this._owner,
      _cap_bottom
    );
    
  }
  is_cap_bottom() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_cap_bottom,
      this._owner,
			Variant.Type.BOOL,
      
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
}