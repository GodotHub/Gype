import * as internal from '__internal__';
import { Node2D } from '@js_godot/classes/node2d'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { NodePath } from '@js_godot/variant/node_path'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_remote_node;
  method_get_remote_node;
  method_force_update_cache;
  method_set_use_global_coordinates;
  method_get_use_global_coordinates;
  method_set_update_position;
  method_get_update_position;
  method_set_update_rotation;
  method_get_update_rotation;
  method_set_update_scale;
  method_get_update_scale;
}
export class RemoteTransform2D extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RemoteTransform2D");
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
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("set_remote_node");
      this._bindings.method_set_remote_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("get_remote_node");
      this._bindings.method_get_remote_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("force_update_cache");
      this._bindings.method_force_update_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("set_use_global_coordinates");
      this._bindings.method_set_use_global_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("get_use_global_coordinates");
      this._bindings.method_get_use_global_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("set_update_position");
      this._bindings.method_set_update_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("get_update_position");
      this._bindings.method_get_update_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("set_update_rotation");
      this._bindings.method_set_update_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("get_update_rotation");
      this._bindings.method_get_update_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("set_update_scale");
      this._bindings.method_set_update_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RemoteTransform2D");
      let methodname = new StringName("get_update_scale");
      this._bindings.method_get_update_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  
  set_remote_node(_path) {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_set_remote_node,
      this._owner,
      _path
    );
    
  }
  get_remote_node() {
    return _call_native_mb_ret(
      RemoteTransform2D._bindings.method_get_remote_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  force_update_cache() {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_force_update_cache,
      this._owner,
      
    );
    
  }
  set_use_global_coordinates(_use_global_coordinates) {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_set_use_global_coordinates,
      this._owner,
      _use_global_coordinates
    );
    
  }
  get_use_global_coordinates() {
    return _call_native_mb_ret(
      RemoteTransform2D._bindings.method_get_use_global_coordinates,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_update_position(_update_remote_position) {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_set_update_position,
      this._owner,
      _update_remote_position
    );
    
  }
  get_update_position() {
    return _call_native_mb_ret(
      RemoteTransform2D._bindings.method_get_update_position,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_update_rotation(_update_remote_rotation) {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_set_update_rotation,
      this._owner,
      _update_remote_rotation
    );
    
  }
  get_update_rotation() {
    return _call_native_mb_ret(
      RemoteTransform2D._bindings.method_get_update_rotation,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_update_scale(_update_remote_scale) {
    return _call_native_mb_no_ret(
      RemoteTransform2D._bindings.method_set_update_scale,
      this._owner,
      _update_remote_scale
    );
    
  }
  get_update_scale() {
    return _call_native_mb_ret(
      RemoteTransform2D._bindings.method_get_update_scale,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  
get remote_path () {
  return this.get_remote_node();
}
set remote_path (new_value) {
  this.set_remote_node(new_value);
}
get use_global_coordinates () {
  return this.get_use_global_coordinates();
}
set use_global_coordinates (new_value) {
  this.set_use_global_coordinates(new_value);
}
get update_position () {
  return this.get_update_position();
}
set update_position (new_value) {
  this.set_update_position(new_value);
}
get update_rotation () {
  return this.get_update_rotation();
}
set update_rotation (new_value) {
  this.set_update_rotation(new_value);
}
get update_scale () {
  return this.get_update_scale();
}
set update_scale (new_value) {
  this.set_update_scale(new_value);
}


  static {
    this._init_bindings();
  }
}