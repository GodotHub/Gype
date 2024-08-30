import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_profile;
    method_set_profile;
    method_get_skeleton_bone_name;
    method_set_skeleton_bone_name;
    method_find_profile_bone_name;
}


export class BoneMap extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BoneMap");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("BoneMap");
        let methodname = new StringName("get_profile");
        this._bindings.method_get_profile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4291782652
        );
      }
      {
        let classname = new StringName("BoneMap");
        let methodname = new StringName("set_profile");
        this._bindings.method_set_profile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3870374136
        );
      }
      {
        let classname = new StringName("BoneMap");
        let methodname = new StringName("get_skeleton_bone_name");
        this._bindings.method_get_skeleton_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965194235
        );
      }
      {
        let classname = new StringName("BoneMap");
        let methodname = new StringName("set_skeleton_bone_name");
        this._bindings.method_set_skeleton_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3740211285
        );
      }
      {
        let classname = new StringName("BoneMap");
        let methodname = new StringName("find_profile_bone_name");
        this._bindings.method_find_profile_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965194235
        );
      }
  }
  get_profile() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_profile,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_profile(_profile) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_profile,
      this._owner,
      _profile
    );
    
  }
  get_skeleton_bone_name(_profile_bone_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton_bone_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _profile_bone_name
    );
    
  }
  set_skeleton_bone_name(_profile_bone_name, _skeleton_bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skeleton_bone_name,
      this._owner,
      _profile_bone_name, _skeleton_bone_name
    );
    
  }
  find_profile_bone_name(_skeleton_bone_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_profile_bone_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _skeleton_bone_name
    );
    
  }
}