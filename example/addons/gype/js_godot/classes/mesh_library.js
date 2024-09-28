import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_create_item;
  method_set_item_name;
  method_set_item_mesh;
  method_set_item_mesh_transform;
  method_set_item_navigation_mesh;
  method_set_item_navigation_mesh_transform;
  method_set_item_navigation_layers;
  method_set_item_shapes;
  method_set_item_preview;
  method_get_item_name;
  method_get_item_mesh;
  method_get_item_mesh_transform;
  method_get_item_navigation_mesh;
  method_get_item_navigation_mesh_transform;
  method_get_item_navigation_layers;
  method_get_item_shapes;
  method_get_item_preview;
  method_remove_item;
  method_find_item_by_name;
  method_clear;
  method_get_item_list;
  method_get_last_unused_item_id;
}
@GodotClass
export class MeshLibrary extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshLibrary");
    } else {
      super(godot_object);
    }
  }
  static init_method_create_item() {
    if (!this._bindings.method_create_item) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("create_item");
      this._bindings.method_create_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_item_name() {
    if (!this._bindings.method_set_item_name) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_name");
      this._bindings.method_set_item_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_mesh() {
    if (!this._bindings.method_set_item_mesh) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_mesh");
      this._bindings.method_set_item_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969122797
      );
    }
  }
  static init_method_set_item_mesh_transform() {
    if (!this._bindings.method_set_item_mesh_transform) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_mesh_transform");
      this._bindings.method_set_item_mesh_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3616898986
      );
    }
  }
  static init_method_set_item_navigation_mesh() {
    if (!this._bindings.method_set_item_navigation_mesh) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_navigation_mesh");
      this._bindings.method_set_item_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3483353960
      );
    }
  }
  static init_method_set_item_navigation_mesh_transform() {
    if (!this._bindings.method_set_item_navigation_mesh_transform) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_navigation_mesh_transform");
      this._bindings.method_set_item_navigation_mesh_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3616898986
      );
    }
  }
  static init_method_set_item_navigation_layers() {
    if (!this._bindings.method_set_item_navigation_layers) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_navigation_layers");
      this._bindings.method_set_item_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_shapes() {
    if (!this._bindings.method_set_item_shapes) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_shapes");
      this._bindings.method_set_item_shapes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        537221740
      );
    }
  }
  static init_method_set_item_preview() {
    if (!this._bindings.method_set_item_preview) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("set_item_preview");
      this._bindings.method_set_item_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_item_name() {
    if (!this._bindings.method_get_item_name) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_name");
      this._bindings.method_get_item_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_mesh() {
    if (!this._bindings.method_get_item_mesh) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_mesh");
      this._bindings.method_get_item_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1576363275
      );
    }
  }
  static init_method_get_item_mesh_transform() {
    if (!this._bindings.method_get_item_mesh_transform) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_mesh_transform");
      this._bindings.method_get_item_mesh_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965739696
      );
    }
  }
  static init_method_get_item_navigation_mesh() {
    if (!this._bindings.method_get_item_navigation_mesh) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_navigation_mesh");
      this._bindings.method_get_item_navigation_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2729647406
      );
    }
  }
  static init_method_get_item_navigation_mesh_transform() {
    if (!this._bindings.method_get_item_navigation_mesh_transform) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_navigation_mesh_transform");
      this._bindings.method_get_item_navigation_mesh_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965739696
      );
    }
  }
  static init_method_get_item_navigation_layers() {
    if (!this._bindings.method_get_item_navigation_layers) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_navigation_layers");
      this._bindings.method_get_item_navigation_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_shapes() {
    if (!this._bindings.method_get_item_shapes) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_shapes");
      this._bindings.method_get_item_shapes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_get_item_preview() {
    if (!this._bindings.method_get_item_preview) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_preview");
      this._bindings.method_get_item_preview = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_remove_item() {
    if (!this._bindings.method_remove_item) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_find_item_by_name() {
    if (!this._bindings.method_find_item_by_name) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("find_item_by_name");
      this._bindings.method_find_item_by_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_item_list() {
    if (!this._bindings.method_get_item_list) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_item_list");
      this._bindings.method_get_item_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_get_last_unused_item_id() {
    if (!this._bindings.method_get_last_unused_item_id) {
      let classname = new StringName("MeshLibrary");
      let methodname = new StringName("get_last_unused_item_id");
      this._bindings.method_get_last_unused_item_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  create_item(_id) {
    MeshLibrary.init_method_create_item();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_create_item,
      this._owner,
      _id
    );
    
  }
  set_item_name(_id, _name) {
    MeshLibrary.init_method_set_item_name();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_name,
      this._owner,
      _id, _name
    );
    
  }
  set_item_mesh(_id, _mesh) {
    MeshLibrary.init_method_set_item_mesh();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_mesh,
      this._owner,
      _id, _mesh
    );
    
  }
  set_item_mesh_transform(_id, _mesh_transform) {
    MeshLibrary.init_method_set_item_mesh_transform();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_mesh_transform,
      this._owner,
      _id, _mesh_transform
    );
    
  }
  set_item_navigation_mesh(_id, _navigation_mesh) {
    MeshLibrary.init_method_set_item_navigation_mesh();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_navigation_mesh,
      this._owner,
      _id, _navigation_mesh
    );
    
  }
  set_item_navigation_mesh_transform(_id, _navigation_mesh) {
    MeshLibrary.init_method_set_item_navigation_mesh_transform();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_navigation_mesh_transform,
      this._owner,
      _id, _navigation_mesh
    );
    
  }
  set_item_navigation_layers(_id, _navigation_layers) {
    MeshLibrary.init_method_set_item_navigation_layers();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_navigation_layers,
      this._owner,
      _id, _navigation_layers
    );
    
  }
  set_item_shapes(_id, _shapes) {
    MeshLibrary.init_method_set_item_shapes();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_shapes,
      this._owner,
      _id, _shapes
    );
    
  }
  set_item_preview(_id, _texture) {
    MeshLibrary.init_method_set_item_preview();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_set_item_preview,
      this._owner,
      _id, _texture
    );
    
  }
  get_item_name(_id) {
    MeshLibrary.init_method_get_item_name();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_name,
      this._owner,
			Variant.Type.STRING,
    
      _id
    );
    
  }
  get_item_mesh(_id) {
    MeshLibrary.init_method_get_item_mesh();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_mesh,
      this._owner,
			Variant.Type.OBJECT,
      _id
    );
    
  }
  get_item_mesh_transform(_id) {
    MeshLibrary.init_method_get_item_mesh_transform();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_mesh_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _id
    );
    
  }
  get_item_navigation_mesh(_id) {
    MeshLibrary.init_method_get_item_navigation_mesh();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_navigation_mesh,
      this._owner,
			Variant.Type.OBJECT,
      _id
    );
    
  }
  get_item_navigation_mesh_transform(_id) {
    MeshLibrary.init_method_get_item_navigation_mesh_transform();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_navigation_mesh_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _id
    );
    
  }
  get_item_navigation_layers(_id) {
    MeshLibrary.init_method_get_item_navigation_layers();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_navigation_layers,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  get_item_shapes(_id) {
    MeshLibrary.init_method_get_item_shapes();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_shapes,
      this._owner,
			Variant.Type.ARRAY,
    
      _id
    );
    
  }
  get_item_preview(_id) {
    MeshLibrary.init_method_get_item_preview();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_preview,
      this._owner,
			Variant.Type.OBJECT,
      _id
    );
    
  }
  remove_item(_id) {
    MeshLibrary.init_method_remove_item();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_remove_item,
      this._owner,
      _id
    );
    
  }
  find_item_by_name(_name) {
    MeshLibrary.init_method_find_item_by_name();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_find_item_by_name,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  clear() {
    MeshLibrary.init_method_clear();
    return _call_native_mb_no_ret(
      MeshLibrary._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_item_list() {
    MeshLibrary.init_method_get_item_list();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_item_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  get_last_unused_item_id() {
    MeshLibrary.init_method_get_last_unused_item_id();
    return _call_native_mb_ret(
      MeshLibrary._bindings.method_get_last_unused_item_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}