import * as internal from '__internal__';
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_bind_count;
    method_get_bind_count;
    method_add_bind;
    method_add_named_bind;
    method_set_bind_pose;
    method_get_bind_pose;
    method_set_bind_name;
    method_get_bind_name;
    method_set_bind_bone;
    method_get_bind_bone;
    method_clear_binds;
}


export class Skin extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Skin");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("set_bind_count");
        this._bindings.method_set_bind_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("get_bind_count");
        this._bindings.method_get_bind_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("add_bind");
        this._bindings.method_add_bind = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3616898986
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("add_named_bind");
        this._bindings.method_add_named_bind = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3154712474
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("set_bind_pose");
        this._bindings.method_set_bind_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3616898986
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("get_bind_pose");
        this._bindings.method_get_bind_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965739696
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("set_bind_name");
        this._bindings.method_set_bind_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3780747571
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("get_bind_name");
        this._bindings.method_get_bind_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          659327637
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("set_bind_bone");
        this._bindings.method_set_bind_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("get_bind_bone");
        this._bindings.method_get_bind_bone = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("Skin");
        let methodname = new StringName("clear_binds");
        this._bindings.method_clear_binds = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  set_bind_count(_bind_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bind_count,
      this._owner,
      _bind_count
    );
    
  }
  get_bind_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bind_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_bind(_bone, _pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_bind,
      this._owner,
      _bone, _pose
    );
    
  }
  add_named_bind(_name, _pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_named_bind,
      this._owner,
      _name, _pose
    );
    
  }
  set_bind_pose(_bind_index, _pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bind_pose,
      this._owner,
      _bind_index, _pose
    );
    
  }
  get_bind_pose(_bind_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bind_pose,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _bind_index
    );
    
  }
  set_bind_name(_bind_index, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bind_name,
      this._owner,
      _bind_index, _name
    );
    
  }
  get_bind_name(_bind_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bind_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _bind_index
    );
    
  }
  set_bind_bone(_bind_index, _bone) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bind_bone,
      this._owner,
      _bind_index, _bone
    );
    
  }
  get_bind_bone(_bind_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bind_bone,
      this._owner,
			Variant.Type.INT,
      _bind_index
    );
    
  }
  clear_binds() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_binds,
      this._owner,
      
    );
    
  }
}