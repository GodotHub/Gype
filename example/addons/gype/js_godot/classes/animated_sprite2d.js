import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
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
  method_set_centered;
  method_is_centered;
  method_set_offset;
  method_get_offset;
  method_set_flip_h;
  method_is_flipped_h;
  method_set_flip_v;
  method_is_flipped_v;
  method_set_frame;
  method_get_frame;
  method_set_frame_progress;
  method_get_frame_progress;
  method_set_frame_and_progress;
  method_set_speed_scale;
  method_get_speed_scale;
  method_get_playing_speed;
}
export class AnimatedSprite2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatedSprite2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_sprite_frames() {
    if (!this.#_bindings.method_set_sprite_frames) {
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_centered() {
    if (!this.#_bindings.method_set_centered) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("set_centered");
      this.#_bindings.method_set_centered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_centered() {
    if (!this.#_bindings.method_is_centered) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("is_centered");
      this.#_bindings.method_is_centered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_offset() {
    if (!this.#_bindings.method_set_offset) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("set_offset");
      this.#_bindings.method_set_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_offset() {
    if (!this.#_bindings.method_get_offset) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("get_offset");
      this.#_bindings.method_get_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_flip_h() {
    if (!this.#_bindings.method_set_flip_h) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("set_flip_h");
      this.#_bindings.method_set_flip_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_h() {
    if (!this.#_bindings.method_is_flipped_h) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("is_flipped_h");
      this.#_bindings.method_is_flipped_h = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_flip_v() {
    if (!this.#_bindings.method_set_flip_v) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("set_flip_v");
      this.#_bindings.method_set_flip_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_flipped_v() {
    if (!this.#_bindings.method_is_flipped_v) {
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("is_flipped_v");
      this.#_bindings.method_is_flipped_v = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_frame() {
    if (!this.#_bindings.method_set_frame) {
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
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
      let classname = new StringName("AnimatedSprite2D");
      let methodname = new StringName("get_playing_speed");
      this.#_bindings.method_get_playing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_sprite_frames(_sprite_frames) {
    AnimatedSprite2D.init_method_set_sprite_frames();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_sprite_frames,
      this._owner,
      _sprite_frames
    );
    
  }
  get_sprite_frames() {
    AnimatedSprite2D.init_method_get_sprite_frames();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_sprite_frames,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_animation(_name) {
    AnimatedSprite2D.init_method_set_animation();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_animation,
      this._owner,
      _name
    );
    
  }
  get_animation() {
    AnimatedSprite2D.init_method_get_animation();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_animation,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_autoplay(_name) {
    AnimatedSprite2D.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_autoplay,
      this._owner,
      _name
    );
    
  }
  get_autoplay() {
    AnimatedSprite2D.init_method_get_autoplay();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_autoplay,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_playing() {
    AnimatedSprite2D.init_method_is_playing();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  play(_name, _custom_speed, _from_end) {
    AnimatedSprite2D.init_method_play();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_play,
      this._owner,
      _name, _custom_speed, _from_end
    );
    
  }
  play_backwards(_name) {
    AnimatedSprite2D.init_method_play_backwards();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_play_backwards,
      this._owner,
      _name
    );
    
  }
  pause() {
    AnimatedSprite2D.init_method_pause();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_pause,
      this._owner,
      
    );
    
  }
  stop() {
    AnimatedSprite2D.init_method_stop();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_centered(_centered) {
    AnimatedSprite2D.init_method_set_centered();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_centered,
      this._owner,
      _centered
    );
    
  }
  is_centered() {
    AnimatedSprite2D.init_method_is_centered();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_is_centered,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_offset(_offset) {
    AnimatedSprite2D.init_method_set_offset();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_offset,
      this._owner,
      _offset
    );
    
  }
  get_offset() {
    AnimatedSprite2D.init_method_get_offset();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_offset,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_flip_h(_flip_h) {
    AnimatedSprite2D.init_method_set_flip_h();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_flip_h,
      this._owner,
      _flip_h
    );
    
  }
  is_flipped_h() {
    AnimatedSprite2D.init_method_is_flipped_h();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_is_flipped_h,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_flip_v(_flip_v) {
    AnimatedSprite2D.init_method_set_flip_v();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_flip_v,
      this._owner,
      _flip_v
    );
    
  }
  is_flipped_v() {
    AnimatedSprite2D.init_method_is_flipped_v();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_is_flipped_v,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_frame(_frame) {
    AnimatedSprite2D.init_method_set_frame();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_frame,
      this._owner,
      _frame
    );
    
  }
  get_frame() {
    AnimatedSprite2D.init_method_get_frame();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_frame_progress(_progress) {
    AnimatedSprite2D.init_method_set_frame_progress();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_frame_progress,
      this._owner,
      _progress
    );
    
  }
  get_frame_progress() {
    AnimatedSprite2D.init_method_get_frame_progress();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_frame_progress,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_frame_and_progress(_frame, _progress) {
    AnimatedSprite2D.init_method_set_frame_and_progress();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_frame_and_progress,
      this._owner,
      _frame, _progress
    );
    
  }
  set_speed_scale(_speed_scale) {
    AnimatedSprite2D.init_method_set_speed_scale();
    return _call_native_mb_no_ret(
      AnimatedSprite2D.#_bindings.method_set_speed_scale,
      this._owner,
      _speed_scale
    );
    
  }
  get_speed_scale() {
    AnimatedSprite2D.init_method_get_speed_scale();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_playing_speed() {
    AnimatedSprite2D.init_method_get_playing_speed();
    return _call_native_mb_ret(
      AnimatedSprite2D.#_bindings.method_get_playing_speed,
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
get centered () {
  return this.is_centered();
}
set centered (new_value) {
  this.set_centered(new_value);
}
get offset () {
  return this.get_offset();
}
set offset (new_value) {
  this.set_offset(new_value);
}
get flip_h () {
  return this.is_flipped_h();
}
set flip_h (new_value) {
  this.set_flip_h(new_value);
}
get flip_v () {
  return this.is_flipped_v();
}
set flip_v (new_value) {
  this.set_flip_v(new_value);
}

}