import * as internal from '__internal__';
import { PrimitiveMesh } from 'src/js_godot/classesprimitive_mesh'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Vector3 } from 'src/js_godot/variant/vector3'
class _MethodBindings {
    method_set_size;
    method_get_size;
    method_set_subdivide_width;
    method_get_subdivide_width;
    method_set_subdivide_depth;
    method_get_subdivide_depth;
    method_set_center_offset;
    method_get_center_offset;
    method_set_orientation;
    method_get_orientation;
}


export class PlaneMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaneMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("set_subdivide_width");
      this._bindings.method_set_subdivide_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("get_subdivide_width");
      this._bindings.method_get_subdivide_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("set_subdivide_depth");
      this._bindings.method_set_subdivide_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("get_subdivide_depth");
      this._bindings.method_get_subdivide_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("set_center_offset");
      this._bindings.method_set_center_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("get_center_offset");
      this._bindings.method_get_center_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("set_orientation");
      this._bindings.method_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2751399687
      );
    }
    {
      let classname = new StringName("PlaneMesh");
      let methodname = new StringName("get_orientation");
      this._bindings.method_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227599250
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
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_subdivide_width(_subdivide) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subdivide_width,
      this._owner,
      _subdivide
    );
  }
  get_subdivide_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subdivide_width,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_subdivide_depth(_subdivide) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_subdivide_depth,
      this._owner,
      _subdivide
    );
  }
  get_subdivide_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_subdivide_depth,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_center_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_offset,
      this._owner,
      _offset
    );
  }
  get_center_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_orientation(_orientation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_orientation,
      this._owner,
      _orientation
    );
  }
  get_orientation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_orientation,
      this._owner,
			Variant.INT,
      
    );
  }
  static Orientation = {
    FACE_X: 0,
    FACE_Y: 1,
    FACE_Z: 2,
  }
}