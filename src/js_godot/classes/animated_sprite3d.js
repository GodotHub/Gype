import * as internal from '__internal__';
import { SpriteBase3D } from 'src/js_godot/classessprite_base3d'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatedSprite3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_sprite_frames");
      this._bindings.method_set_sprite_frames = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        905781144
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_sprite_frames");
      this._bindings.method_get_sprite_frames = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3804851214
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_animation");
      this._bindings.method_set_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_animation");
      this._bindings.method_get_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_autoplay");
      this._bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_autoplay");
      this._bindings.method_get_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2372066587
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("play_backwards");
      this._bindings.method_play_backwards = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1421762485
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("pause");
      this._bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame");
      this._bindings.method_set_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_frame");
      this._bindings.method_get_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame_progress");
      this._bindings.method_set_frame_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_frame_progress");
      this._bindings.method_get_frame_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_frame_and_progress");
      this._bindings.method_set_frame_and_progress = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimatedSprite3D");
      let methodname = new StringName("get_playing_speed");
      this._bindings.method_get_playing_speed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_sprite_frames(_sprite_frames) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sprite_frames,
      this._owner,
      _sprite_frames
    );
  }
  get_sprite_frames() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sprite_frames,
      this._owner,
			Variant.INT,
      
    );
  }
  set_animation(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_animation,
      this._owner,
      _name
    );
  }
  get_animation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_animation,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_autoplay(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autoplay,
      this._owner,
      _name
    );
  }
  get_autoplay() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_autoplay,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  play(_name, _custom_speed, _from_end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play,
      this._owner,
      _name, _custom_speed, _from_end
    );
  }
  play_backwards(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play_backwards,
      this._owner,
      _name
    );
  }
  pause() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pause,
      this._owner,
      
    );
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
  }
  set_frame(_frame) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame,
      this._owner,
      _frame
    );
  }
  get_frame() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_frame_progress(_progress) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame_progress,
      this._owner,
      _progress
    );
  }
  get_frame_progress() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_frame_progress,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_frame_and_progress(_frame, _progress) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_frame_and_progress,
      this._owner,
      _frame, _progress
    );
  }
  set_speed_scale(_speed_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_speed_scale,
      this._owner,
      _speed_scale
    );
  }
  get_speed_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_playing_speed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_playing_speed,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}