import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { SpriteBase3D } from '@js_godot/classes/sprite_base3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_sprite_frames;
  method_get_sprite_frames;
  method_set_animation;
  method_get_animation;
  method_set_autoplay;
  method_get_autoplay;
  method_is_playing;
  method_play;
  method_play_backwards;
  method_pause;
  method_stop;
  method_set_frame;
  method_get_frame;
  method_set_frame_progress;
  method_get_frame_progress;
  method_set_frame_and_progress;
  method_set_speed_scale;
  method_get_speed_scale;
  method_get_playing_speed;
}
export class AnimatedSprite3D extends SpriteBase3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatedSprite3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_sprite_frames() {
    if (!this.#_bindings.method_set_sprite_frames) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_sprite_frames");
      this.#_bindings.method_set_sprite_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        905781144
      );
    }
  }
  static init_method_get_sprite_frames() {
    if (!this.#_bindings.method_get_sprite_frames) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_sprite_frames");
      this.#_bindings.method_get_sprite_frames = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3804851214
      );
    }
  }
  static init_method_set_animation() {
    if (!this.#_bindings.method_set_animation) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_animation");
      this.#_bindings.method_set_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_animation() {
    if (!this.#_bindings.method_get_animation) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_animation");
      this.#_bindings.method_get_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_autoplay() {
    if (!this.#_bindings.method_set_autoplay) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_autoplay");
      this.#_bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_autoplay() {
    if (!this.#_bindings.method_get_autoplay) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_autoplay");
      this.#_bindings.method_get_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_playing() {
    if (!this.#_bindings.method_is_playing) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("is_playing");
      this.#_bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_play() {
    if (!this.#_bindings.method_play) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("play");
      this.#_bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2372066587
      );
    }
  }
  static init_method_play_backwards() {
    if (!this.#_bindings.method_play_backwards) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("play_backwards");
      this.#_bindings.method_play_backwards = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1421762485
      );
    }
  }
  static init_method_pause() {
    if (!this.#_bindings.method_pause) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("pause");
      this.#_bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_stop() {
    if (!this.#_bindings.method_stop) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_frame() {
    if (!this.#_bindings.method_set_frame) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame");
      this.#_bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_frame() {
    if (!this.#_bindings.method_get_frame) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_frame");
      this.#_bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_frame_progress() {
    if (!this.#_bindings.method_set_frame_progress) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame_progress");
      this.#_bindings.method_set_frame_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_frame_progress() {
    if (!this.#_bindings.method_get_frame_progress) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_frame_progress");
      this.#_bindings.method_get_frame_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_frame_and_progress() {
    if (!this.#_bindings.method_set_frame_and_progress) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame_and_progress");
      this.#_bindings.method_set_frame_and_progress = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_set_speed_scale() {
    if (!this.#_bindings.method_set_speed_scale) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_speed_scale");
      this.#_bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_speed_scale() {
    if (!this.#_bindings.method_get_speed_scale) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_speed_scale");
      this.#_bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_playing_speed() {
    if (!this.#_bindings.method_get_playing_speed) {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_playing_speed");
      this.#_bindings.method_get_playing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_sprite_frames(_sprite_frames) {
    AnimatedSprite3D.init_method_set_sprite_frames();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_sprite_frames,
      this._owner,
      _sprite_frames
    );
    
  }
  get_sprite_frames() {
    AnimatedSprite3D.init_method_get_sprite_frames();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_sprite_frames,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_animation(_name) {
    AnimatedSprite3D.init_method_set_animation();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_animation,
      this._owner,
      _name
    );
    
  }
  get_animation() {
    AnimatedSprite3D.init_method_get_animation();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_animation,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_autoplay(_name) {
    AnimatedSprite3D.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_autoplay,
      this._owner,
      _name
    );
    
  }
  get_autoplay() {
    AnimatedSprite3D.init_method_get_autoplay();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_autoplay,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_playing() {
    AnimatedSprite3D.init_method_is_playing();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  play(_name, _custom_speed, _from_end) {
    AnimatedSprite3D.init_method_play();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_play,
      this._owner,
      _name, _custom_speed, _from_end
    );
    
  }
  play_backwards(_name) {
    AnimatedSprite3D.init_method_play_backwards();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_play_backwards,
      this._owner,
      _name
    );
    
  }
  pause() {
    AnimatedSprite3D.init_method_pause();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_pause,
      this._owner,
      
    );
    
  }
  stop() {
    AnimatedSprite3D.init_method_stop();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_frame(_frame) {
    AnimatedSprite3D.init_method_set_frame();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    AnimatedSprite3D.init_method_get_frame();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_frame_progress(_progress) {
    AnimatedSprite3D.init_method_set_frame_progress();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_frame_progress,
      this._owner,
      _progress
    );
    
  }
  get_frame_progress() {
    AnimatedSprite3D.init_method_get_frame_progress();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_frame_progress,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_frame_and_progress(_frame, _progress) {
    AnimatedSprite3D.init_method_set_frame_and_progress();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_frame_and_progress,
      this._owner,
      _frame, _progress
    );
    
  }
  set_speed_scale(_speed_scale) {
    AnimatedSprite3D.init_method_set_speed_scale();
    return _call_native_mb_no_ret(
      AnimatedSprite3D.#_bindings.method_set_speed_scale,
      this._owner,
      _speed_scale
    );
    
  }
  get_speed_scale() {
    AnimatedSprite3D.init_method_get_speed_scale();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_playing_speed() {
    AnimatedSprite3D.init_method_get_playing_speed();
    return _call_native_mb_ret(
      AnimatedSprite3D.#_bindings.method_get_playing_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get sprite_frames () {
  return this.get_sprite_frames();
}
set sprite_frames (new_value) {
  this.set_sprite_frames(new_value);
}
get animation () {
  return this.get_animation();
}
set animation (new_value) {
  this.set_animation(new_value);
}
get autoplay () {
  return this.get_autoplay();
}
set autoplay (new_value) {
  this.set_autoplay(new_value);
}
get frame () {
  return this.get_frame();
}
set frame (new_value) {
  this.set_frame(new_value);
}
get frame_progress () {
  return this.get_frame_progress();
}
set frame_progress (new_value) {
  this.set_frame_progress(new_value);
}
get speed_scale () {
  return this.get_speed_scale();
}
set speed_scale (new_value) {
  this.set_speed_scale(new_value);
}

}