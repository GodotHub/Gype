import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { AnimationMixer } from 'src/js_godot/classesanimation_mixer'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
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


export class AnimationPlayer extends AnimationMixer{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationPlayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("animation_set_next");
      this._bindings.method_animation_set_next = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3740211285
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("animation_get_next");
      this._bindings.method_animation_get_next = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1965194235
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_blend_time");
      this._bindings.method_set_blend_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3231131886
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_blend_time");
      this._bindings.method_get_blend_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1958752504
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_default_blend_time");
      this._bindings.method_set_default_blend_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_default_blend_time");
      this._bindings.method_get_default_blend_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture");
      this._bindings.method_set_auto_capture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_auto_capture");
      this._bindings.method_is_auto_capture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_duration");
      this._bindings.method_set_auto_capture_duration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_duration");
      this._bindings.method_get_auto_capture_duration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_transition_type");
      this._bindings.method_set_auto_capture_transition_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1058637742
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_transition_type");
      this._bindings.method_get_auto_capture_transition_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3842314528
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_auto_capture_ease_type");
      this._bindings.method_set_auto_capture_ease_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1208105857
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_auto_capture_ease_type");
      this._bindings.method_get_auto_capture_ease_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        631880200
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3697947785
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play_backwards");
      this._bindings.method_play_backwards = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3890664824
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("play_with_capture");
      this._bindings.method_play_with_capture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3180464118
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("pause");
      this._bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        107499316
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_playing");
      this._bindings.method_is_playing = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_current_animation");
      this._bindings.method_set_current_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation");
      this._bindings.method_get_current_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_assigned_animation");
      this._bindings.method_set_assigned_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_assigned_animation");
      this._bindings.method_get_assigned_animation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("queue");
      this._bindings.method_queue = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_queue");
      this._bindings.method_get_queue = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2981934095
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("clear_queue");
      this._bindings.method_clear_queue = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_playing_speed");
      this._bindings.method_get_playing_speed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_autoplay");
      this._bindings.method_set_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_autoplay");
      this._bindings.method_get_autoplay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_movie_quit_on_finish_enabled");
      this._bindings.method_set_movie_quit_on_finish_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("is_movie_quit_on_finish_enabled");
      this._bindings.method_is_movie_quit_on_finish_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation_position");
      this._bindings.method_get_current_animation_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_current_animation_length");
      this._bindings.method_get_current_animation_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("seek");
      this._bindings.method_seek = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1807872683
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_process_callback");
      this._bindings.method_set_process_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1663839457
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_process_callback");
      this._bindings.method_get_process_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4207496604
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_method_call_mode");
      this._bindings.method_set_method_call_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3413514846
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("get_method_call_mode");
      this._bindings.method_get_method_call_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3583380054
      );
    }
    {
      let classname = new StringName("AnimationPlayer");
      let methodname = new StringName("set_root");
      this._bindings.method_set_root = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_animation_set_next,
      this._owner,
      _animation_from, _animation_to
    );
  }
  animation_get_next(_animation_from) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_animation_get_next,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _animation_from
    );
  }
  set_blend_time(_animation_from, _animation_to, _sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_time,
      this._owner,
      _animation_from, _animation_to, _sec
    );
  }
  get_blend_time(_animation_from, _animation_to) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_time,
      this._owner,
			Variant.Type.FLOAT,
      _animation_from, _animation_to
    );
  }
  set_default_blend_time(_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_default_blend_time,
      this._owner,
      _sec
    );
  }
  get_default_blend_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_default_blend_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_auto_capture(_auto_capture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_capture,
      this._owner,
      _auto_capture
    );
  }
  is_auto_capture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_auto_capture,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_auto_capture_duration(_auto_capture_duration) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_capture_duration,
      this._owner,
      _auto_capture_duration
    );
  }
  get_auto_capture_duration() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_capture_duration,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_auto_capture_transition_type(_auto_capture_transition_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_capture_transition_type,
      this._owner,
      _auto_capture_transition_type
    );
  }
  get_auto_capture_transition_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_capture_transition_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_auto_capture_ease_type(_auto_capture_ease_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_capture_ease_type,
      this._owner,
      _auto_capture_ease_type
    );
  }
  get_auto_capture_ease_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_capture_ease_type,
      this._owner,
			Variant.INT,
      
    );
  }
  play(_name, _custom_blend, _custom_speed, _from_end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play,
      this._owner,
      _name, _custom_blend, _custom_speed, _from_end
    );
  }
  play_backwards(_name, _custom_blend) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play_backwards,
      this._owner,
      _name, _custom_blend
    );
  }
  play_with_capture(_name, _duration, _custom_blend, _custom_speed, _from_end, _trans_type, _ease_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play_with_capture,
      this._owner,
      _name, _duration, _custom_blend, _custom_speed, _from_end, _trans_type, _ease_type
    );
  }
  pause() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pause,
      this._owner,
      
    );
  }
  stop(_keep_state) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      _keep_state
    );
  }
  is_playing() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_playing,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_current_animation(_animation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_current_animation,
      this._owner,
      _animation
    );
  }
  get_current_animation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_animation,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  set_assigned_animation(_animation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_assigned_animation,
      this._owner,
      _animation
    );
  }
  get_assigned_animation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_assigned_animation,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  queue(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_queue,
      this._owner,
      _name
    );
  }
  get_queue() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_queue,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  clear_queue() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_queue,
      this._owner,
      
    );
  }
  set_speed_scale(_speed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_speed_scale,
      this._owner,
      _speed
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
  set_movie_quit_on_finish_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_movie_quit_on_finish_enabled,
      this._owner,
      _enabled
    );
  }
  is_movie_quit_on_finish_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_movie_quit_on_finish_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_current_animation_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_animation_position,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_current_animation_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_current_animation_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  seek(_seconds, _update, _update_only) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_seek,
      this._owner,
      _seconds, _update, _update_only
    );
  }
  set_process_callback(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_process_callback,
      this._owner,
      _mode
    );
  }
  get_process_callback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_process_callback,
      this._owner,
			Variant.INT,
      
    );
  }
  set_method_call_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_method_call_mode,
      this._owner,
      _mode
    );
  }
  get_method_call_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_method_call_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_root(_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_root,
      this._owner,
      _path
    );
  }
  get_root() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_root,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
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