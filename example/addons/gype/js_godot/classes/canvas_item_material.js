import * as internal from '__internal__';
import { Material } from '@js_godot/classes/material'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class CanvasItemMaterial extends Material{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CanvasItemMaterial");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_blend_mode() {
    if (!this._bindings.method_set_blend_mode) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_blend_mode");
      this._bindings.method_set_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1786054936
      );
    }
  }
  static init_method_get_blend_mode() {
    if (!this._bindings.method_get_blend_mode) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("get_blend_mode");
      this._bindings.method_get_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3318684035
      );
    }
  }
  static init_method_set_light_mode() {
    if (!this._bindings.method_set_light_mode) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_light_mode");
      this._bindings.method_set_light_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        628074070
      );
    }
  }
  static init_method_get_light_mode() {
    if (!this._bindings.method_get_light_mode) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("get_light_mode");
      this._bindings.method_get_light_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3863292382
      );
    }
  }
  static init_method_set_particles_animation() {
    if (!this._bindings.method_set_particles_animation) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_particles_animation");
      this._bindings.method_set_particles_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_particles_animation() {
    if (!this._bindings.method_get_particles_animation) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("get_particles_animation");
      this._bindings.method_get_particles_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_particles_anim_h_frames() {
    if (!this._bindings.method_set_particles_anim_h_frames) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_particles_anim_h_frames");
      this._bindings.method_set_particles_anim_h_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_particles_anim_h_frames() {
    if (!this._bindings.method_get_particles_anim_h_frames) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("get_particles_anim_h_frames");
      this._bindings.method_get_particles_anim_h_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_particles_anim_v_frames() {
    if (!this._bindings.method_set_particles_anim_v_frames) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_particles_anim_v_frames");
      this._bindings.method_set_particles_anim_v_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_particles_anim_v_frames() {
    if (!this._bindings.method_get_particles_anim_v_frames) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("get_particles_anim_v_frames");
      this._bindings.method_get_particles_anim_v_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_particles_anim_loop() {
    if (!this._bindings.method_set_particles_anim_loop) {
      let classname = new StringName("CanvasItemMaterial");
      let methodname = new StringName("set_particles_anim_loop");
      this._bindings.method_set_particles_anim_loop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_particles_anim_loop() {
    if (!this._bindings.method_get_particles_anim_loop) {
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
    CanvasItemMaterial.init_method_set_blend_mode();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_blend_mode,
      this._owner,
      _blend_mode
    );
    
  }
  get_blend_mode() {
    CanvasItemMaterial.init_method_get_blend_mode();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_blend_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_light_mode(_light_mode) {
    CanvasItemMaterial.init_method_set_light_mode();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_light_mode,
      this._owner,
      _light_mode
    );
    
  }
  get_light_mode() {
    CanvasItemMaterial.init_method_get_light_mode();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_light_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_particles_animation(_particles_anim) {
    CanvasItemMaterial.init_method_set_particles_animation();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_particles_animation,
      this._owner,
      _particles_anim
    );
    
  }
  get_particles_animation() {
    CanvasItemMaterial.init_method_get_particles_animation();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_particles_animation,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_particles_anim_h_frames(_frames) {
    CanvasItemMaterial.init_method_set_particles_anim_h_frames();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_particles_anim_h_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_h_frames() {
    CanvasItemMaterial.init_method_get_particles_anim_h_frames();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_particles_anim_h_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_particles_anim_v_frames(_frames) {
    CanvasItemMaterial.init_method_set_particles_anim_v_frames();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_particles_anim_v_frames,
      this._owner,
      _frames
    );
    
  }
  get_particles_anim_v_frames() {
    CanvasItemMaterial.init_method_get_particles_anim_v_frames();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_particles_anim_v_frames,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_particles_anim_loop(_loop) {
    CanvasItemMaterial.init_method_set_particles_anim_loop();
    return _call_native_mb_no_ret(
      CanvasItemMaterial._bindings.method_set_particles_anim_loop,
      this._owner,
      _loop
    );
    
  }
  get_particles_anim_loop() {
    CanvasItemMaterial.init_method_get_particles_anim_loop();
    return _call_native_mb_ret(
      CanvasItemMaterial._bindings.method_get_particles_anim_loop,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get blend_mode () {
  return this.get_blend_mode();
}
set blend_mode (new_value) {
  this.set_blend_mode(new_value);
}
get light_mode () {
  return this.get_light_mode();
}
set light_mode (new_value) {
  this.set_light_mode(new_value);
}
get particles_animation () {
  return this.get_particles_animation();
}
set particles_animation (new_value) {
  this.set_particles_animation(new_value);
}
get particles_anim_h_frames () {
  return this.get_particles_anim_h_frames();
}
set particles_anim_h_frames (new_value) {
  this.set_particles_anim_h_frames(new_value);
}
get particles_anim_v_frames () {
  return this.get_particles_anim_v_frames();
}
set particles_anim_v_frames (new_value) {
  this.set_particles_anim_v_frames(new_value);
}
get particles_anim_loop () {
  return this.get_particles_anim_loop();
}
set particles_anim_loop (new_value) {
  this.set_particles_anim_loop(new_value);
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