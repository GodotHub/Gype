import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { PrimitiveMesh } from '@js_godot/classes/primitive_mesh'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_left_to_right;
  method_get_left_to_right;
  method_set_size;
  method_get_size;
  method_set_subdivide_width;
  method_get_subdivide_width;
  method_set_subdivide_height;
  method_get_subdivide_height;
  method_set_subdivide_depth;
  method_get_subdivide_depth;
}
export class PrismMesh extends PrimitiveMesh{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PrismMesh");
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
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("set_left_to_right");
      this._bindings.method_set_left_to_right = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("get_left_to_right");
      this._bindings.method_get_left_to_right = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("set_subdivide_width");
      this._bindings.method_set_subdivide_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("get_subdivide_width");
      this._bindings.method_get_subdivide_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("set_subdivide_height");
      this._bindings.method_set_subdivide_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("get_subdivide_height");
      this._bindings.method_get_subdivide_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("set_subdivide_depth");
      this._bindings.method_set_subdivide_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PrismMesh");
      let methodname = new StringName("get_subdivide_depth");
      this._bindings.method_get_subdivide_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  
  set_left_to_right(_left_to_right) {
    return _call_native_mb_no_ret(
      PrismMesh._bindings.method_set_left_to_right,
      this._owner,
      _left_to_right
    );
    
  }
  get_left_to_right() {
    return _call_native_mb_ret(
      PrismMesh._bindings.method_get_left_to_right,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      PrismMesh._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      PrismMesh._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_subdivide_width(_segments) {
    return _call_native_mb_no_ret(
      PrismMesh._bindings.method_set_subdivide_width,
      this._owner,
      _segments
    );
    
  }
  get_subdivide_width() {
    return _call_native_mb_ret(
      PrismMesh._bindings.method_get_subdivide_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_subdivide_height(_segments) {
    return _call_native_mb_no_ret(
      PrismMesh._bindings.method_set_subdivide_height,
      this._owner,
      _segments
    );
    
  }
  get_subdivide_height() {
    return _call_native_mb_ret(
      PrismMesh._bindings.method_get_subdivide_height,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_subdivide_depth(_segments) {
    return _call_native_mb_no_ret(
      PrismMesh._bindings.method_set_subdivide_depth,
      this._owner,
      _segments
    );
    
  }
  get_subdivide_depth() {
    return _call_native_mb_ret(
      PrismMesh._bindings.method_get_subdivide_depth,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  
get left_to_right () {
  return this.get_left_to_right();
}
set left_to_right (new_value) {
  this.set_left_to_right(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get subdivide_width () {
  return this.get_subdivide_width();
}
set subdivide_width (new_value) {
  this.set_subdivide_width(new_value);
}
get subdivide_height () {
  return this.get_subdivide_height();
}
set subdivide_height (new_value) {
  this.set_subdivide_height(new_value);
}
get subdivide_depth () {
  return this.get_subdivide_depth();
}
set subdivide_depth (new_value) {
  this.set_subdivide_depth(new_value);
}


  static {
    this._init_bindings();
  }
}