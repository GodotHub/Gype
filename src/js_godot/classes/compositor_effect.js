import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method__render_callback;
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


export class CompositorEffect extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CompositorEffect");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("_render_callback");
      this._bindings.method__render_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_enabled");
      this._bindings.method_get_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_effect_callback_type");
      this._bindings.method_set_effect_callback_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1390728419
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_effect_callback_type");
      this._bindings.method_get_effect_callback_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1221912590
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_access_resolved_color");
      this._bindings.method_set_access_resolved_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_access_resolved_color");
      this._bindings.method_get_access_resolved_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_access_resolved_depth");
      this._bindings.method_set_access_resolved_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_access_resolved_depth");
      this._bindings.method_get_access_resolved_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_motion_vectors");
      this._bindings.method_set_needs_motion_vectors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_needs_motion_vectors");
      this._bindings.method_get_needs_motion_vectors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_normal_roughness");
      this._bindings.method_set_needs_normal_roughness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("get_needs_normal_roughness");
      this._bindings.method_get_needs_normal_roughness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CompositorEffect");
      let methodname = new StringName("set_needs_separate_specular");
      this._bindings.method_set_needs_separate_specular = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__render_callback,
      this._owner,
      _effect_callback_type, _render_data
    );
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
  }
  get_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_effect_callback_type(_effect_callback_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_effect_callback_type,
      this._owner,
      _effect_callback_type
    );
  }
  get_effect_callback_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_effect_callback_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_access_resolved_color(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_access_resolved_color,
      this._owner,
      _enable
    );
  }
  get_access_resolved_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_access_resolved_color,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_access_resolved_depth(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_access_resolved_depth,
      this._owner,
      _enable
    );
  }
  get_access_resolved_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_access_resolved_depth,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_needs_motion_vectors(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_needs_motion_vectors,
      this._owner,
      _enable
    );
  }
  get_needs_motion_vectors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_needs_motion_vectors,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_needs_normal_roughness(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_needs_normal_roughness,
      this._owner,
      _enable
    );
  }
  get_needs_normal_roughness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_needs_normal_roughness,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_needs_separate_specular(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_needs_separate_specular,
      this._owner,
      _enable
    );
  }
  get_needs_separate_specular() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_needs_separate_specular,
      this._owner,
			Variant.Type.BOOL,
      
    );
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