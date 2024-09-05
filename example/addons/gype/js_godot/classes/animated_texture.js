import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_frames;
  method_get_frames;
  method_set_current_frame;
  method_get_current_frame;
  method_set_pause;
  method_get_pause;
  method_set_one_shot;
  method_get_one_shot;
  method_set_speed_scale;
  method_get_speed_scale;
  method_set_frame_texture;
  method_get_frame_texture;
  method_set_frame_duration;
  method_get_frame_duration;
}
export class AnimatedTexture extends Texture2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatedTexture");
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
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_frames");
      this._bindings.method_set_frames = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_frames");
      this._bindings.method_get_frames = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_current_frame");
      this._bindings.method_set_current_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_current_frame");
      this._bindings.method_get_current_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_pause");
      this._bindings.method_set_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_pause");
      this._bindings.method_get_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_one_shot");
      this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_one_shot");
      this._bindings.method_get_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_frame_texture");
      this._bindings.method_set_frame_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_frame_texture");
      this._bindings.method_get_frame_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("set_frame_duration");
      this._bindings.method_set_frame_duration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AnimatedTexture");
      let methodname = new StringName("get_frame_duration");
      this._bindings.method_get_frame_duration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
  }
  
  set_frames(_frames) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_frames,
      this._owner,
      _frames
    );
    
  }
  get_frames() {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_frames,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_current_frame(_frame) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_current_frame,
      this._owner,
      _frame
    );
    
  }
  get_current_frame() {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_current_frame,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_pause(_pause) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_pause,
      this._owner,
      _pause
    );
    
  }
  get_pause() {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_pause,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_one_shot(_one_shot) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_one_shot,
      this._owner,
      _one_shot
    );
    
  }
  get_one_shot() {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_one_shot,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_speed_scale(_scale) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_speed_scale,
      this._owner,
      _scale
    );
    
  }
  get_speed_scale() {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_frame_texture(_frame, _texture) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_frame_texture,
      this._owner,
      _frame, _texture
    );
    
  }
  get_frame_texture(_frame) {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_frame_texture,
      this._owner,
			Variant.INT,
      _frame
    );
    
  }
  set_frame_duration(_frame, _duration) {
    return _call_native_mb_no_ret(
      AnimatedTexture._bindings.method_set_frame_duration,
      this._owner,
      _frame, _duration
    );
    
  }
  get_frame_duration(_frame) {
    return _call_native_mb_ret(
      AnimatedTexture._bindings.method_get_frame_duration,
      this._owner,
			Variant.Type.FLOAT,
      _frame
    );
    
  }
  
get frames () {
  return this.get_frames();
}
set frames (new_value) {
  this.set_frames(new_value);
}
get current_frame () {
  return this.get_current_frame();
}
set current_frame (new_value) {
  this.set_current_frame(new_value);
}
get pause () {
  return this.get_pause();
}
set pause (new_value) {
  this.set_pause(new_value);
}
get one_shot () {
  return this.get_one_shot();
}
set one_shot (new_value) {
  this.set_one_shot(new_value);
}
get speed_scale () {
  return this.get_speed_scale();
}
set speed_scale (new_value) {
  this.set_speed_scale(new_value);
}


  static {
    this._init_bindings();
  }
}