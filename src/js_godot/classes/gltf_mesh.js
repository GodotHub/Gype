import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { Resource } from 'src/js_godot/classesresource'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_original_name");
      this._bindings.method_get_original_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_original_name");
      this._bindings.method_set_original_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3754628756
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2255166972
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_blend_weights");
      this._bindings.method_get_blend_weights = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2445143706
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_blend_weights");
      this._bindings.method_set_blend_weights = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_instance_materials");
      this._bindings.method_get_instance_materials = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_instance_materials");
      this._bindings.method_set_instance_materials = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("get_additional_data");
      this._bindings.method_get_additional_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2138907829
      );
    }
    {
      let classname = new StringName("GLTFMesh");
      let methodname = new StringName("set_additional_data");
      this._bindings.method_set_additional_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
  }
  get_original_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_original_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_original_name(_original_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_original_name,
      this._owner,
      _original_name
    );
  }
  get_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
  }
  get_blend_weights() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY
    ,
      
    );
  }
  set_blend_weights(_blend_weights) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_weights,
      this._owner,
      _blend_weights
    );
  }
  get_instance_materials() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_materials,
      this._owner,
			Variant.INT,
      
    );
  }
  set_instance_materials(_instance_materials) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_materials,
      this._owner,
      _instance_materials
    );
  }
  get_additional_data(_extension_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_additional_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      _extension_name
    );
  }
  set_additional_data(_extension_name, _additional_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_additional_data,
      this._owner,
      _extension_name, _additional_data
    );
  }
}