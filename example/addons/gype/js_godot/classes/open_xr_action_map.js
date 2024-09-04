import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Resource } from '@js_godot/classes/resource'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_action_sets;
  method_get_action_sets;
  method_get_action_set_count;
  method_find_action_set;
  method_get_action_set;
  method_add_action_set;
  method_remove_action_set;
  method_set_interaction_profiles;
  method_get_interaction_profiles;
  method_get_interaction_profile_count;
  method_find_interaction_profile;
  method_get_interaction_profile;
  method_add_interaction_profile;
  method_remove_interaction_profile;
  method_create_default_action_sets;
}
export class OpenXRActionMap extends Resource{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRActionMap");
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
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("set_action_sets");
      this._bindings.method_set_action_sets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_action_sets");
      this._bindings.method_get_action_sets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_action_set_count");
      this._bindings.method_get_action_set_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("find_action_set");
      this._bindings.method_find_action_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1888809267
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_action_set");
      this._bindings.method_get_action_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1789580336
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("add_action_set");
      this._bindings.method_add_action_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2093310581
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("remove_action_set");
      this._bindings.method_remove_action_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2093310581
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("set_interaction_profiles");
      this._bindings.method_set_interaction_profiles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_interaction_profiles");
      this._bindings.method_get_interaction_profiles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_interaction_profile_count");
      this._bindings.method_get_interaction_profile_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("find_interaction_profile");
      this._bindings.method_find_interaction_profile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3095875538
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("get_interaction_profile");
      this._bindings.method_get_interaction_profile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2546151210
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("add_interaction_profile");
      this._bindings.method_add_interaction_profile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2697953512
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("remove_interaction_profile");
      this._bindings.method_remove_interaction_profile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2697953512
      );
    }
    {
      let classname = new StringName("OpenXRActionMap");
      let methodname = new StringName("create_default_action_sets");
      this._bindings.method_create_default_action_sets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  set_action_sets(_action_sets) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_action_sets,
      this._owner,
      _action_sets
    );
    
  }
  get_action_sets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_sets,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_action_set_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_set_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  find_action_set(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_action_set,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  get_action_set(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_set,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  add_action_set(_action_set) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_action_set,
      this._owner,
      _action_set
    );
    
  }
  remove_action_set(_action_set) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_action_set,
      this._owner,
      _action_set
    );
    
  }
  set_interaction_profiles(_interaction_profiles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_interaction_profiles,
      this._owner,
      _interaction_profiles
    );
    
  }
  get_interaction_profiles() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interaction_profiles,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_interaction_profile_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interaction_profile_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  find_interaction_profile(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_interaction_profile,
      this._owner,
			Variant.INT,
      _name
    );
    
  }
  get_interaction_profile(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_interaction_profile,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  add_interaction_profile(_interaction_profile) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_interaction_profile,
      this._owner,
      _interaction_profile
    );
    
  }
  remove_interaction_profile(_interaction_profile) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_interaction_profile,
      this._owner,
      _interaction_profile
    );
    
  }
  create_default_action_sets() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_default_action_sets,
      this._owner,
      
    );
    
  }
  
get action_sets () {
  return this.get_action_sets();
}
set action_sets (new_value) {
  this.set_action_sets(new_value);
}
get interaction_profiles () {
  return this.get_interaction_profiles();
}
set interaction_profiles (new_value) {
  this.set_interaction_profiles(new_value);
}


  static {
    this._init_bindings();
  }
}