import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { AnimationNodeSync } from '@js_godot/classes/animation_node_sync'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_fadein_time;
  method_get_fadein_time;
  method_set_fadein_curve;
  method_get_fadein_curve;
  method_set_fadeout_time;
  method_get_fadeout_time;
  method_set_fadeout_curve;
  method_get_fadeout_curve;
  method_set_break_loop_at_end;
  method_is_loop_broken_at_end;
  method_set_autorestart;
  method_has_autorestart;
  method_set_autorestart_delay;
  method_get_autorestart_delay;
  method_set_autorestart_random_delay;
  method_get_autorestart_random_delay;
  method_set_mix_mode;
  method_get_mix_mode;
}
export class AnimationNodeOneShot extends AnimationNodeSync{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeOneShot");
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
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_fadein_time");
      this._bindings.method_set_fadein_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_fadein_time");
      this._bindings.method_get_fadein_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_fadein_curve");
      this._bindings.method_set_fadein_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_fadein_curve");
      this._bindings.method_get_fadein_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_fadeout_time");
      this._bindings.method_set_fadeout_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_fadeout_time");
      this._bindings.method_get_fadeout_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_fadeout_curve");
      this._bindings.method_set_fadeout_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_fadeout_curve");
      this._bindings.method_get_fadeout_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_break_loop_at_end");
      this._bindings.method_set_break_loop_at_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("is_loop_broken_at_end");
      this._bindings.method_is_loop_broken_at_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_autorestart");
      this._bindings.method_set_autorestart = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("has_autorestart");
      this._bindings.method_has_autorestart = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_autorestart_delay");
      this._bindings.method_set_autorestart_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_autorestart_delay");
      this._bindings.method_get_autorestart_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_autorestart_random_delay");
      this._bindings.method_set_autorestart_random_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_autorestart_random_delay");
      this._bindings.method_get_autorestart_random_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("set_mix_mode");
      this._bindings.method_set_mix_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1018899799
      );
    }
    {
      let classname = new StringName("AnimationNodeOneShot");
      let methodname = new StringName("get_mix_mode");
      this._bindings.method_get_mix_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3076550526
      );
    }
  }
  
  set_fadein_time(_time) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_fadein_time,
      this._owner,
      _time
    );
    
  }
  get_fadein_time() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_fadein_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_fadein_curve(_curve) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_fadein_curve,
      this._owner,
      _curve
    );
    
  }
  get_fadein_curve() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_fadein_curve,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_fadeout_time(_time) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_fadeout_time,
      this._owner,
      _time
    );
    
  }
  get_fadeout_time() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_fadeout_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_fadeout_curve(_curve) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_fadeout_curve,
      this._owner,
      _curve
    );
    
  }
  get_fadeout_curve() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_fadeout_curve,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_break_loop_at_end(_enable) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_break_loop_at_end,
      this._owner,
      _enable
    );
    
  }
  is_loop_broken_at_end() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_is_loop_broken_at_end,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_autorestart(_active) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_autorestart,
      this._owner,
      _active
    );
    
  }
  has_autorestart() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_has_autorestart,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_autorestart_delay(_time) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_autorestart_delay,
      this._owner,
      _time
    );
    
  }
  get_autorestart_delay() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_autorestart_delay,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_autorestart_random_delay(_time) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_autorestart_random_delay,
      this._owner,
      _time
    );
    
  }
  get_autorestart_random_delay() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_autorestart_random_delay,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_mix_mode(_mode) {
    return _call_native_mb_no_ret(
      AnimationNodeOneShot._bindings.method_set_mix_mode,
      this._owner,
      _mode
    );
    
  }
  get_mix_mode() {
    return _call_native_mb_ret(
      AnimationNodeOneShot._bindings.method_get_mix_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get mix_mode () {
  return this.get_mix_mode();
}
set mix_mode (new_value) {
  this.set_mix_mode(new_value);
}
get fadein_time () {
  return this.get_fadein_time();
}
set fadein_time (new_value) {
  this.set_fadein_time(new_value);
}
get fadein_curve () {
  return this.get_fadein_curve();
}
set fadein_curve (new_value) {
  this.set_fadein_curve(new_value);
}
get fadeout_time () {
  return this.get_fadeout_time();
}
set fadeout_time (new_value) {
  this.set_fadeout_time(new_value);
}
get fadeout_curve () {
  return this.get_fadeout_curve();
}
set fadeout_curve (new_value) {
  this.set_fadeout_curve(new_value);
}
get break_loop_at_end () {
  return this.is_loop_broken_at_end();
}
set break_loop_at_end (new_value) {
  this.set_break_loop_at_end(new_value);
}
get autorestart () {
  return this.has_autorestart();
}
set autorestart (new_value) {
  this.set_autorestart(new_value);
}
get autorestart_delay () {
  return this.get_autorestart_delay();
}
set autorestart_delay (new_value) {
  this.set_autorestart_delay(new_value);
}
get autorestart_random_delay () {
  return this.get_autorestart_random_delay();
}
set autorestart_random_delay (new_value) {
  this.set_autorestart_random_delay(new_value);
}

  static OneShotRequest = {
    ONE_SHOT_REQUEST_NONE: 0,
    ONE_SHOT_REQUEST_FIRE: 1,
    ONE_SHOT_REQUEST_ABORT: 2,
    ONE_SHOT_REQUEST_FADE_OUT: 3,
  }
  static MixMode = {
    MIX_MODE_BLEND: 0,
    MIX_MODE_ADD: 1,
  }

  static {
    this._init_bindings();
  }
}