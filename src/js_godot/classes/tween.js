import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Variant } from 'src/js_godot/variant/variant'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { Callable } from 'src/js_godot/variant/callable'
class _MethodBindings {
    method_tween_property;
    method_tween_interval;
    method_tween_callback;
    method_tween_method;
    method_custom_step;
    method_stop;
    method_pause;
    method_play;
    method_kill;
    method_get_total_elapsed_time;
    method_is_running;
    method_is_valid;
    method_bind_node;
    method_set_process_mode;
    method_set_pause_mode;
    method_set_parallel;
    method_set_loops;
    method_get_loops_left;
    method_set_speed_scale;
    method_set_trans;
    method_set_ease;
    method_parallel;
    method_chain;
    method_interpolate_value;
}


export class Tween extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Tween");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_property");
      this._bindings.method_tween_property = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4049770449
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_interval");
      this._bindings.method_tween_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        413360199
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_callback");
      this._bindings.method_tween_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1540176488
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_method");
      this._bindings.method_tween_method = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2337877153
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("custom_step");
      this._bindings.method_custom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        330693286
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("pause");
      this._bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("play");
      this._bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("kill");
      this._bindings.method_kill = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("get_total_elapsed_time");
      this._bindings.method_get_total_elapsed_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("is_running");
      this._bindings.method_is_running = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("is_valid");
      this._bindings.method_is_valid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("bind_node");
      this._bindings.method_bind_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2946786331
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_process_mode");
      this._bindings.method_set_process_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        855258840
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_pause_mode");
      this._bindings.method_set_pause_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3363368837
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_parallel");
      this._bindings.method_set_parallel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1942052223
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_loops");
      this._bindings.method_set_loops = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2670836414
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("get_loops_left");
      this._bindings.method_get_loops_left = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3961971106
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_trans");
      this._bindings.method_set_trans = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3965963875
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_ease");
      this._bindings.method_set_ease = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1208117252
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("parallel");
      this._bindings.method_parallel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3426978995
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("chain");
      this._bindings.method_chain = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3426978995
      );
    }
    {
      let classname = new StringName("Tween");
      let methodname = new StringName("interpolate_value");
      this._bindings.method_interpolate_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3452526450
      );
    }
  }
  tween_property(_object, _property, _final_val, _duration) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tween_property,
      this._owner,
			Variant.INT,
      _object, _property, _final_val, _duration
    );
  }
  tween_interval(_time) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tween_interval,
      this._owner,
			Variant.INT,
      _time
    );
  }
  tween_callback(_callback) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tween_callback,
      this._owner,
			Variant.INT,
      _callback
    );
  }
  tween_method(_method, _from, _to, _duration) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tween_method,
      this._owner,
			Variant.INT,
      _method, _from, _to, _duration
    );
  }
  custom_step(_delta) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_custom_step,
      this._owner,
			Variant.Type.BOOL,
      _delta
    );
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
  }
  pause() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pause,
      this._owner,
      
    );
  }
  play() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_play,
      this._owner,
      
    );
  }
  kill() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_kill,
      this._owner,
      
    );
  }
  get_total_elapsed_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_total_elapsed_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  is_running() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_running,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_valid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_valid,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  bind_node(_node) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_bind_node,
      this._owner,
			Variant.INT,
      _node
    );
  }
  set_process_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_process_mode,
      this._owner,
			Variant.INT,
      _mode
    );
  }
  set_pause_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_pause_mode,
      this._owner,
			Variant.INT,
      _mode
    );
  }
  set_parallel(_parallel) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_parallel,
      this._owner,
			Variant.INT,
      _parallel
    );
  }
  set_loops(_loops) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_loops,
      this._owner,
			Variant.INT,
      _loops
    );
  }
  get_loops_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_loops_left,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_speed_scale(_speed) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_speed_scale,
      this._owner,
			Variant.INT,
      _speed
    );
  }
  set_trans(_trans) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_trans,
      this._owner,
			Variant.INT,
      _trans
    );
  }
  set_ease(_ease) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_ease,
      this._owner,
			Variant.INT,
      _ease
    );
  }
  parallel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_parallel,
      this._owner,
			Variant.INT,
      
    );
  }
  chain() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_chain,
      this._owner,
			Variant.INT,
      
    );
  }
  interpolate_value(_initial_value, _delta_value, _elapsed_time, _duration, _trans_type, _ease_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_interpolate_value,
      this._owner,
			Variant.Type.VARIANT
    ,
      _initial_value, _delta_value, _elapsed_time, _duration, _trans_type, _ease_type
    );
  }
  static TweenProcessMode = {
    TWEEN_PROCESS_PHYSICS: 0,
    TWEEN_PROCESS_IDLE: 1,
  }
  static TweenPauseMode = {
    TWEEN_PAUSE_BOUND: 0,
    TWEEN_PAUSE_STOP: 1,
    TWEEN_PAUSE_PROCESS: 2,
  }
  static TransitionType = {
    TRANS_LINEAR: 0,
    TRANS_SINE: 1,
    TRANS_QUINT: 2,
    TRANS_QUART: 3,
    TRANS_QUAD: 4,
    TRANS_EXPO: 5,
    TRANS_ELASTIC: 6,
    TRANS_CUBIC: 7,
    TRANS_CIRC: 8,
    TRANS_BOUNCE: 9,
    TRANS_BACK: 10,
    TRANS_SPRING: 11,
  }
  static EaseType = {
    EASE_IN: 0,
    EASE_OUT: 1,
    EASE_IN_OUT: 2,
    EASE_OUT_IN: 3,
  }
}