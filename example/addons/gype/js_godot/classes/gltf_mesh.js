import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_original_name;
  method_set_original_name;
  method_get_mesh;
  method_set_mesh;
  method_get_blend_weights;
  method_set_blend_weights;
  method_get_instance_materials;
  method_set_instance_materials;
  method_get_additional_data;
  method_set_additional_data;
}
export class GLTFMesh extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_original_name() {
    if (!this.#_bindings.method_get_original_name) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_original_name");
      this.#_bindings.method_get_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2841200299
      );
    }
  }
  static init_method_set_original_name() {
    if (!this.#_bindings.method_set_original_name) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_original_name");
      this.#_bindings.method_set_original_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_mesh() {
    if (!this.#_bindings.method_get_mesh) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3754628756
      );
    }
  }
  static init_method_set_mesh() {
    if (!this.#_bindings.method_set_mesh) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_mesh");
      this.#_bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2255166972
      );
    }
  }
  static init_method_get_blend_weights() {
    if (!this.#_bindings.method_get_blend_weights) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_blend_weights");
      this.#_bindings.method_get_blend_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2445143706
      );
    }
  }
  static init_method_set_blend_weights() {
    if (!this.#_bindings.method_set_blend_weights) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_blend_weights");
      this.#_bindings.method_set_blend_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_get_instance_materials() {
    if (!this.#_bindings.method_get_instance_materials) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_instance_materials");
      this.#_bindings.method_get_instance_materials = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_instance_materials() {
    if (!this.#_bindings.method_set_instance_materials) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_instance_materials");
      this.#_bindings.method_set_instance_materials = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_additional_data() {
    if (!this.#_bindings.method_get_additional_data) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_additional_data");
      this.#_bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138907829
      );
    }
  }
  static init_method_set_additional_data() {
    if (!this.#_bindings.method_set_additional_data) {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_additional_data");
      this.#_bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }

  
  
  get_original_name() {
    GLTFMesh.init_method_get_original_name();
    return _call_native_mb_ret(
      GLTFMesh.#_bindings.method_get_original_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_original_name(_original_name) {
    GLTFMesh.init_method_set_original_name();
    return _call_native_mb_no_ret(
      GLTFMesh.#_bindings.method_set_original_name,
      this._owner,
      _original_name
    );
    
  }
  get_mesh() {
    GLTFMesh.init_method_get_mesh();
    return _call_native_mb_ret(
      GLTFMesh.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_mesh(_mesh) {
    GLTFMesh.init_method_set_mesh();
    return _call_native_mb_no_ret(
      GLTFMesh.#_bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_blend_weights() {
    GLTFMesh.init_method_get_blend_weights();
    return _call_native_mb_ret(
      GLTFMesh.#_bindings.method_get_blend_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_blend_weights(_blend_weights) {
    GLTFMesh.init_method_set_blend_weights();
    return _call_native_mb_no_ret(
      GLTFMesh.#_bindings.method_set_blend_weights,
      this._owner,
      _blend_weights
    );
    
  }
  get_instance_materials() {
    GLTFMesh.init_method_get_instance_materials();
    return _call_native_mb_ret(
      GLTFMesh.#_bindings.method_get_instance_materials,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_instance_materials(_instance_materials) {
    GLTFMesh.init_method_set_instance_materials();
    return _call_native_mb_no_ret(
      GLTFMesh.#_bindings.method_set_instance_materials,
      this._owner,
      _instance_materials
    );
    
  }
  get_additional_data(_extension_name) {
    GLTFMesh.init_method_get_additional_data();
    return _call_native_mb_ret(
      GLTFMesh.#_bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT,
    
      _extension_name
    );
    
  }
  set_additional_data(_extension_name, _additional_data) {
    GLTFMesh.init_method_set_additional_data();
    return _call_native_mb_no_ret(
      GLTFMesh.#_bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
    
  }
  
get original_name () {
  return this.get_original_name();
}
set original_name (new_value) {
  this.set_original_name(new_value);
}
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
}
get blend_weights () {
  return this.get_blend_weights();
}
set blend_weights (new_value) {
  this.set_blend_weights(new_value);
}
get instance_materials () {
  return this.get_instance_materials();
}
set instance_materials (new_value) {
  this.set_instance_materials(new_value);
}

}