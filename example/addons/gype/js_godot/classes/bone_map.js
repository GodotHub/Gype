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
  method_get_profile;
  method_set_profile;
  method_get_skeleton_bone_name;
  method_set_skeleton_bone_name;
  method_find_profile_bone_name;
}
@GodotClass
export class BoneMap extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BoneMap");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_profile() {
    if (!this._bindings.method_get_profile) {
      let classname = new StringName("BoneMap");
      let methodname = new StringName("get_profile");
      this._bindings.method_get_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291782652
      );
    }
  }
  static init_method_set_profile() {
    if (!this._bindings.method_set_profile) {
      let classname = new StringName("BoneMap");
      let methodname = new StringName("set_profile");
      this._bindings.method_set_profile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3870374136
      );
    }
  }
  static init_method_get_skeleton_bone_name() {
    if (!this._bindings.method_get_skeleton_bone_name) {
      let classname = new StringName("BoneMap");
      let methodname = new StringName("get_skeleton_bone_name");
      this._bindings.method_get_skeleton_bone_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965194235
      );
    }
  }
  static init_method_set_skeleton_bone_name() {
    if (!this._bindings.method_set_skeleton_bone_name) {
      let classname = new StringName("BoneMap");
      let methodname = new StringName("set_skeleton_bone_name");
      this._bindings.method_set_skeleton_bone_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_find_profile_bone_name() {
    if (!this._bindings.method_find_profile_bone_name) {
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
    BoneMap.init_method_get_profile();
    return _call_native_mb_ret(
      BoneMap._bindings.method_get_profile,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_profile(_profile) {
    BoneMap.init_method_set_profile();
    return _call_native_mb_no_ret(
      BoneMap._bindings.method_set_profile,
      this._owner,
      _profile
    );
    
  }
  get_skeleton_bone_name(_profile_bone_name) {
    BoneMap.init_method_get_skeleton_bone_name();
    return _call_native_mb_ret(
      BoneMap._bindings.method_get_skeleton_bone_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _profile_bone_name
    );
    
  }
  set_skeleton_bone_name(_profile_bone_name, _skeleton_bone_name) {
    BoneMap.init_method_set_skeleton_bone_name();
    return _call_native_mb_no_ret(
      BoneMap._bindings.method_set_skeleton_bone_name,
      this._owner,
      _profile_bone_name, _skeleton_bone_name
    );
    
  }
  find_profile_bone_name(_skeleton_bone_name) {
    BoneMap.init_method_find_profile_bone_name();
    return _call_native_mb_ret(
      BoneMap._bindings.method_find_profile_bone_name,
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

}