import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Tween");
    } else {
      super(godot_object);
    }
  }
  static init_method_tween_property() {
    if (!this.#_bindings.method_tween_property) {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_property");
      this.#_bindings.method_tween_property = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4049770449
      );
    }
  }
  static init_method_tween_interval() {
    if (!this.#_bindings.method_tween_interval) {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_interval");
      this.#_bindings.method_tween_interval = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        413360199
      );
    }
  }
  static init_method_tween_callback() {
    if (!this.#_bindings.method_tween_callback) {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_callback");
      this.#_bindings.method_tween_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1540176488
      );
    }
  }
  static init_method_tween_method() {
    if (!this.#_bindings.method_tween_method) {
      let classname = new StringName("Tween");
      let methodname = new StringName("tween_method");
      this.#_bindings.method_tween_method = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2337877153
      );
    }
  }
  static init_method_custom_step() {
    if (!this.#_bindings.method_custom_step) {
      let classname = new StringName("Tween");
      let methodname = new StringName("custom_step");
      this.#_bindings.method_custom_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        330693286
      );
    }
  }
  static init_method_stop() {
    if (!this.#_bindings.method_stop) {
      let classname = new StringName("Tween");
      let methodname = new StringName("stop");
      this.#_bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_pause() {
    if (!this.#_bindings.method_pause) {
      let classname = new StringName("Tween");
      let methodname = new StringName("pause");
      this.#_bindings.method_pause = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_play() {
    if (!this.#_bindings.method_play) {
      let classname = new StringName("Tween");
      let methodname = new StringName("play");
      this.#_bindings.method_play = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_kill() {
    if (!this.#_bindings.method_kill) {
      let classname = new StringName("Tween");
      let methodname = new StringName("kill");
      this.#_bindings.method_kill = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_total_elapsed_time() {
    if (!this.#_bindings.method_get_total_elapsed_time) {
      let classname = new StringName("Tween");
      let methodname = new StringName("get_total_elapsed_time");
      this.#_bindings.method_get_total_elapsed_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_is_running() {
    if (!this.#_bindings.method_is_running) {
      let classname = new StringName("Tween");
      let methodname = new StringName("is_running");
      this.#_bindings.method_is_running = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_valid() {
    if (!this.#_bindings.method_is_valid) {
      let classname = new StringName("Tween");
      let methodname = new StringName("is_valid");
      this.#_bindings.method_is_valid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_bind_node() {
    if (!this.#_bindings.method_bind_node) {
      let classname = new StringName("Tween");
      let methodname = new StringName("bind_node");
      this.#_bindings.method_bind_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2946786331
      );
    }
  }
  static init_method_set_process_mode() {
    if (!this.#_bindings.method_set_process_mode) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_process_mode");
      this.#_bindings.method_set_process_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        855258840
      );
    }
  }
  static init_method_set_pause_mode() {
    if (!this.#_bindings.method_set_pause_mode) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_pause_mode");
      this.#_bindings.method_set_pause_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3363368837
      );
    }
  }
  static init_method_set_parallel() {
    if (!this.#_bindings.method_set_parallel) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_parallel");
      this.#_bindings.method_set_parallel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1942052223
      );
    }
  }
  static init_method_set_loops() {
    if (!this.#_bindings.method_set_loops) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_loops");
      this.#_bindings.method_set_loops = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2670836414
      );
    }
  }
  static init_method_get_loops_left() {
    if (!this.#_bindings.method_get_loops_left) {
      let classname = new StringName("Tween");
      let methodname = new StringName("get_loops_left");
      this.#_bindings.method_get_loops_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_speed_scale() {
    if (!this.#_bindings.method_set_speed_scale) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_speed_scale");
      this.#_bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3961971106
      );
    }
  }
  static init_method_set_trans() {
    if (!this.#_bindings.method_set_trans) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_trans");
      this.#_bindings.method_set_trans = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3965963875
      );
    }
  }
  static init_method_set_ease() {
    if (!this.#_bindings.method_set_ease) {
      let classname = new StringName("Tween");
      let methodname = new StringName("set_ease");
      this.#_bindings.method_set_ease = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1208117252
      );
    }
  }
  static init_method_parallel() {
    if (!this.#_bindings.method_parallel) {
      let classname = new StringName("Tween");
      let methodname = new StringName("parallel");
      this.#_bindings.method_parallel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3426978995
      );
    }
  }
  static init_method_chain() {
    if (!this.#_bindings.method_chain) {
      let classname = new StringName("Tween");
      let methodname = new StringName("chain");
      this.#_bindings.method_chain = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3426978995
      );
    }
  }
  static init_method_interpolate_value() {
    if (!this.#_bindings.method_interpolate_value) {
      let classname = new StringName("Tween");
      let methodname = new StringName("interpolate_value");
      this.#_bindings.method_interpolate_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3452526450
      );
    }
  }

  
  
  tween_property(_object, _property, _final_val, _duration) {
    Tween.init_method_tween_property();
    return _call_native_mb_ret(
      Tween.#_bindings.method_tween_property,
      this._owner,
			Variant.Type.OBJECT,
      _object, _property, _final_val, _duration
    );
    
  }
  tween_interval(_time) {
    Tween.init_method_tween_interval();
    return _call_native_mb_ret(
      Tween.#_bindings.method_tween_interval,
      this._owner,
			Variant.Type.OBJECT,
      _time
    );
    
  }
  tween_callback(_callback) {
    Tween.init_method_tween_callback();
    return _call_native_mb_ret(
      Tween.#_bindings.method_tween_callback,
      this._owner,
			Variant.Type.OBJECT,
      _callback
    );
    
  }
  tween_method(_method, _from, _to, _duration) {
    Tween.init_method_tween_method();
    return _call_native_mb_ret(
      Tween.#_bindings.method_tween_method,
      this._owner,
			Variant.Type.OBJECT,
      _method, _from, _to, _duration
    );
    
  }
  custom_step(_delta) {
    Tween.init_method_custom_step();
    return _call_native_mb_ret(
      Tween.#_bindings.method_custom_step,
      this._owner,
			Variant.Type.BOOL,
    
      _delta
    );
    
  }
  stop() {
    Tween.init_method_stop();
    return _call_native_mb_no_ret(
      Tween.#_bindings.method_stop,
      this._owner,
      
    );
    
  }
  pause() {
    Tween.init_method_pause();
    return _call_native_mb_no_ret(
      Tween.#_bindings.method_pause,
      this._owner,
      
    );
    
  }
  play() {
    Tween.init_method_play();
    return _call_native_mb_no_ret(
      Tween.#_bindings.method_play,
      this._owner,
      
    );
    
  }
  kill() {
    Tween.init_method_kill();
    return _call_native_mb_no_ret(
      Tween.#_bindings.method_kill,
      this._owner,
      
    );
    
  }
  get_total_elapsed_time() {
    Tween.init_method_get_total_elapsed_time();
    return _call_native_mb_ret(
      Tween.#_bindings.method_get_total_elapsed_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  is_running() {
    Tween.init_method_is_running();
    return _call_native_mb_ret(
      Tween.#_bindings.method_is_running,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_valid() {
    Tween.init_method_is_valid();
    return _call_native_mb_ret(
      Tween.#_bindings.method_is_valid,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  bind_node(_node) {
    Tween.init_method_bind_node();
    return _call_native_mb_ret(
      Tween.#_bindings.method_bind_node,
      this._owner,
			Variant.Type.OBJECT,
      _node
    );
    
  }
  set_process_mode(_mode) {
    Tween.init_method_set_process_mode();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_process_mode,
      this._owner,
			Variant.Type.OBJECT,
      _mode
    );
    
  }
  set_pause_mode(_mode) {
    Tween.init_method_set_pause_mode();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_pause_mode,
      this._owner,
			Variant.Type.OBJECT,
      _mode
    );
    
  }
  set_parallel(_parallel) {
    Tween.init_method_set_parallel();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_parallel,
      this._owner,
			Variant.Type.OBJECT,
      _parallel
    );
    
  }
  set_loops(_loops) {
    Tween.init_method_set_loops();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_loops,
      this._owner,
			Variant.Type.OBJECT,
      _loops
    );
    
  }
  get_loops_left() {
    Tween.init_method_get_loops_left();
    return _call_native_mb_ret(
      Tween.#_bindings.method_get_loops_left,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_speed_scale(_speed) {
    Tween.init_method_set_speed_scale();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_speed_scale,
      this._owner,
			Variant.Type.OBJECT,
      _speed
    );
    
  }
  set_trans(_trans) {
    Tween.init_method_set_trans();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_trans,
      this._owner,
			Variant.Type.OBJECT,
      _trans
    );
    
  }
  set_ease(_ease) {
    Tween.init_method_set_ease();
    return _call_native_mb_ret(
      Tween.#_bindings.method_set_ease,
      this._owner,
			Variant.Type.OBJECT,
      _ease
    );
    
  }
  parallel() {
    Tween.init_method_parallel();
    return _call_native_mb_ret(
      Tween.#_bindings.method_parallel,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  chain() {
    Tween.init_method_chain();
    return _call_native_mb_ret(
      Tween.#_bindings.method_chain,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  interpolate_value(_initial_value, _delta_value, _elapsed_time, _duration, _trans_type, _ease_type) {
    Tween.init_method_interpolate_value();
    return _call_native_mb_ret(
      Tween.#_bindings.method_interpolate_value,
      this._owner,
			Variant.Type.VARIANT,
    
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