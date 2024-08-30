import * as internal from '__internal__';
import { Material } from 'src/js_godot/classes/material'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_blend_mode;
    method_get_blend_mode;
    method_set_light_mode;
    method_get_light_mode;
    method_set_particles_animation;
    method_get_particles_animation;
    method_set_particles_anim_h_frames;
    method_get_particles_anim_h_frames;
    method_set_particles_anim_v_frames;
    method_get_particles_anim_v_frames;
    method_set_particles_anim_loop;
    method_get_particles_anim_loop;
}


export class CanvasItemMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasItemMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_blend_mode");
        this._bindings.method_set_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1786054936
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_blend_mode");
        this._bindings.method_get_blend_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3318684035
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_light_mode");
        this._bindings.method_set_light_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          628074070
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_light_mode");
        this._bindings.method_get_light_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3863292382
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_particles_animation");
        this._bindings.method_set_particles_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_particles_animation");
        this._bindings.method_get_particles_animation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_particles_anim_h_frames");
        this._bindings.method_set_particles_anim_h_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_particles_anim_h_frames");
        this._bindings.method_get_particles_anim_h_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_particles_anim_v_frames");
        this._bindings.method_set_particles_anim_v_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_particles_anim_v_frames");
        this._bindings.method_get_particles_anim_v_frames = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("set_particles_anim_loop");
        this._bindings.method_set_particles_anim_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CanvasItemMaterial");
        let methodname = new StringName("get_particles_anim_loop");
        this._bindings.method_get_particles_anim_loop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_blend_mode(_blend_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_mode,
      this._owner,
      _blend_mode
    );
    
  }
  get_blend_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_light_mode(_light_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_light_mode,
      this._owner,
      _light_mode
    );
    
  }
  get_light_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_light_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_particles_animation(_particles_anim) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_animation,
      this._owner,
      _particles_anim
    );
    
  }
  get_particles_animation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_animation,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_particles_anim_h_frames(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_h_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_h_frames() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_h_frames,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_particles_anim_v_frames(_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_v_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_v_frames() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_v_frames,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_particles_anim_loop(_loop) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particles_anim_loop,
      this._owner,
      _loop
    );
    
  }
  get_particles_anim_loop() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particles_anim_loop,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  static BlendMode = {
    BLEND_MODE_MIX: 0,
    BLEND_MODE_ADD: 1,
    BLEND_MODE_SUB: 2,
    BLEND_MODE_MUL: 3,
    BLEND_MODE_PREMULT_ALPHA: 4,
  }
  static LightMode = {
    LIGHT_MODE_NORMAL: 0,
    LIGHT_MODE_UNSHADED: 1,
    LIGHT_MODE_LIGHT_ONLY: 2,
  }
}