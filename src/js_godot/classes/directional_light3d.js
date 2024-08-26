import * as internal from '__internal__';
import { Light3D } from 'src/js_godot/classeslight3d'
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

  constructor(godot_object) {
    if (!godot_object) {
      super("DirectionalLight3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
}