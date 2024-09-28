import * as internal from '__internal__';
import { Mesh } from '@js_godot/classes/mesh'
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
  method_set_material;
  method_get_material;
  method_get_mesh_arrays;
  method_set_custom_aabb;
  method_get_custom_aabb;
  method_set_flip_faces;
  method_get_flip_faces;
  method_set_add_uv2;
  method_get_add_uv2;
  method_set_uv2_padding;
  method_get_uv2_padding;
  method_request_update;
}
@GodotClass
export class PrimitiveMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PrimitiveMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_material() {
    if (!this._bindings.method_set_material) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this._bindings.method_get_material) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_get_mesh_arrays() {
    if (!this._bindings.method_get_mesh_arrays) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_mesh_arrays");
      this._bindings.method_get_mesh_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_custom_aabb() {
    if (!this._bindings.method_set_custom_aabb) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("set_custom_aabb");
      this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }
  static init_method_get_custom_aabb() {
    if (!this._bindings.method_get_custom_aabb) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_custom_aabb");
      this._bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068685055
      );
    }
  }
  static init_method_set_flip_faces() {
    if (!this._bindings.method_set_flip_faces) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("set_flip_faces");
      this._bindings.method_set_flip_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_flip_faces() {
    if (!this._bindings.method_get_flip_faces) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_flip_faces");
      this._bindings.method_get_flip_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_add_uv2() {
    if (!this._bindings.method_set_add_uv2) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("set_add_uv2");
      this._bindings.method_set_add_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_add_uv2() {
    if (!this._bindings.method_get_add_uv2) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_add_uv2");
      this._bindings.method_get_add_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_uv2_padding() {
    if (!this._bindings.method_set_uv2_padding) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("set_uv2_padding");
      this._bindings.method_set_uv2_padding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_uv2_padding() {
    if (!this._bindings.method_get_uv2_padding) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("get_uv2_padding");
      this._bindings.method_get_uv2_padding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_request_update() {
    if (!this._bindings.method_request_update) {
      let classname = new StringName("PrimitiveMesh");
      let methodname = new StringName("request_update");
      this._bindings.method_request_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  _create_mesh_array() {
  }
  set_material(_material) {
    PrimitiveMesh.init_method_set_material();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    PrimitiveMesh.init_method_get_material();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_mesh_arrays() {
    PrimitiveMesh.init_method_get_mesh_arrays();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_mesh_arrays,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_custom_aabb(_aabb) {
    PrimitiveMesh.init_method_set_custom_aabb();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
    
  }
  get_custom_aabb() {
    PrimitiveMesh.init_method_get_custom_aabb();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  set_flip_faces(_flip_faces) {
    PrimitiveMesh.init_method_set_flip_faces();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_set_flip_faces,
      this._owner,
      _flip_faces
    );
    
  }
  get_flip_faces() {
    PrimitiveMesh.init_method_get_flip_faces();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_flip_faces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_add_uv2(_add_uv2) {
    PrimitiveMesh.init_method_set_add_uv2();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_set_add_uv2,
      this._owner,
      _add_uv2
    );
    
  }
  get_add_uv2() {
    PrimitiveMesh.init_method_get_add_uv2();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_add_uv2,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_uv2_padding(_uv2_padding) {
    PrimitiveMesh.init_method_set_uv2_padding();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_set_uv2_padding,
      this._owner,
      _uv2_padding
    );
    
  }
  get_uv2_padding() {
    PrimitiveMesh.init_method_get_uv2_padding();
    return _call_native_mb_ret(
      PrimitiveMesh._bindings.method_get_uv2_padding,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  request_update() {
    PrimitiveMesh.init_method_request_update();
    return _call_native_mb_no_ret(
      PrimitiveMesh._bindings.method_request_update,
      this._owner,
      
    );
    
  }
  
get material () {
  return this.get_material();
}
set material (new_value) {
  this.set_material(new_value);
}
get custom_aabb () {
  return this.get_custom_aabb();
}
set custom_aabb (new_value) {
  this.set_custom_aabb(new_value);
}
get flip_faces () {
  return this.get_flip_faces();
}
set flip_faces (new_value) {
  this.set_flip_faces(new_value);
}
get add_uv2 () {
  return this.get_add_uv2();
}
set add_uv2 (new_value) {
  this.set_add_uv2(new_value);
}
get uv2_padding () {
  return this.get_uv2_padding();
}
set uv2_padding (new_value) {
  this.set_uv2_padding(new_value);
}

}