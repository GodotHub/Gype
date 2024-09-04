import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Light3D } from '@js_godot/classes/light3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_shadow_mode;
  method_get_shadow_mode;
  method_set_blend_splits;
  method_is_blend_splits_enabled;
  method_set_sky_mode;
  method_get_sky_mode;
}
export class DirectionalLight3D extends Light3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("DirectionalLight3D");
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
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("set_shadow_mode");
      this._bindings.method_set_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1261211726
      );
    }
    {
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("get_shadow_mode");
      this._bindings.method_get_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2765228544
      );
    }
    {
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("set_blend_splits");
      this._bindings.method_set_blend_splits = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("is_blend_splits_enabled");
      this._bindings.method_is_blend_splits_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("set_sky_mode");
      this._bindings.method_set_sky_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2691194817
      );
    }
    {
      let classname = new StringName("DirectionalLight3D");
      let methodname = new StringName("get_sky_mode");
      this._bindings.method_get_sky_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3819982774
      );
    }
  }
  set_shadow_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_mode,
      this._owner,
      _mode
    );
    
  }
  get_shadow_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_blend_splits(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_splits,
      this._owner,
      _enabled
    );
    
  }
  is_blend_splits_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_blend_splits_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_sky_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sky_mode,
      this._owner,
      _mode
    );
    
  }
  get_sky_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sky_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get directional_shadow_mode () {
  return this.get_shadow_mode();
}
set directional_shadow_mode (new_value) {
  this.set_shadow_mode(new_value);
}
get directional_shadow_split_1 () {
  return this.get_param();
}
set directional_shadow_split_1 (new_value) {
  this.set_param(new_value);
}
get directional_shadow_split_2 () {
  return this.get_param();
}
set directional_shadow_split_2 (new_value) {
  this.set_param(new_value);
}
get directional_shadow_split_3 () {
  return this.get_param();
}
set directional_shadow_split_3 (new_value) {
  this.set_param(new_value);
}
get directional_shadow_blend_splits () {
  return this.is_blend_splits_enabled();
}
set directional_shadow_blend_splits (new_value) {
  this.set_blend_splits(new_value);
}
get directional_shadow_fade_start () {
  return this.get_param();
}
set directional_shadow_fade_start (new_value) {
  this.set_param(new_value);
}
get directional_shadow_max_distance () {
  return this.get_param();
}
set directional_shadow_max_distance (new_value) {
  this.set_param(new_value);
}
get directional_shadow_pancake_size () {
  return this.get_param();
}
set directional_shadow_pancake_size (new_value) {
  this.set_param(new_value);
}
get sky_mode () {
  return this.get_sky_mode();
}
set sky_mode (new_value) {
  this.set_sky_mode(new_value);
}

  static ShadowMode = {
    SHADOW_ORTHOGONAL: 0,
    SHADOW_PARALLEL_2_SPLITS: 1,
    SHADOW_PARALLEL_4_SPLITS: 2,
  }
  static SkyMode = {
    SKY_MODE_LIGHT_AND_SKY: 0,
    SKY_MODE_LIGHT_ONLY: 1,
    SKY_MODE_SKY_ONLY: 2,
  }

  static {
    this._init_bindings();
  }
}