import * as internal from '__internal__';
import { Node } from '@js_godot/classes/node'
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
@GodotClass
export class Timer extends Node{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Timer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_wait_time() {
    if (!this._bindings.method_set_wait_time) {
      let classname = new StringName("Timer");
      let methodname = new StringName("set_wait_time");
      this._bindings.method_set_wait_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_wait_time() {
    if (!this._bindings.method_get_wait_time) {
      let classname = new StringName("Timer");
      let methodname = new StringName("get_wait_time");
      this._bindings.method_get_wait_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_one_shot() {
    if (!this._bindings.method_set_one_shot) {
      let classname = new StringName("Timer");
      let methodname = new StringName("set_one_shot");
      this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_one_shot() {
    if (!this._bindings.method_is_one_shot) {
      let classname = new StringName("Timer");
      let methodname = new StringName("is_one_shot");
      this._bindings.method_is_one_shot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_autostart() {
    if (!this._bindings.method_set_autostart) {
      let classname = new StringName("Timer");
      let methodname = new StringName("set_autostart");
      this._bindings.method_set_autostart = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_autostart() {
    if (!this._bindings.method_has_autostart) {
      let classname = new StringName("Timer");
      let methodname = new StringName("has_autostart");
      this._bindings.method_has_autostart = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_start() {
    if (!this._bindings.method_start) {
      let classname = new StringName("Timer");
      let methodname = new StringName("start");
      this._bindings.method_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1392008558
      );
    }
  }
  static init_method_stop() {
    if (!this._bindings.method_stop) {
      let classname = new StringName("Timer");
      let methodname = new StringName("stop");
      this._bindings.method_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_paused() {
    if (!this._bindings.method_set_paused) {
      let classname = new StringName("Timer");
      let methodname = new StringName("set_paused");
      this._bindings.method_set_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_paused() {
    if (!this._bindings.method_is_paused) {
      let classname = new StringName("Timer");
      let methodname = new StringName("is_paused");
      this._bindings.method_is_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_stopped() {
    if (!this._bindings.method_is_stopped) {
      let classname = new StringName("Timer");
      let methodname = new StringName("is_stopped");
      this._bindings.method_is_stopped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_time_left() {
    if (!this._bindings.method_get_time_left) {
      let classname = new StringName("Timer");
      let methodname = new StringName("get_time_left");
      this._bindings.method_get_time_left = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_timer_process_callback() {
    if (!this._bindings.method_set_timer_process_callback) {
      let classname = new StringName("Timer");
      let methodname = new StringName("set_timer_process_callback");
      this._bindings.method_set_timer_process_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3469495063
      );
    }
  }
  static init_method_get_timer_process_callback() {
    if (!this._bindings.method_get_timer_process_callback) {
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
    Timer.init_method_set_wait_time();
    return _call_native_mb_no_ret(
      Timer._bindings.method_set_wait_time,
      this._owner,
      _time_sec
    );
    
  }
  get_wait_time() {
    Timer.init_method_get_wait_time();
    return _call_native_mb_ret(
      Timer._bindings.method_get_wait_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_one_shot(_enable) {
    Timer.init_method_set_one_shot();
    return _call_native_mb_no_ret(
      Timer._bindings.method_set_one_shot,
      this._owner,
      _enable
    );
    
  }
  is_one_shot() {
    Timer.init_method_is_one_shot();
    return _call_native_mb_ret(
      Timer._bindings.method_is_one_shot,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_autostart(_enable) {
    Timer.init_method_set_autostart();
    return _call_native_mb_no_ret(
      Timer._bindings.method_set_autostart,
      this._owner,
      _enable
    );
    
  }
  has_autostart() {
    Timer.init_method_has_autostart();
    return _call_native_mb_ret(
      Timer._bindings.method_has_autostart,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  start(_time_sec) {
    Timer.init_method_start();
    return _call_native_mb_no_ret(
      Timer._bindings.method_start,
      this._owner,
      _time_sec
    );
    
  }
  stop() {
    Timer.init_method_stop();
    return _call_native_mb_no_ret(
      Timer._bindings.method_stop,
      this._owner,
      
    );
    
  }
  set_paused(_paused) {
    Timer.init_method_set_paused();
    return _call_native_mb_no_ret(
      Timer._bindings.method_set_paused,
      this._owner,
      _paused
    );
    
  }
  is_paused() {
    Timer.init_method_is_paused();
    return _call_native_mb_ret(
      Timer._bindings.method_is_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_stopped() {
    Timer.init_method_is_stopped();
    return _call_native_mb_ret(
      Timer._bindings.method_is_stopped,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_time_left() {
    Timer.init_method_get_time_left();
    return _call_native_mb_ret(
      Timer._bindings.method_get_time_left,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_timer_process_callback(_callback) {
    Timer.init_method_set_timer_process_callback();
    return _call_native_mb_no_ret(
      Timer._bindings.method_set_timer_process_callback,
      this._owner,
      _callback
    );
    
  }
  get_timer_process_callback() {
    Timer.init_method_get_timer_process_callback();
    return _call_native_mb_ret(
      Timer._bindings.method_get_timer_process_callback,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get process_callback () {
  return this.get_timer_process_callback();
}
set process_callback (new_value) {
  this.set_timer_process_callback(new_value);
}
get wait_time () {
  return this.get_wait_time();
}
set wait_time (new_value) {
  this.set_wait_time(new_value);
}
get one_shot () {
  return this.is_one_shot();
}
set one_shot (new_value) {
  this.set_one_shot(new_value);
}
get autostart () {
  return this.has_autostart();
}
set autostart (new_value) {
  this.set_autostart(new_value);
}
get paused () {
  return this.is_paused();
}
set paused (new_value) {
  this.set_paused(new_value);
}
get time_left () {
  return this.get_time_left();
}

  static TimerProcessCallback = {
    TIMER_PROCESS_PHYSICS: 0,
    TIMER_PROCESS_IDLE: 1,
  }
}