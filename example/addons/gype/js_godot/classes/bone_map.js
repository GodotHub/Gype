import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_profile;
  method_set_profile;
  method_get_skeleton_bone_name;
  method_set_skeleton_bone_name;
  method_find_profile_bone_name;
}
export class BoneMap extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("BoneMap");
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
			Variant.Type.STRING_NAME,
    
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
			Variant.Type.STRING_NAME,
    
      _skeleton_bone_name
    );
    
  }
  
get profile () {
  return this.get_profile();
}
set profile (new_value) {
  this.set_profile(new_value);
}


  static {
    this._init_bindings();
  }
}