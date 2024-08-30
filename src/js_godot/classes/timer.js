import * as internal from '__internal__';
import { Node } from 'src/js_godot/classes/node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_wait_time;
    method_get_wait_time;
    method_set_one_shot;
    method_is_one_shot;
    method_set_autostart;
    method_has_autostart;
    method_start;
    method_stop;
    method_set_paused;
    method_is_paused;
    method_is_stopped;
    method_get_time_left;
    method_set_timer_process_callback;
    method_get_timer_process_callback;
}


export class Timer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Timer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("set_wait_time");
        this._bindings.method_set_wait_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("get_wait_time");
        this._bindings.method_get_wait_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("set_one_shot");
        this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("is_one_shot");
        this._bindings.method_is_one_shot = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("set_autostart");
        this._bindings.method_set_autostart = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("has_autostart");
        this._bindings.method_has_autostart = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("start");
        this._bindings.method_start = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1392008558
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("stop");
        this._bindings.method_stop = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("set_paused");
        this._bindings.method_set_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("is_paused");
        this._bindings.method_is_paused = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("is_stopped");
        this._bindings.method_is_stopped = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("get_time_left");
        this._bindings.method_get_time_left = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("set_timer_process_callback");
        this._bindings.method_set_timer_process_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3469495063
        );
      }
      {
        let classname = new StringName("Timer");
        let methodname = new StringName("get_timer_process_callback");
        this._bindings.method_get_timer_process_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2672570227
        );
      }
  }
  set_wait_time(_time_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wait_time,
      this._owner,
      _time_sec
    );
    
  }
  get_wait_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wait_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_one_shot(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_one_shot,
      this._owner,
      _enable
    );
    
  }
  is_one_shot() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_one_shot,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_autostart(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autostart,
      this._owner,
      _enable
    );
    
  }
  has_autostart() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_autostart,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  start(_time_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start,
      this._owner,
      _time_sec
    );
    
  }
  stop() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_paused(_paused) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_paused,
      this._owner,
      _paused
    );
    
  }
  is_paused() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_paused,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_stopped() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_stopped,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_time_left() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_time_left,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_timer_process_callback(_callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_timer_process_callback,
      this._owner,
      _callback
    );
    
  }
  get_timer_process_callback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_timer_process_callback,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static TimerProcessCallback = {
    TIMER_PROCESS_PHYSICS: 0,
    TIMER_PROCESS_IDLE: 1,
  }
}