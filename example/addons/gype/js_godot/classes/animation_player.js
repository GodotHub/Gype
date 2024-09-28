import * as internal from '__internal__';
import { AnimationMixer } from '@js_godot/classes/animation_mixer'
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
  method_animation_set_next;
  method_animation_get_next;
  method_set_blend_time;
  method_get_blend_time;
  method_set_default_blend_time;
  method_get_default_blend_time;
  method_set_auto_capture;
  method_is_auto_capture;
  method_set_auto_capture_duration;
  method_get_auto_capture_duration;
  method_set_auto_capture_transition_type;
  method_get_auto_capture_transition_type;
  method_set_auto_capture_ease_type;
  method_get_auto_capture_ease_type;
  method_play;
  method_play_backwards;
  method_play_with_capture;
  method_pause;
  method_stop;
  method_is_playing;
  method_set_current_animation;
  method_get_current_animation;
  method_set_assigned_animation;
  method_get_assigned_animation;
  method_queue;
  method_get_queue;
  method_clear_queue;
  method_set_speed_scale;
  method_get_speed_scale;
  method_get_playing_speed;
  method_set_autoplay;
  method_get_autoplay;
  method_set_movie_quit_on_finish_enabled;
  method_is_movie_quit_on_finish_enabled;
  method_get_current_animation_position;
  method_get_current_animation_length;
  method_seek;
  method_set_process_callback;
  method_get_process_callback;
  method_set_method_call_mode;
  method_get_method_call_mode;
  method_set_root;
  method_get_root;
}
@GodotClass
export class AnimationPlayer extends AnimationMixer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationPlayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_animation_set_next() {
    if (!this._bindings.method_animation_set_next) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("animation_set_next");
      this._bindings.method_animation_set_next = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3740211285
      );
    }
  }
  static init_method_animation_get_next() {
    if (!this._bindings.method_animation_get_next) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("animation_get_next");
      this._bindings.method_animation_get_next = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1965194235
      );
    }
  }
  static init_method_set_blend_time() {
    if (!this._bindings.method_set_blend_time) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_blend_time");
      this._bindings.method_set_blend_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3231131886
      );
    }
  }
  static init_method_get_blend_time() {
    if (!this._bindings.method_get_blend_time) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_blend_time");
      this._bindings.method_get_blend_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1958752504
      );
    }
  }
  static init_method_set_default_blend_time() {
    if (!this._bindings.method_set_default_blend_time) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_default_blend_time");
      this._bindings.method_set_default_blend_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_default_blend_time() {
    if (!this._bindings.method_get_default_blend_time) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_default_blend_time");
      this._bindings.method_get_default_blend_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_auto_capture() {
    if (!this._bindings.method_set_auto_capture) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture");
      this._bindings.method_set_auto_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_auto_capture() {
    if (!this._bindings.method_is_auto_capture) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_auto_capture");
      this._bindings.method_is_auto_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_capture_duration() {
    if (!this._bindings.method_set_auto_capture_duration) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_duration");
      this._bindings.method_set_auto_capture_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_auto_capture_duration() {
    if (!this._bindings.method_get_auto_capture_duration) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_duration");
      this._bindings.method_get_auto_capture_duration = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_auto_capture_transition_type() {
    if (!this._bindings.method_set_auto_capture_transition_type) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_transition_type");
      this._bindings.method_set_auto_capture_transition_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1058637742
      );
    }
  }
  static init_method_get_auto_capture_transition_type() {
    if (!this._bindings.method_get_auto_capture_transition_type) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_transition_type");
      this._bindings.method_get_auto_capture_transition_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3842314528
      );
    }
  }
  static init_method_set_auto_capture_ease_type() {
    if (!this._bindings.method_set_auto_capture_ease_type) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_ease_type");
      this._bindings.method_set_auto_capture_ease_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1208105857
      );
    }
  }
  static init_method_get_auto_capture_ease_type() {
    if (!this._bindings.method_get_auto_capture_ease_type) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_ease_type");
      this._bindings.method_get_auto_capture_ease_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        631880200
      );
    }
  }
  static init_method_play() {
    if (!this._bindings.method_play) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3697947785
      );
    }
  }
  static init_method_play_backwards() {
    if (!this._bindings.method_play_backwards) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play_backwards");
      this._bindings.method_play_backwards = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3890664824
      );
    }
  }
  static init_method_play_with_capture() {
    if (!this._bindings.method_play_with_capture) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play_with_capture");
      this._bindings.method_play_with_capture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3180464118
      );
    }
  }
  static init_method_pause() {
    if (!this._bindings.method_pause) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("pause");
      this._bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_stop() {
    if (!this._bindings.method_stop) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_is_playing() {
    if (!this._bindings.method_is_playing) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_current_animation() {
    if (!this._bindings.method_set_current_animation) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_current_animation");
      this._bindings.method_set_current_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_current_animation() {
    if (!this._bindings.method_get_current_animation) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation");
      this._bindings.method_get_current_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_assigned_animation() {
    if (!this._bindings.method_set_assigned_animation) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_assigned_animation");
      this._bindings.method_set_assigned_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_assigned_animation() {
    if (!this._bindings.method_get_assigned_animation) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_assigned_animation");
      this._bindings.method_get_assigned_animation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_queue() {
    if (!this._bindings.method_queue) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("queue");
      this._bindings.method_queue = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_queue() {
    if (!this._bindings.method_get_queue) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_queue");
      this._bindings.method_get_queue = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2981934095
      );
    }
  }
  static init_method_clear_queue() {
    if (!this._bindings.method_clear_queue) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("clear_queue");
      this._bindings.method_clear_queue = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_speed_scale() {
    if (!this._bindings.method_set_speed_scale) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_speed_scale() {
    if (!this._bindings.method_get_speed_scale) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_playing_speed() {
    if (!this._bindings.method_get_playing_speed) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_playing_speed");
      this._bindings.method_get_playing_speed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_autoplay() {
    if (!this._bindings.method_set_autoplay) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_autoplay");
      this._bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_autoplay() {
    if (!this._bindings.method_get_autoplay) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_autoplay");
      this._bindings.method_get_autoplay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_movie_quit_on_finish_enabled() {
    if (!this._bindings.method_set_movie_quit_on_finish_enabled) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_movie_quit_on_finish_enabled");
      this._bindings.method_set_movie_quit_on_finish_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_movie_quit_on_finish_enabled() {
    if (!this._bindings.method_is_movie_quit_on_finish_enabled) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_movie_quit_on_finish_enabled");
      this._bindings.method_is_movie_quit_on_finish_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_current_animation_position() {
    if (!this._bindings.method_get_current_animation_position) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation_position");
      this._bindings.method_get_current_animation_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_current_animation_length() {
    if (!this._bindings.method_get_current_animation_length) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation_length");
      this._bindings.method_get_current_animation_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_seek() {
    if (!this._bindings.method_seek) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1807872683
      );
    }
  }
  static init_method_set_process_callback() {
    if (!this._bindings.method_set_process_callback) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_process_callback");
      this._bindings.method_set_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1663839457
      );
    }
  }
  static init_method_get_process_callback() {
    if (!this._bindings.method_get_process_callback) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_process_callback");
      this._bindings.method_get_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4207496604
      );
    }
  }
  static init_method_set_method_call_mode() {
    if (!this._bindings.method_set_method_call_mode) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_method_call_mode");
      this._bindings.method_set_method_call_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3413514846
      );
    }
  }
  static init_method_get_method_call_mode() {
    if (!this._bindings.method_get_method_call_mode) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_method_call_mode");
      this._bindings.method_get_method_call_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3583380054
      );
    }
  }
  static init_method_set_root() {
    if (!this._bindings.method_set_root) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_root");
      this._bindings.method_set_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_root() {
    if (!this._bindings.method_get_root) {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_root");
      this._bindings.method_get_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }

  
  
  animation_set_next(_animation_from, _animation_to) {
    AnimationPlayer.init_method_animation_set_next();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_animation_set_next,
      this._owner,
      _animation_from, _animation_to
    );
    
  }
  animation_get_next(_animation_from) {
    AnimationPlayer.init_method_animation_get_next();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_animation_get_next,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _animation_from
    );
    
  }
  set_blend_time(_animation_from, _animation_to, _sec) {
    AnimationPlayer.init_method_set_blend_time();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_blend_time,
      this._owner,
      _animation_from, _animation_to, _sec
    );
    
  }
  get_blend_time(_animation_from, _animation_to) {
    AnimationPlayer.init_method_get_blend_time();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_blend_time,
      this._owner,
			Variant.Type.FLOAT,
    
      _animation_from, _animation_to
    );
    
  }
  set_default_blend_time(_sec) {
    AnimationPlayer.init_method_set_default_blend_time();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_default_blend_time,
      this._owner,
      _sec
    );
    
  }
  get_default_blend_time() {
    AnimationPlayer.init_method_get_default_blend_time();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_default_blend_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_auto_capture(_auto_capture) {
    AnimationPlayer.init_method_set_auto_capture();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_auto_capture,
      this._owner,
      _auto_capture
    );
    
  }
  is_auto_capture() {
    AnimationPlayer.init_method_is_auto_capture();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_is_auto_capture,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_capture_duration(_auto_capture_duration) {
    AnimationPlayer.init_method_set_auto_capture_duration();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_auto_capture_duration,
      this._owner,
      _auto_capture_duration
    );
    
  }
  get_auto_capture_duration() {
    AnimationPlayer.init_method_get_auto_capture_duration();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_auto_capture_duration,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_auto_capture_transition_type(_auto_capture_transition_type) {
    AnimationPlayer.init_method_set_auto_capture_transition_type();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_auto_capture_transition_type,
      this._owner,
      _auto_capture_transition_type
    );
    
  }
  get_auto_capture_transition_type() {
    AnimationPlayer.init_method_get_auto_capture_transition_type();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_auto_capture_transition_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_auto_capture_ease_type(_auto_capture_ease_type) {
    AnimationPlayer.init_method_set_auto_capture_ease_type();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_auto_capture_ease_type,
      this._owner,
      _auto_capture_ease_type
    );
    
  }
  get_auto_capture_ease_type() {
    AnimationPlayer.init_method_get_auto_capture_ease_type();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_auto_capture_ease_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  play(_name, _custom_blend, _custom_speed, _from_end) {
    AnimationPlayer.init_method_play();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_play,
      this._owner,
      _name, _custom_blend, _custom_speed, _from_end
    );
    
  }
  play_backwards(_name, _custom_blend) {
    AnimationPlayer.init_method_play_backwards();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_play_backwards,
      this._owner,
      _name, _custom_blend
    );
    
  }
  play_with_capture(_name, _duration, _custom_blend, _custom_speed, _from_end, _trans_type, _ease_type) {
    AnimationPlayer.init_method_play_with_capture();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_play_with_capture,
      this._owner,
      _name, _duration, _custom_blend, _custom_speed, _from_end, _trans_type, _ease_type
    );
    
  }
  pause() {
    AnimationPlayer.init_method_pause();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_pause,
      this._owner,
      
    );
    
  }
  stop(_keep_state) {
    AnimationPlayer.init_method_stop();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_stop,
      this._owner,
      _keep_state
    );
    
  }
  is_playing() {
    AnimationPlayer.init_method_is_playing();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_current_animation(_animation) {
    AnimationPlayer.init_method_set_current_animation();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_current_animation,
      this._owner,
      _animation
    );
    
  }
  get_current_animation() {
    AnimationPlayer.init_method_get_current_animation();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_current_animation,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_assigned_animation(_animation) {
    AnimationPlayer.init_method_set_assigned_animation();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_assigned_animation,
      this._owner,
      _animation
    );
    
  }
  get_assigned_animation() {
    AnimationPlayer.init_method_get_assigned_animation();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_assigned_animation,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  queue(_name) {
    AnimationPlayer.init_method_queue();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_queue,
      this._owner,
      _name
    );
    
  }
  get_queue() {
    AnimationPlayer.init_method_get_queue();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_queue,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      
    );
    
  }
  clear_queue() {
    AnimationPlayer.init_method_clear_queue();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_clear_queue,
      this._owner,
      
    );
    
  }
  set_speed_scale(_speed) {
    AnimationPlayer.init_method_set_speed_scale();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_speed_scale,
      this._owner,
      _speed
    );
    
  }
  get_speed_scale() {
    AnimationPlayer.init_method_get_speed_scale();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_playing_speed() {
    AnimationPlayer.init_method_get_playing_speed();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_playing_speed,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_autoplay(_name) {
    AnimationPlayer.init_method_set_autoplay();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_autoplay,
      this._owner,
      _name
    );
    
  }
  get_autoplay() {
    AnimationPlayer.init_method_get_autoplay();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_autoplay,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_movie_quit_on_finish_enabled(_enabled) {
    AnimationPlayer.init_method_set_movie_quit_on_finish_enabled();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_movie_quit_on_finish_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_movie_quit_on_finish_enabled() {
    AnimationPlayer.init_method_is_movie_quit_on_finish_enabled();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_is_movie_quit_on_finish_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_current_animation_position() {
    AnimationPlayer.init_method_get_current_animation_position();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_current_animation_position,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_current_animation_length() {
    AnimationPlayer.init_method_get_current_animation_length();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_current_animation_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  seek(_seconds, _update, _update_only) {
    AnimationPlayer.init_method_seek();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_seek,
      this._owner,
      _seconds, _update, _update_only
    );
    
  }
  set_process_callback(_mode) {
    AnimationPlayer.init_method_set_process_callback();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_process_callback,
      this._owner,
      _mode
    );
    
  }
  get_process_callback() {
    AnimationPlayer.init_method_get_process_callback();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_process_callback,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_method_call_mode(_mode) {
    AnimationPlayer.init_method_set_method_call_mode();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_method_call_mode,
      this._owner,
      _mode
    );
    
  }
  get_method_call_mode() {
    AnimationPlayer.init_method_get_method_call_mode();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_method_call_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_root(_path) {
    AnimationPlayer.init_method_set_root();
    return _call_native_mb_no_ret(
      AnimationPlayer._bindings.method_set_root,
      this._owner,
      _path
    );
    
  }
  get_root() {
    AnimationPlayer.init_method_get_root();
    return _call_native_mb_ret(
      AnimationPlayer._bindings.method_get_root,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  
get current_animation () {
  return this.get_current_animation();
}
set current_animation (new_value) {
  this.set_current_animation(new_value);
}
get assigned_animation () {
  return this.get_assigned_animation();
}
set assigned_animation (new_value) {
  this.set_assigned_animation(new_value);
}
get autoplay () {
  return this.get_autoplay();
}
set autoplay (new_value) {
  this.set_autoplay(new_value);
}
get current_animation_length () {
  return this.get_current_animation_length();
}
get current_animation_position () {
  return this.get_current_animation_position();
}
get playback_auto_capture () {
  return this.is_auto_capture();
}
set playback_auto_capture (new_value) {
  this.set_auto_capture(new_value);
}
get playback_auto_capture_duration () {
  return this.get_auto_capture_duration();
}
set playback_auto_capture_duration (new_value) {
  this.set_auto_capture_duration(new_value);
}
get playback_auto_capture_transition_type () {
  return this.get_auto_capture_transition_type();
}
set playback_auto_capture_transition_type (new_value) {
  this.set_auto_capture_transition_type(new_value);
}
get playback_auto_capture_ease_type () {
  return this.get_auto_capture_ease_type();
}
set playback_auto_capture_ease_type (new_value) {
  this.set_auto_capture_ease_type(new_value);
}
get playback_default_blend_time () {
  return this.get_default_blend_time();
}
set playback_default_blend_time (new_value) {
  this.set_default_blend_time(new_value);
}
get speed_scale () {
  return this.get_speed_scale();
}
set speed_scale (new_value) {
  this.set_speed_scale(new_value);
}
get movie_quit_on_finish () {
  return this.is_movie_quit_on_finish_enabled();
}
set movie_quit_on_finish (new_value) {
  this.set_movie_quit_on_finish_enabled(new_value);
}

  static AnimationProcessCallback = {
    ANIMATION_PROCESS_PHYSICS: 0,
    ANIMATION_PROCESS_IDLE: 1,
    ANIMATION_PROCESS_MANUAL: 2,
  }
  static AnimationMethodCallMode = {
    ANIMATION_METHOD_CALL_DEFERRED: 0,
    ANIMATION_METHOD_CALL_IMMEDIATE: 1,
  }
}