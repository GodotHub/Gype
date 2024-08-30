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
    method_set_top_radius;
    method_get_top_radius;
    method_set_bottom_radius;
    method_get_bottom_radius;
    method_set_height;
    method_get_height;
    method_set_radial_segments;
    method_get_radial_segments;
    method_set_rings;
    method_get_rings;
    method_set_cap_top;
    method_is_cap_top;
    method_set_cap_bottom;
    method_is_cap_bottom;
}


export class CylinderMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CylinderMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_top_radius");
        this._bindings.method_set_top_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("get_top_radius");
        this._bindings.method_get_top_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_bottom_radius");
        this._bindings.method_set_bottom_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("get_bottom_radius");
        this._bindings.method_get_bottom_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_height");
        this._bindings.method_set_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("get_height");
        this._bindings.method_get_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_radial_segments");
        this._bindings.method_set_radial_segments = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("get_radial_segments");
        this._bindings.method_get_radial_segments = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_rings");
        this._bindings.method_set_rings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("get_rings");
        this._bindings.method_get_rings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_cap_top");
        this._bindings.method_set_cap_top = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("is_cap_top");
        this._bindings.method_is_cap_top = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("set_cap_bottom");
        this._bindings.method_set_cap_bottom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CylinderMesh");
        let methodname = new StringName("is_cap_bottom");
        this._bindings.method_is_cap_bottom = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_top_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_top_radius,
      this._owner,
      _radius
    );
    
  }
  get_top_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_top_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_bottom_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bottom_radius,
      this._owner,
      _radius
    );
    
  }
  get_bottom_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bottom_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_height,
      this._owner,
      _height
    );
    
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_radial_segments(_segments) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radial_segments,
      this._owner,
      _segments
    );
    
  }
  get_radial_segments() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radial_segments,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_rings(_rings) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rings,
      this._owner,
      _rings
    );
    
  }
  get_rings() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rings,
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
}