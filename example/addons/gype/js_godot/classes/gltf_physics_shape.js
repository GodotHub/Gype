import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_from_node;
  method_to_node;
  method_from_resource;
  method_to_resource;
  method_from_dictionary;
  method_to_dictionary;
  method_get_shape_type;
  method_set_shape_type;
  method_get_size;
  method_set_size;
  method_get_radius;
  method_set_radius;
  method_get_height;
  method_set_height;
  method_get_is_trigger;
  method_set_is_trigger;
  method_get_mesh_index;
  method_set_mesh_index;
  method_get_importer_mesh;
  method_set_importer_mesh;
}
export class GLTFPhysicsShape extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GLTFPhysicsShape");
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
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("from_node");
      this._bindings.method_from_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3613751275
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("to_node");
      this._bindings.method_to_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        563689933
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("from_resource");
      this._bindings.method_from_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3845569786
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("to_resource");
      this._bindings.method_to_resource = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1913542110
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("from_dictionary");
      this._bindings.method_from_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2390691823
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("to_dictionary");
      this._bindings.method_to_dictionary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_shape_type");
      this._bindings.method_get_shape_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_shape_type");
      this._bindings.method_set_shape_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_height");
      this._bindings.method_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_height");
      this._bindings.method_set_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_is_trigger");
      this._bindings.method_get_is_trigger = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_is_trigger");
      this._bindings.method_set_is_trigger = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_mesh_index");
      this._bindings.method_get_mesh_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_mesh_index");
      this._bindings.method_set_mesh_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("get_importer_mesh");
      this._bindings.method_get_importer_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3161779525
      );
    }
    {
      let classname = new StringName("GLTFPhysicsShape");
      let methodname = new StringName("set_importer_mesh");
      this._bindings.method_set_importer_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2255166972
      );
    }
  }
  from_node(_shape_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_node,
      this._owner,
			Variant.INT,
      _shape_node
    );
    
  }
  to_node(_cache_shapes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_node,
      this._owner,
			Variant.INT,
      _cache_shapes
    );
    
  }
  from_resource(_shape_resource) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_resource,
      this._owner,
			Variant.INT,
      _shape_resource
    );
    
  }
  to_resource(_cache_shapes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_resource,
      this._owner,
			Variant.INT,
      _cache_shapes
    );
    
  }
  from_dictionary(_dictionary) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_from_dictionary,
      this._owner,
			Variant.INT,
      _dictionary
    );
    
  }
  to_dictionary() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_to_dictionary,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_shape_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_shape_type(_shape_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape_type,
      this._owner,
      _shape_type
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
    
  }
  get_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_height,
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
  get_is_trigger() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_is_trigger,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_is_trigger(_is_trigger) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_is_trigger,
      this._owner,
      _is_trigger
    );
    
  }
  get_mesh_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_mesh_index(_mesh_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh_index,
      this._owner,
      _mesh_index
    );
    
  }
  get_importer_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_importer_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_importer_mesh(_importer_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_importer_mesh,
      this._owner,
      _importer_mesh
    );
    
  }
  
get shape_type () {
  return this.get_shape_type();
}
set shape_type (new_value) {
  this.set_shape_type(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get radius () {
  return this.get_radius();
}
set radius (new_value) {
  this.set_radius(new_value);
}
get height () {
  return this.get_height();
}
set height (new_value) {
  this.set_height(new_value);
}
get is_trigger () {
  return this.get_is_trigger();
}
set is_trigger (new_value) {
  this.set_is_trigger(new_value);
}
get mesh_index () {
  return this.get_mesh_index();
}
set mesh_index (new_value) {
  this.set_mesh_index(new_value);
}
get importer_mesh () {
  return this.get_importer_mesh();
}
set importer_mesh (new_value) {
  this.set_importer_mesh(new_value);
}


  static {
    this._init_bindings();
  }
}