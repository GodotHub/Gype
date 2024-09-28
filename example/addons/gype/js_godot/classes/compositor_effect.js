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
  method_set_enabled;
  method_get_enabled;
  method_set_effect_callback_type;
  method_get_effect_callback_type;
  method_set_access_resolved_color;
  method_get_access_resolved_color;
  method_set_access_resolved_depth;
  method_get_access_resolved_depth;
  method_set_needs_motion_vectors;
  method_get_needs_motion_vectors;
  method_set_needs_normal_roughness;
  method_get_needs_normal_roughness;
  method_set_needs_separate_specular;
  method_get_needs_separate_specular;
}
@GodotClass
export class CompositorEffect extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CompositorEffect");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enabled() {
    if (!this._bindings.method_get_enabled) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_enabled");
      this._bindings.method_get_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_effect_callback_type() {
    if (!this._bindings.method_set_effect_callback_type) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_effect_callback_type");
      this._bindings.method_set_effect_callback_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1390728419
      );
    }
  }
  static init_method_get_effect_callback_type() {
    if (!this._bindings.method_get_effect_callback_type) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_effect_callback_type");
      this._bindings.method_get_effect_callback_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1221912590
      );
    }
  }
  static init_method_set_access_resolved_color() {
    if (!this._bindings.method_set_access_resolved_color) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_access_resolved_color");
      this._bindings.method_set_access_resolved_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_access_resolved_color() {
    if (!this._bindings.method_get_access_resolved_color) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_access_resolved_color");
      this._bindings.method_get_access_resolved_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_access_resolved_depth() {
    if (!this._bindings.method_set_access_resolved_depth) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_access_resolved_depth");
      this._bindings.method_set_access_resolved_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_access_resolved_depth() {
    if (!this._bindings.method_get_access_resolved_depth) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_access_resolved_depth");
      this._bindings.method_get_access_resolved_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_needs_motion_vectors() {
    if (!this._bindings.method_set_needs_motion_vectors) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_motion_vectors");
      this._bindings.method_set_needs_motion_vectors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_needs_motion_vectors() {
    if (!this._bindings.method_get_needs_motion_vectors) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_needs_motion_vectors");
      this._bindings.method_get_needs_motion_vectors = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_needs_normal_roughness() {
    if (!this._bindings.method_set_needs_normal_roughness) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_normal_roughness");
      this._bindings.method_set_needs_normal_roughness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_needs_normal_roughness() {
    if (!this._bindings.method_get_needs_normal_roughness) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_needs_normal_roughness");
      this._bindings.method_get_needs_normal_roughness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_needs_separate_specular() {
    if (!this._bindings.method_set_needs_separate_specular) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_separate_specular");
      this._bindings.method_set_needs_separate_specular = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_needs_separate_specular() {
    if (!this._bindings.method_get_needs_separate_specular) {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_needs_separate_specular");
      this._bindings.method_get_needs_separate_specular = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  _render_callback(_effect_callback_type, _render_data) {
  }
  set_enabled(_enabled) {
    CompositorEffect.init_method_set_enabled();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  get_enabled() {
    CompositorEffect.init_method_get_enabled();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_effect_callback_type(_effect_callback_type) {
    CompositorEffect.init_method_set_effect_callback_type();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_effect_callback_type,
      this._owner,
      _effect_callback_type
    );
    
  }
  get_effect_callback_type() {
    CompositorEffect.init_method_get_effect_callback_type();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_effect_callback_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_access_resolved_color(_enable) {
    CompositorEffect.init_method_set_access_resolved_color();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_access_resolved_color,
      this._owner,
      _enable
    );
    
  }
  get_access_resolved_color() {
    CompositorEffect.init_method_get_access_resolved_color();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_access_resolved_color,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_access_resolved_depth(_enable) {
    CompositorEffect.init_method_set_access_resolved_depth();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_access_resolved_depth,
      this._owner,
      _enable
    );
    
  }
  get_access_resolved_depth() {
    CompositorEffect.init_method_get_access_resolved_depth();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_access_resolved_depth,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_needs_motion_vectors(_enable) {
    CompositorEffect.init_method_set_needs_motion_vectors();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_needs_motion_vectors,
      this._owner,
      _enable
    );
    
  }
  get_needs_motion_vectors() {
    CompositorEffect.init_method_get_needs_motion_vectors();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_needs_motion_vectors,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_needs_normal_roughness(_enable) {
    CompositorEffect.init_method_set_needs_normal_roughness();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_needs_normal_roughness,
      this._owner,
      _enable
    );
    
  }
  get_needs_normal_roughness() {
    CompositorEffect.init_method_get_needs_normal_roughness();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_needs_normal_roughness,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_needs_separate_specular(_enable) {
    CompositorEffect.init_method_set_needs_separate_specular();
    return _call_native_mb_no_ret(
      CompositorEffect._bindings.method_set_needs_separate_specular,
      this._owner,
      _enable
    );
    
  }
  get_needs_separate_specular() {
    CompositorEffect.init_method_get_needs_separate_specular();
    return _call_native_mb_ret(
      CompositorEffect._bindings.method_get_needs_separate_specular,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get enabled () {
  return this.get_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get effect_callback_type () {
  return this.get_effect_callback_type();
}
set effect_callback_type (new_value) {
  this.set_effect_callback_type(new_value);
}
get access_resolved_color () {
  return this.get_access_resolved_color();
}
set access_resolved_color (new_value) {
  this.set_access_resolved_color(new_value);
}
get access_resolved_depth () {
  return this.get_access_resolved_depth();
}
set access_resolved_depth (new_value) {
  this.set_access_resolved_depth(new_value);
}
get needs_motion_vectors () {
  return this.get_needs_motion_vectors();
}
set needs_motion_vectors (new_value) {
  this.set_needs_motion_vectors(new_value);
}
get needs_normal_roughness () {
  return this.get_needs_normal_roughness();
}
set needs_normal_roughness (new_value) {
  this.set_needs_normal_roughness(new_value);
}
get needs_separate_specular () {
  return this.get_needs_separate_specular();
}
set needs_separate_specular (new_value) {
  this.set_needs_separate_specular(new_value);
}

  static EffectCallbackType = {
    EFFECT_CALLBACK_TYPE_PRE_OPAQUE: 0,
    EFFECT_CALLBACK_TYPE_POST_OPAQUE: 1,
    EFFECT_CALLBACK_TYPE_POST_SKY: 2,
    EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT: 3,
    EFFECT_CALLBACK_TYPE_POST_TRANSPARENT: 4,
    EFFECT_CALLBACK_TYPE_MAX: 5,
  }
}