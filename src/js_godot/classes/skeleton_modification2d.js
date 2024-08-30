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
    method_set_enabled;
    method_get_enabled;
    method_get_modification_stack;
    method_set_is_setup;
    method_get_is_setup;
    method_set_execution_mode;
    method_get_execution_mode;
    method_clamp_angle;
    method_set_editor_draw_gizmo;
    method_get_editor_draw_gizmo;
}


export class SkeletonModification2D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("set_enabled");
        this._bindings.method_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("get_enabled");
        this._bindings.method_get_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("get_modification_stack");
        this._bindings.method_get_modification_stack = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2137761694
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("set_is_setup");
        this._bindings.method_set_is_setup = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("get_is_setup");
        this._bindings.method_get_is_setup = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("set_execution_mode");
        this._bindings.method_set_execution_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("get_execution_mode");
        this._bindings.method_get_execution_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("clamp_angle");
        this._bindings.method_clamp_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1229502682
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("set_editor_draw_gizmo");
        this._bindings.method_set_editor_draw_gizmo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SkeletonModification2D");
        let methodname = new StringName("get_editor_draw_gizmo");
        this._bindings.method_get_editor_draw_gizmo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  _execute(_delta) {
  }
  _setup_modification(_modification_stack) {
  }
  _draw_editor_gizmo() {
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
  get_modification_stack() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_modification_stack,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_is_setup(_is_setup) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_is_setup,
      this._owner,
      _is_setup
    );
    
  }
  get_is_setup() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_is_setup,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_execution_mode(_execution_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_execution_mode,
      this._owner,
      _execution_mode
    );
    
  }
  get_execution_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_execution_mode,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  clamp_angle(_angle, _min, _max, _invert) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_clamp_angle,
      this._owner,
			Variant.Type.FLOAT,
      _angle, _min, _max, _invert
    );
    
  }
  set_editor_draw_gizmo(_draw_gizmo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editor_draw_gizmo,
      this._owner,
      _draw_gizmo
    );
    
  }
  get_editor_draw_gizmo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_editor_draw_gizmo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}